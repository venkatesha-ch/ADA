#include<stdio.h>
#include<time.h>
void main()
{
int n,m,i,j,temp,min,x,arr[1000000];
double time_spent = 0.0;
clock_t begin = clock();
printf("1.bubble sort\n2.selection sort");
scanf("%d",&n);
switch(n)
{
case 1:


printf("enter the number of elements in the array");
       scanf("%d",&m);
       
       for(i=0;i<m;i++)
       {
         arr[i]=i;
       }
       for(i=0;i<m;i++)
       {
        for(j=i+1;j<m;j++)
         {
           if(arr[i]>arr[j])
             {
               temp=arr[i];
               arr[i]=arr[j];
               arr[j]=temp;
              }
          }
        }

break;
case 2:

printf("selection sort");
printf("enter the number of elements");
scanf("%d",&m);
for(i=0;i<m;i++)
{
 arr[i]=i;
}
for(i=0;i<m-1;i++)
{min=arr[i];
 for(j=i+1;j<m;j++)
 {if(arr[j]<min)
   {x=j;}
 }
 temp=arr[x];
 arr[x]=arr[i];
arr[i]=temp;
}


break;
}
clock_t end = clock();
time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
printf("Time elpased is %f seconds", time_spent);

}
