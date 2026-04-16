#include<stdio.h>

int main(){
                int num,fact,temp,sum=0,rem;
                printf("enter the number : ");
                scanf("%d",&num);
                temp=num;
                while(num>0){
                                rem=num%10;
                                num=num/10;
                                fact=1;
                                for(int i=1;i<=rem;i++){
                                                fact=fact*i;
                                                
                                }  
                                sum=sum+fact;        
                }
                if(sum==temp){
                                printf("input number is strong number");

                }
                else{
                                printf("input number is not strong number");
                }
return 0;
}