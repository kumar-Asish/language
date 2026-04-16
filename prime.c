#include<stdio.h>

int main(){
    int i,n;
    printf("enter the number: ");
    scanf("%d",&n);
   int count=0;
   for(i=1;i<=n;i++)
   {
    if(n%i==0)
    {
        count++;
    }
   }
   if(count==2)
   {
    printf("input number is prime number\n");
   }
   else
   {
    printf("input number is not prime number\n");
   }
   
return 0;
}