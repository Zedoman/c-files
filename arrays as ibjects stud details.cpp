#include<iostream.h>

class student
{
	char name[100];
	int id;
	float fees;
	public:
	     void getdata(void);
	     void putdata(void);
};
void student :: getdata(void)
{
	cout<<"Enter name:";
	cin>>name;
	cout<<"Enter id:";
	cin>>id;
	cout<<"Course fees is:";
	cin>>fees;
} 
void student :: putdata(void)
{
	cout<<"Student Name: "<<name<<"\n";
	cout<<"Student id: "<<id<<"\n";
	cout<<"Student course fees: "<<fees<<"\n";
}
int main()
{
	int size;
	cout<<"Enter size of the data to  be filled: ";
	cin>>size;
	student details[size];
	for(int i=0;i<size;i++)
	{
		cout<<"\nDetails of students"<<i+1<<"\n";
		details[i].getdata();
	}
	cout<<"\n";
	for(int i=0;i<size;i++)
	{
		cout<<"\nStud details"<<i+1<<"\n";
		details[i].putdata();
	}
	return 0;
}