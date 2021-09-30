# C Standard Headers
C standard library headers conformant with C standard.

## Motivation
Nowadays, many C standard libraries, delivered with compiler toolkits or operating systems, have extensions or inline assembly included in the headers, for performance considerations. Some of them are not conformant with the C standard, where difficulties arise when testing custom or minimal C compilers. The external functions are generally available in system runtime libraries, while the headers may be problematic.

This library only includes C standard headers, written in standard C.

## Status
Currently the project in general refers [here](http://www.open-std.org/jtc1/sc22/wg14/www/docs/n1124.pdf). Some headers (e.g. `errno.h`) that defines macros that expand to platform-specific calls are not yet implemented, but will be implemented soon. Headers declaring functions that has no dependencies on platforms are fully supported.
