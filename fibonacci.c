/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//input:8
//output:0 1 1 2 3 5 8 13
//Fibonacci series #include <stdio.h>

#include<stdio.h>
int main()
{
    int n,x1=0,x2=1,x,i;
    printf("enter the no of terms\t");
    scanf("%d",&n);
    printf("%d\t%d\t",x1,x2);
    for(i=3;i<=n;i++)
    {
        x=x1+x2;
        printf("%d\t",x);
        x1=x2;
        x2=x;
    }
    return 0;
}
