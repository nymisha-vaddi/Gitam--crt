/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//input:1947
//output:one nine four seven 
#include <stdio.h>

int
main ()
{
  int n, r,s,rev=0;
  printf ("enter a number\t");
  scanf ("%d", &n);
  while(n!=0)
  {
      r=n%10;
      rev=rev*10+r;
      n=n/10;
  }
  while (rev!= 0)
    {
      s = rev % 10;
      switch (s)
	{
	case (0):printf ("zero ");
	  break;
	case (1):printf ("one ");
	  break;
	case (2):printf ("two ");
	  break;
	case (3):printf ("three ");
	  break;
	case (4):printf ("four ");
	  break;
	case (5):printf ("five ");
	  break;
	case (6):printf ("six ");
	  break;
	case (7):printf ("seven ");
	  break;
	case (8):printf ("eight ");
	  break;
	case(9):printf ("nine ");
	  break;
	default:printf ("not valid ");
	}
      rev = rev/ 10;
    }

  return 0;
}
