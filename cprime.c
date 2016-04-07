#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

typedef enum {true, false} bool;

int main(int argc, char *argv[]) {
	unsigned long count;
	unsigned long num=100;
	
	if(argc>1)
	{
		num=0;
		unsigned long len = strlen(argv[1]);
	
		//convert number passed in argument from string to integer
		unsigned long i;
		for(i=0;i<len;i++)
		{
			num=num*10+(argv[1][i]-'0');
		}
	}	
	printf("\nstart checking...");
	count=Count(num);
	printf("\nprimes until %d : %d\n",num, count);
	
	return 0;
}
bool IsPrime(unsigned long num)
{
		if(num<=3)
			return true;
		
		unsigned long i;
		for(i=2;i*i<=num;i++)
			if(num%i==0)
				return false;
		return true;
}
int Count(unsigned long max)
{
	unsigned long c=0;
	
	unsigned long i;
	for(i=2;i<=max;i++)
		if(IsPrime(i)==true)
			c=c+1;
	return c;
}


