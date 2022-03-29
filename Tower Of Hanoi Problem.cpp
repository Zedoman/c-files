#include<iostream.h>
#include<conio.h>
void TOH(int d,char tower1, char tower2, char tower3)
{
	if (d==1)
	{
		cout<<"\n Shift top disk from tower" << tower1 <<"to tower"<<tower2;
		return;
	}
	TOH(d-1,tower1,tower3,tower2);
	cout<<"\n Shift top disk from tower"<<tower1<<"to tower"<<tower2;
	
	TOH(d-1,tower3,tower2,tower1);
}
int main()
{
	int disk;
	cout<<"Enter the number of disks:";
	cin>>disk;
	
	if(disk<1)
	{
		cout<<"\n There are no disk to shift";
	}
	else
	{
		cout<<"\n There are"<<disk<<"disks in tower1\n";
	}
	TOH(disk,'1','2','3');
	cout<<"\n\n"<<disk<<"disks in tower 1 are shifted to tower 2";
	
	getch();
	return 0;
}