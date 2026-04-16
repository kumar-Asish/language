#include<stdio.h>

int main(){
                int rem,num,sum=0,base=1;
                printf("enter the number : ");
                scanf("%d",&num);
                while(num>0){
                rem=num%2;
                num=num/2;
                sum=sum+(rem*base);
                base=base*10;
                }
                printf("%d",sum);
return 0;
}