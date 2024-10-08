/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,b;
    printf("enter the mark of maths:");
    scanf("%d",&a);
    printf("enter the mark of science:");
    scanf("%d",&b);
    if(a>=50 && b>=50){
        printf("passed");
    }
    else{
        printf("failed");
    }

    return 0;
}
