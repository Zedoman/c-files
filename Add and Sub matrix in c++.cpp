#include<iostream.h>
#include<conio.h>
int main()
{
    int a[20][20],b[20][20],c[20][20],m,n,i,j,ch;
    cout<<"\n How many rows and columns?";
    cin>>m>>n;
    cout<<" Enter A matrix \n";
    for(i=0;i<m;i++)
    {
                    for(j=0;j<n;j++)
                    {
                                    cin>>a[i][j];
                    }
    }
    cout<<" Enter B matrix \n";
    for(i=0;i<m;i++)
    {
                    for(j=0;j<n;j++)
                    {
                                    cin>>b[i][j];
                    }
    }
    cout<<"\n Enter case:";
    cin>>ch;
    switch(ch)
    {
              case 1: for(i=0;i<m;i++)
                     {
                                           for(j=0;j<n;j++)
                                           {
                                                           c[i][j]=a[i][j]+b[i][j];
                                           }
                     }
                     cout<<"\n The Resultant add matrix is:\n";
                     for(i=0;i<m;i++)
                     {
                                           for(j=0;j<n;j++)
                                           {
                                                           cout<<c[i][j];
                                                           cout<<"\n";
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
                     cout<<"\n The Resultant sub matrix is:\n";
                     for(i=0;i<m;i++)
                     {
                                           for(j=0;j<n;j++)
                                           {
                                                           cout<<c[i][j];
                                                           cout<<"\n";
                                           }
                     }
                     break;
    }
    return 0;
}
    
             
