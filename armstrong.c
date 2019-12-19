/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//input=153
//output is armstrong number
//input=123
//output is not armstrong number
//find out if the number is armstrong or not
#include <stdio.h>
int main()
{
    int n,i,sum=0,r,temp;
    printf("enter a number");
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;
    }
    if(temp==sum)
    printf("Armstrong number");
    else
    printf("Not armstrong number");
    return 0;
}
