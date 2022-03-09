#include<iostream.h>

using namespace std;//string likhle ata llikhte hbe
class item
{
	int num;
	float cost;
	public:
	     void getdata(int a, float b);
	     void putdata(void)
	     {
     		cout<<"Number: "<<num<<"\n";
     		cout<<"Cost: "<<cost<<"\n";
     	}
};
