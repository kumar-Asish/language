#include<stdio.h>

int main(){
                int i,j,r,c,sum;
                printf("enter the value of rows: ");
                scanf("%d",&r);
                printf("enter the value of columns: ");
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
                for(i=0;i<r;i++)
                {
                                sum=0;
                                for(j=0;j<c;j++)
                                {
                                                sum=sum+arr[i][j];
                                }
                                printf("sum of rows is : %d\n",sum);
                }
                for(i=0;i<r;i++)
                {
                                sum=0;
                                for(j=0;j<c;j++)
                                {
                                                sum=sum+arr[j][i];
                                }
                                printf("sum of columns is : %d\n",sum);
                }
return 0;
}