#include<iostream.h>

void modify(int data);//function declaration(prototype)

int main()
{
	int data = 10;
	modify(data);
	cout<<"Val of the data in the main function is:"<<data<<endl;
}
void modify(int data)
{
	data=5;//local variable
	cout<<"Val of the data in the calling function is:"<<data<<endl;
}