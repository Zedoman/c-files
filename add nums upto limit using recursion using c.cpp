#include<stdio.h>
int addnums(int n);
int main()
{
	int num;
	printf("Enter a num:");
	scanf("%d",&num);
	printf("Sum=%d",addnums(num));
	return 0;
}
int addnums(int n)
{
	if(n>=0)
	{
		return n+addnums(n-1);
	}
	else
	{
		return n;
	}
}
//suppose the user entered 20. initially,addnums() is called from main()with passed 20 argumnts. the num is added to the result of addnums(19) then 18 upto 0.