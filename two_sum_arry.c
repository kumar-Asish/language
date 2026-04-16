#include<stdio.h>

int main(){
                int j,i,a,target;
                printf("enter the value of a : ");
                scanf("%d",&a);
                int arr[a];
                for(i=0;i<a;i++)
                {
                                printf("enter the %d number : ",i);
                                scanf("%d",&arr[i]);
                                
                }
                printf("\n enter the target value : ");
                scanf("%d",&target);
                for(i=0;i<a;i++)
                {
                                for(j=i+1;j<a;j++)
                                {
                                                if(arr[i]+arr[j]==target)
                                                {
                                                                printf("[%d,%d]",i,j);
                                                }
                                }
                }
return 0;
}