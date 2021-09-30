# C Standard Headers
C standard library headers conformant with C standard.

## Motivation
Nowadays, many C standard libraries, delivered with compiler toolkits or operating systems, have extensions or inline assembly included in the headers, for performance considerations. Some of them are not conformant with the C standard, where difficulties arise when testing custom or minimal C compilers.

This library only includes C standard headers, written in standard C.
