#include<iostream.h>
#include<string.h>
using namespace std;//string likhle ata llikhte hbe
class student
{
	public:
	     string name;
	     int roll_no;
	     string branch;
};
int main()
{
	student stud1;
	stud1.name = "Avradeep";
	stud1.roll_no = 12;
	stud1.branch = "CORE";
	cout<<"Name: "<<stud1.name<<endl<<"Roll num: "<<stud1.roll_no<<endl<<"Branch: "<<stud1.branch<<"\n";
	cout<<endl;
	
	student stud2;
	stud2.name = "Nayak";
	stud2.roll_no = 123;
	stud2.branch = "AIML";
	cout<<"Name: "<<stud2.name<<endl<<"Roll num: "<<stud2.roll_no<<endl<<"Branch: "<<stud2.branch<<"\n";
	cout<<endl;
	
	student stud3;
	stud3.name = "Zedoman";
	stud3.roll_no = 1234;
	stud3.branch = "AEROSPACE";
	cout<<"Name: "<<stud3.name<<endl<<"Roll num: "<<stud3.roll_no<<endl<<"Branch: "<<stud3.branch<<"\n";
	cout<<endl;
}