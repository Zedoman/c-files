#include<iostream.h>

class Avgsum{
	public:
	      int average(int x, int y, int z){
      		return (x+y+z)/3;
      	}
      	  int sum(int x, int y, int z){
  	      	return x+y+z;
  	      }
};        
int main()
{
	int x,y,z,s,c;
	cout<<"Enter three numbers:";
	cin>>x>>y>>z;
	
	Avgsum obj;
	s=obj.average(x,y,z);
	c=obj.sum(x,y,z);
	cout<<"The avg is:"<<s;
	cout<<"The sum is:"<<c;
	return 0;
}