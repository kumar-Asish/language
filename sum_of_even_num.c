//sum of all even number upto n number
#include<stdio.h>

int main(){
                int num,sum=0,i;
                printf("enter the number : ");
                scanf("%d",&num);
                for(i=1;i<=num;i++){
                                if(i%2==0){
                                                sum=sum+i;
                                }
                }
                printf("%d",sum);
return 0;
}