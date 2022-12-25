/*
NAME - Durvesh Ravindra Kshirsagar
CLASS - csd SE
ROLL no. - 35
subj. - OOP
*/


/*Write a C++ program that creates an output file, writes information to it, closes the file, open
it again as an input file and read the information from the file.*/

#include<iostream>
#include<string.h>
//#include<ostream>
#include<fstream>
//#include<ifstream>
using namespace std;
int main()
{
    int roll;
    char name[50],add[50];
    
    ofstream fout("student.txt",ios::app);  //Used Append Function
    //cin.ignore();
    
    cout<<"Enter Name:";
    cin.getline(name,50);
    
    cout<<"Enter Roll No.:";
    cin>>roll;
    
    cin.ignore();
    
    cout<<"Enter Address:";
    cin.getline(add,50);
    
    fout<<name<<"\n";    
    fout<<roll<<"\n";
    fout<<add<<"\n";
    fout.close();
    
    ifstream ifs;
    ifs.open("student.txt");
    ifs>>name;
    cout<<"\nName Is:"<<name<<"\n";
    ifs>>roll;
    cout<<"Roll No Is:"<<roll<<"\n";
    ifs>>add;
    cout<<"Address Is:"<<add<<"\n";
    ifs.close();
    return 0;
}
    
