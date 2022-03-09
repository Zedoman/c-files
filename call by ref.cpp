#include<iostream.h>

void swap(int data);//function declaration(prototype)

int main()
{
	int data = 10;
	swap(data);
	cout<<"Val of the data in the main function is:"<<data<<endl;
}
void swap(int data)
{
	data=5;
	cout<<"Val of the data in the calling function is:"<<data<<endl;
}