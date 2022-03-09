#include<iostream.h> //function call after main
void swap(int &a, int &b);
int main()
{
	int a,b,t;
	cout<<"Enter the vlue of a=";
	cin>>a;
	cout<<"Enter the vlue of b=";
	cin>>b;
	swap(a,b);
    cout<<"After swapping the value of a is="<<a<<endl;
	cout<<"After swapping the value of b is="<<b<<endl;
}
void swap(int &a, int &b)
{
	int t;
	t=a;
	a=b;
	b=t;
}