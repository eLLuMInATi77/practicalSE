/*Write a function template for selection sort that inputs, sorts and outputs an integer array and a
float array.*/

#include<iostream>
using namespace std;
template<class T>
class sort
{	T a[20],temp;
	int n,i,j;
	public:
	void getdata();
	
	void order();
	
	void display();
};
template<class T>
void sort<T>:: getdata()
{
	cout<<"\nenter number of elements: ";
	cin>>n;
	cout<<"enter values: ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"\nThe array elements are: ";
	for(i=0;i<n;i++)
	{
		cout<<a[i];
		cout<<",";
	}
}
template<class T>
void sort<T>:: order()
{
	cout<<"\nArray in ascending order is: ";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;	
			}
		}	
	}
}

template<class T>
void sort<T>:: display()
{
	for(i=0;i<n;i++)
	{
		cout<<a[i];
		cout<<",";
	}	
}                                                                                           
int main()
{
cout<<"enter integer data:";
sort<int>obj1;

obj1.getdata();
obj1.order();
obj1.display();

cout<<"\nenter float data:";
sort<float>obj2;

obj2.getdata();
obj2.order();
obj2.display();
return 0;
}
