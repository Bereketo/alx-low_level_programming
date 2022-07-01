#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n%10 == 0)
         {
           printf(" Last digit of "+n+"is "+0);
         }
        else 
         {
          printf("Last digit of " + n+ "is " +n);
         }
	return (0);
}
