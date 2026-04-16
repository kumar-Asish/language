/* to count the digit of given number
and also calculate the sum of all digit of given number */
#include<stdio.h>

int main(){
                int num,count=0,rem,sum=0;
                printf("enter the number : ");
                scanf("%d",&num);
                while(num>0)
                {
                                rem=num%10;
                                sum=sum+rem;// sum of the digit of a given number.
                            num=num/10; //to count the digit of a given number.
                            count++;   
                }
                printf("the number of digit is : %d\n",count);
                printf("the sum all number is : %d\n",sum);
                
return 0;
}