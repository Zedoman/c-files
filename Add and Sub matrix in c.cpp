#include<stdio.h>
#include<conio.h>
int main()
{
    int a[20][20],b[20][20],c[20][20],m,n,i,j,ch;
    printf("\n How many rows and columns?");
    scanf("%d %d",&m,&n);
    printf(" Enter A matrix \n");
    for(i=0;i<m;i++)
    {
                    for(j=0;j<n;j++)
                    {
                                    scanf("%d",&a[i][j]);
                    }
    }
    printf(" Enter B matrix \n");
    for(i=0;i<m;i++)
    {
                    for(j=0;j<n;j++)
                    {
                                    scanf("%d",&b[i][j]);
                    }
    }
    printf("\n Enter case:");
    scanf("%d",&ch);
    switch(ch)
    {
              case 1: for(i=0;i<m;i++)
                     {
                                           for(j=0;j<n;j++)
                                           {
                                                           c[i][j]=a[i][j]+b[i][j];
                                           }
                     }
                     printf("\n The Resultant sub matrix is:\n");
                     for(i=0;i<m;i++)
                     {
                                           for(j=0;j<n;j++)
                                           {
                                                           printf("%6d",c[i][j]);
                                                           printf("\n");
                                           }
                     }
                     break;
             case 2: for(i=0;i<m;i++)
                     {
                                           for(j=0;j<n;j++)
                                           {
                                                           c[i][j]=a[i][j]-b[i][j];
                                           }
                     }
                     printf("\n The Resultant sub matrix is:\n");
                     for(i=0;i<m;i++)
                     {
                                           for(j=0;j<n;j++)
                                           {
                                                           printf("%6d",c[i][j]);
                                                           printf("\n");
                                           }
                     }
                     break;
    }
    return 0;
}
    
             
