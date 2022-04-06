#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char X;
	char Y;
	int age;
	float charges;
	printf("Enter Source station:");
	scanf("%c",&X);
	printf("Enter Destination station:");
	scanf("%s",&Y);
	printf("Enter the age of passenger:");
	scanf("%d",&age);

	if(X=='A' && Y=='B' && age<=5)
	{
		charges=(25*100)*0.5;
	}
	else if(X=='A' && Y=='B' && age>=60)
	{
		charges=(25*100)*0.25;
	}
	else if(X=='A' && Y=='B' && age>5 && age<60)
	{
		charges=(25*100);
	}
	
	if(X=='B' && Y=='C' && age<=5)
	{
		charges=(25*120)*0.5;
	}
	else if(X=='B' && Y=='C' && age>=60)
	{
		charges=(25*120)*0.25;
	}
	else if(X=='B' && Y=='C' && age>5 && age<60)
	{
		charges=(25*120);
	}
	
	if(X=='A' && Y=='C' && age<=5)
	{
		charges=(25*90)*0.5;
	}
	else if(X=='A' && Y=='C' && age>=60)
	{
		charges=(25*90)*0.25;
	}
	else if(X=='A' && Y=='C' && age>5 && age<60)
	{
		charges=(25*90);
	}

	printf("charges %f",charges);
    return 0;
}