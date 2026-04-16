#include<stdio.h>

int main(){
                int i,j,k,n,c;
                printf("enter the value of line : ");
                scanf("%d",&n);
                for(i=0;i<n;i++)
                {
                                
                                for(k=0;k<=i;k++)
                                {
                                                if(i==0||k==0)
                                                {
                                                                c=1;
                                                }
                                                else{
                                                                c=c*(i-k+1)/k;
                                                }
                                                printf("%d ",c);
                                }
                                printf("\n");
                }
return 0;
}