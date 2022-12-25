/*
NAME - Durvesh Ravindra Kshirsagar
CLASS - csd SE
ROLL no. - 35
subj. - OOP
*/


/*Write a program in C++ to use map associative container. The keys will be the names of states
and the values will be the populations of the states. When the program runs, the user is
prompted to type the name of a state. The program then looks in the map, using the state name
as an index and returns the population of the state.*/

#include<iostream>
#include<map>
#include<iterator>
#include<string>
using namespace std;
int main()
{
	map<string,int>populationMap;
	string name;
	int number, n;
	cout<<"\n How many states population you want to enter?";
	cin>>n; 
	cout<<"Enter the name of state and population \n";
	for(int i=0;i<n;i++)
	{
	    cin>>name>>number;
	    populationMap[name]=number;
	}
	populationMap.insert(pair<string, int>("Maharashtra", 114200000));
	map<string,int>::iterator iter;
	cout<<"Population of state\n";
	cout<<"\n Size of population Map:"<<populationMap.size()<<"\n";
	for(iter=populationMap.begin(); iter!=populationMap.end(); iter++)
	{
	    cout<<(*iter).first<<":"<<(*iter).second<<"\n";
	   // or cout<<iter->first<<":"<<iter->second<<"\n";
	}
	cout<<"Enter name of state whos population needs to be found: ";
	cin>>name;

	cout<<"Population of "<<name <<" is " <<populationMap[name]<<endl;

	populationMap.clear();
}
