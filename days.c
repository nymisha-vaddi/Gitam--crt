/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int
main ()
{
  int day;
  scanf ("%d", &day);
  switch (day)
    {
    case 1:
      printf ("Monday");
      break;
    case 2:
      printf ("Tuesday");
      break;
    case 3:
      printf ("Wednesday");
      break;
    case 4:
      printf ("Thursday");
      break;
      case 5:
      printf ("Friday");
      break;
    case 6:
      printf ("Saturday");
      break;
    case 7:
      printf ("Sunday");
    break;
    default:
    printf("Invalid");
    }
    return 0;
}

