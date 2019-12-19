/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//find out if the number is perfect number or not
//6's factors= 1,2,3,6 --> 1+2+3=6
#include <stdio.h>
int main()
{
    int n,i,sum=0;
    printf("enter a number\t");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        sum=sum+i;
    }
    if(sum==n)
    printf("%d is a perfect number",n);
    else
    printf("%d is not a perfect number",n);
    return 0;
}
