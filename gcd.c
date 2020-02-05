#include<stdio.h>
#include<stdlib.h>
void gcd(int *m, int *n)
{
if(*m < 1 || *n < 1)
{
printf("Only positive numbers allowed");
exit(0);
}
if( *m == *n)
return;

else if(*m > *n)
	{*m = *m-*n;
	gcd(m,n);}
else if(*m < *n)
	{
	*n = *n-*m;
	gcd(m,n);}

}

int main()
{
int m ,n;
printf("Enter value of m and n : ");
scanf("%d%d",&m,&n);
printf("GCD of %d and %d = ",m,n);
gcd(&m,&n);
printf("%d",m);
return 0;

}
