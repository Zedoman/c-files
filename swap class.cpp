#include<iostream.h>

class swap{
	public:
	      int a,b;
};
int main(){
	int a,b;
	cout<<"enter two nums:";
	cin>>a>>b;
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"After swaping:"<<a<<b;
	return 0;
}