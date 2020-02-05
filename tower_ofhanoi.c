#include<stdio.h>

void tower(int n, char from, char to, char temp)
{
if( n == 1)
{
printf("1 moved from %c to %c \n",from,to);
return;
}
tower(n-1,from,temp,to);
printf("%d moved from %c to %c\n",n,from,to);
tower(n-1,temp,to,from);
}

int main()
{
int n;
printf("Enter number of elements : ");
scanf("%d",&n);
tower(n,'A','C','B');
return 0;
}
 
