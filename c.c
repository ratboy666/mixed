#include <stdio.h>

int i, j;

int main(int ac, char **av) {
    _frtn();
    printf("m1.c - main\n");
    printf("calling fortran\n");
    /* Arguments are passed as pointers, right to left.
     * FORTRAN-80 receives left to right, 1 or 2, 3 or
     * more, build up argument list (see $AT). For floating
     * conversions, use floatcnv (hitech->fp->ms and back
     * again for results). int (INTEGER), long (INTEGER*4),
     * and char (LOGICAL) are directly compatible.
     *
     * C has no COMMON
     */
    i = 10;
    j = 0;
    f(&i, &j);
    printf("\nback from fortran\n");
    printf("i = %d, j = %d\n", i, j);
    /*After the _frtn() call, the stack is different. Return
     * from main() does NOT work anymore. We need to be
     * explicit about our exit.
     */
    exit(0);
    return 0;
}
