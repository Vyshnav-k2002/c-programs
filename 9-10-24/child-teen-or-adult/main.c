/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a;
    printf("enter the age:");
    scanf("%d",&a);
    
    if(a<=12){
        printf("child");
    }
    else if(a>=13&&a<=19){
        printf("teen");
    }
    else if(a>=20&&a<=64){
        printf("adult");
    
    }
    else{
        printf("senior");
    }

    return 0;
}
