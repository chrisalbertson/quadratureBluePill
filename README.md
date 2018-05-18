# quadratureBluePill
Arduino library for hardware based decoding quadrature encoder pulses with ARM STM32F103C8 "Blue Pill"

WARNING:  This library software is new and has not ben widely tested by many people.
Also a few planned features are still mising.  But it does seem to work and gives usable results.

"Blue Pill" is the name for a small development board containing an STM32F103C8T processor.
They sell on ebay for about $2.   These little boards are very powerful for their size and cost.
One feature they contain is built-in hardware based quadrature decoding.

With hardware quadrature decoding the A and B phases from the decoder are connected to
specifc pins on the board.  Then as the rotary encoder moves a hardware counter is incremented
and decremented to track motion of the encoder.  The incrementing and decrementing
is done without any software overhead.  It is hardware based.  Software can read and re-set
the counter and can process an interrupt each time the counter overflows

Using this feature on the ARM STM32 has always required some research and experiment.  This
library makes using the hardware decoders very easy.  It can be done with just three lines
of code that you can copy from a suplied example sketch.
