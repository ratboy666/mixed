# mixed
HI-TECH C, MicroSoft FORTRAN-80 mixed language programming

Here is a little ditty.

Mixed mode programming -- HI-TECH C main() calls FORTRAN-80 SUBROUTINE F(I, J)
Illustrates how to do it. Now, combine this with am9511 project floatcnv.c,
and you can exchange int, long and float data between C and FORTRAN.

Uses my MTREL project (objtomac.com) to convert C.OBJ to C.MAC, which is then
assembled and linked with LIBC.REL.

All of the needed .REL libraries (FORLIB.REL, LIBC.REL and LIBF.REL) are
included in this repository,

It is possible to call C from FORTRAN -- but I haven't done that yet.

Shows I/O from both FORTRAN and C
