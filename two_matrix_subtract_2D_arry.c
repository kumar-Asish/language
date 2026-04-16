#include<stdio.h>

int main(){
                printf("------- ASISH -------\n");
                 printf("--------- KUMAR ---------\n");
                  printf("----------- BERA -----------\n");
                int i,j,r,c;
                printf("enter the no of rows: ");
                scanf("%d",&r);
                 printf("enter the no of columns: ");
                scanf("%d",&c);
                int arr[r][c];
                int brr[r][c];
                int result[r][c];
                printf("enter the first matrix :\n");
                for(i=0;i<r;i++)
                {
                                for(j=0;j<c;j++)
                                {
                                                scanf("%d",&arr[i][j]);
                                }
                }
                printf("enter the second matrix :\n");
                  for(i=0;i<r;i++)
                {
                                for(j=0;j<c;j++)
                                {
                                                scanf("%d",&brr[i][j]);
                                }
                }
                  for(i=0;i<r;i++)
                {
                                for(j=0;j<c;j++)
                                {
                                               result[i][j]=arr[i][j]-brr[i][j];
                                }
                }
                printf("matrix is : \n");
                  for(i=0;i<r;i++)
                {
                                for(j=0;j<c;j++)
                                {
                                                printf("%d ",result[i][j]);
                                }
                                printf("\n");
                }

return 0;
}