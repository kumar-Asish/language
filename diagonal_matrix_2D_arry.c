#include<stdio.h>

int main(){
                int i,j,r,c,sum=0;
                printf("enter the rows : ");
                scanf("%d",&r);
                printf("enter the rows : ");
                scanf("%d",&c);
                int arr[r][c];
                printf("enter the matrix :\n");
                for(i=0;i<r;i++)
                {
                                for(j=0;j<c;j++)
                                {
                                                scanf("%d",&arr[i][j]);
                                }
                }
                if(r!=c)
                {
                                printf("it is not diagonal matrix\n");
                }
                else
                {
                                 for(i=0;i<r;i++)
                {
                                for(j=0;j<c;j++)
                                {
                                                sum=0;
                                                if(i==j)
                                                                sum=sum+arr[i][j];   
                                }
                }
                printf("sum digonal matrix is : %d",sum);
                }

return 0;
}