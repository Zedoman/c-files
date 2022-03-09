#include<stdio.h>
#include<conio.h>

void swap(int *a, int *b)
{
	int t;
	t=*a;
	*a=*b;
	*b=t;
}
int main()
{
	int x,y,o;
	printf("Enter the value of x=");
	scanf("%d",&x);
	printf("Enter the value of y=");
	scanf("%d",&y);
	swap(&x,&y);
	printf("After swapping the value of a is= %d\n",x);
	printf("After swapping the value of b is= %d\n",y);
	return 0;
}
