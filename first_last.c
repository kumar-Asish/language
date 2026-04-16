#include<stdio.h>

int main(){
                int num,last,first;
                printf("enter the number : ");
                scanf("%d",&num);
                last=num%10;   //to find last number
                while(num>10){
                                num=num/10;  //to find first number
                }
                first=num;
                printf("the first number is : %d\n",first);
                printf("the last number is : %d\n",last);
                //To calculate the sum of first and last number 
                printf("sum of first and last number is : %d",last+first);
return 0;
}