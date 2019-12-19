/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//n digits Armstrong
#include <stdio.h>
#include<math.h>
int main()
{
    int n,i=0,sum=0,r,temp;
    printf("enter a number");
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        i++;
        n=n/10;
    }
    n=temp;
    while(n!=0)
    {
        r=n%10;
        sum=sum+pow(r,i);
        n=n/10;
    }
    if(temp==sum)
    printf("Armstrong number");
    else
    printf("Not armstrong number");
    return 0;
}
