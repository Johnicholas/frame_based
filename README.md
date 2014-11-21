frame_based
===========

Ceu with TinyPtc on Windows

Ceu by Francisco Sant'Anna is a programming language for concurrency (without necessarily using threads) that compiles to C and has strong integration with C.

http://www.ceu-lang.org/

This connects Ceu to TinyPtc by gaffer (specifically the GDI implementation of the TinyPtc interface, which is by zoon).

http://sourceforge.net/projects/tinyptc/files/Windows%20Version/TinyPTC%20Windows%200.8/

There is also some code in here (Stack and Mem) taken from David R. Hanson's book "C Interfaces and Implementations" - which I typed in, but I believe is published as "libcii".

https://code.google.com/p/cii/

The build process is based on Code::Blocks, an IDE for C and C++ that works on Windows; I was able to compile and run this using gcc - I don't know if it will work with other compilers.

http://www.codeblocks.org/

The xy plaid pattern that the code renders is based on following Casey Muratori's video series, Handmade Hero.

http://handmadehero.org/

TODO: Get Code::Blocks to actually run 'lua ceu tinyptc.ceu' to GENERATE _ceu_app.h and _ceu_app.c rather than doing it manually.
