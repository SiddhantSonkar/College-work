#include<stdio.h>
int main()
{
	int i,n,c=0;
	scanf("%d", n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			c=c+1;
		}
	}
	if(c==2)
	{
		printf("The no. is prime");
	}
	
	else
	{
		
		printf("Its not a prime number");
	}
	
	
	
	
	
	
}
