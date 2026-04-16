#include<stdio.h>

int main(){
                int num1,num2,sum1=0,sum2=0,i;
                printf("enter the num1 : ");
                scanf("%d",&num1);
                printf("enter the num2 : ");
                scanf("%d",&num2);
                for(i=1;i<num1;i++){
                                if(num1%i==0)
                                {
                                                sum1=sum1+i;
                                }
                }
                for(i=1;i<num2;i++)
                {
                                if(num2%i==0)
                                {
                                                sum2=sum2+i;
                                }
                }
                if(sum1==num2 && sum2==num1)
                {
                                printf("two number are amicable number\n");
                }
                
                else{                           
                               printf("two number are not amicable number");
                }
return 0;
}