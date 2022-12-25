/*
NAME - Durvesh Ravindra Kshirsagar
CLASS - csd SE
ROLL no. - 35
subj. - OOP
*/


/*  2)  Develop a program in C++ to create a database of student’s information system containing the
following information: Name, Roll number, Class, Division, Date of Birth, Blood group, Contact
address, Telephone number, Driving license no. and other. Construct the database with
suitable member functions. Make use of constructor, default constructor, copy constructor,
destructor, static member functions, friend class, this pointer, inline code and dynamic
memory allocation operators-new and delete as well as exception handling.*/

#include<iostream>
#include<string.h>
using namespace std;
class student
{
	public:
		int rn;
		char clas[10];
		int srn;
		long int tele;
		char name[10];
		char BG[5];
		char div;
		char DOB[10];
		
		static int count;
	
		void getdata();
		friend void display(student & obj);
		
		student()  //constructor
		{ 
			rn=0;
			cout<<"\t constructor \n";
			rn=count;
			count++;
		}
		~student()    //destructor
		{
			cout<<"\n destructor";
			cout<<"\n destroing the object";
			count++;
		}
		static void getcount()
		{
			cout<<"construstor count is "<<count<<endl;
		}
		
		student(student&obj)
		{
			rn=obj.rn;
			strcpy(name,obj.name);
			strcpy(DOB,obj.DOB);
			strcpy(BG,obj.BG);
			strcpy(clas,obj.clas);
			div=obj.div;
			tele=obj.tele;
			srn=count;
			count++;
		}
};
	int student::count=0;
	void student::getdata()
	{
	cout<<"\n"<<"enter rn:";
	cin>>rn;
	cout<<"\n"<<"enter name:";
	cin>>name;
	cout<<"\n"<<"enter DOB:";
	cin>>DOB;
	cout<<"\n"<<"enter BG:";
	cin>>BG;
	cout<<"\n"<<"enter class:";
	cin>>clas;
	cout<<"\n"<<"enter div:";
	cin>>div;
	cout<<"\n"<<"enter tele:";
	cin>>tele;
	}
	
	void display(student & obj)
	{
		cout<<"\n"<<obj.rn;
		cout<<"\t"<<obj.name;
		cout<<"\t"<<obj.DOB;
		cout<<"\t"<<obj.BG;
		cout<<"\t"<<obj.clas;
		cout<<"\t"<<obj.div;
		cout<<"\t"<<obj.tele<<endl;
	}

	int main()
	{
	student s1;
	student s2(s1);
	
	student::getcount();
	
	cout<<"\n all the detail are as below: \n";
	cout<<" ROLL\t NAME\t 	DOB\t BLOOD_GROUP\t CLASS\t DIV\t PHONE\t";
	
	student*s[50];
	
	int i,n;
	cout<<"\n how many student object do you want to creater?";
	cin>>n;
	
	for(i=0;i<n;i++)
	{
		s[i]=new student();
	}
	for(i=0;i<n;i++)
	{
		s[i]->getdata();
	}
		cout<<"\n"<<"ROLL_NO";
		cout<<"\t"<<"NAME";
		cout<<"\t"<<"DOB";
		cout<<"\t"<<"BLOOD_GROUP";
		cout<<"\t"<<"CLASS";
		cout<<"\t"<<"DIV";
		cout<<"\t"<<"PHONE";
	for(i=0;i<n;i++)
	{
		display(*s[i]);
	}
	student::getcount();
	for(i=0;i<n;i++)
	{
		delete(s[i]);
	}
	
	return 0;
}

/*
         constructor
construstor count is 2

 all the detail are as below:
 ROLL    NAME           DOB      BLOOD_GROUP     CLASS   DIV     PHONE
 how many student object do you want to creater?2
         constructor
         constructor

enter rn:21

enter name:samay

enter DOB:23/2/2000

enter BG:B+

enter class:FE

enter div:A

enter tele:999999990

enter rn:22

enter name:Abhijit sharma

enter DOB:22/1/2000
enter BG:A-

enter class:BE

enter div:D

enter tele:9392848048

ROLL_NO NAME    DOB     BLOOD_GROUP     CLASS   DIV     PHONE
21      samay      003     B+      FE      A       999999990

22      Abhijit 000     A-      BE      D       2147483647
construstor count is 4

 destructor
 destroing the object
 destructor
 destroing the object
 destructor
 destroing the object
 destructor
 destroing the object
--------------------------------
Process exited after 126.9 seconds with return value 0
Press any key to continue . . .*/
 


	
