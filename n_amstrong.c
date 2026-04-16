#include<stdio.h>
#include<math.h>
int main(){
    int rem,num,count=0;
    double sum=0;
    printf("enter the number: ");
    scanf("%d",&num);
    int temp=num;
    int t=num;
    while(num>0)
    {
        num=num/10;
        count++;
    }
    printf("total number is: %d\n",count);
        while(temp>0){
            rem=temp%10;
            temp=temp/10;
            sum=sum+pow(rem,count);
    }
    if(t==sum){
        printf("input number is amstrong number\n");
    }
    else{
        printf("input number is not amstrong number\n");
    }   
return 0;
}