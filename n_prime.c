#include<stdio.h>

int main(){
                int num,j,i,ctr=0;
                printf("enter the number : ");
                scanf("%d",&num);
                for(i=1;i<=num;i++){
                                for(j=2;j<=i;j++){
                                                if(i%j==0){
                                                                break;
                                                }
                                }
                                if(i==j){
                                                ctr+=i;
                                                printf("%d is prime\n",j);
                                }
                }
                printf("%d is the sum of n prime no",ctr);
return 0;
}