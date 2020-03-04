#include<stdio.h>

int main(){
int i,j = 0,a[100],n,ele;
printf("Enter the number of elements : " );
scanf("%d",&n);
printf("Enter the elements : \n");
for(i = 0;i < n;i++)
    scanf("%d",&a[i]);
for(i = 1;i<n;i++){
    ele = a[i];
    j = i - 1;
    while (j>=0 && (a[j] > ele)){
        a[j+1] = a[j];
        j = j - 1;
    }
    a[j+1] = ele;
}
printf("Sorted array : \n");
for(i=0;i<n;i++)
    printf("%d\t",a[i]);
return 0;
} 

