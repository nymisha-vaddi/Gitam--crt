/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a=123456;
    long int b=123456789;
    unsigned int c=560000;
    printf("a=%d",a);
    printf("\nb=%d",b);
    printf("\nc=%u",c);
    printf("\n&a=%d",&a); //address is signed
    printf("\n&a=%u",&a); //address is unsigned
    printf("\n&a=%p",&a); //adress is hexadecimal
    return 0;
}

