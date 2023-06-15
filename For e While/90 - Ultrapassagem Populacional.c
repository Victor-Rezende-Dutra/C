/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a, b, c = 0;
    scanf("%d", &a);
    scanf("%d", &b);
    while (a < b){
        a += 0.03*a;
        b += 0.015*b;
        c ++;
    }
    printf("ANOS = %d\n", c);
    return 0;
}
