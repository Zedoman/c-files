#include<iostream.h>

class Add{
	public:
	      int addition(int x, int y){
      		return x+y;
      	}
};
int main()
{
	int x,y,s;
	cout<<"Enter two numbers:";
	cin>>x>>y;
	
	Add obj;
	s=obj.addition(x,y);
	
	cout<<"The sum is:"<<s;
	return 0;
}