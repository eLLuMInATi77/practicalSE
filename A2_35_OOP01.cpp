/*Implement a class Complex which represents the Complex Number data type. Implement the
following
1. Constructor (including a default constructor which creates the complex number 0+0i).
2. Overload operator+ to add two complex numbers.
3. Overload operator* to multiply two complex numbers.
4. Overload operators << and >> to print and read Complex Numbers.*/
#include<iostream>
using namespace std;
class complex
{
    private:
        float real;
        float img;
    public:
    complex()
    {
        real=0;
        img=0;
    }
    friend istream &operator>>(istream&in,complex&c);
    friend ostream &operator<<(ostream&out,complex&c);
        complex operator+(complex t);
        complex operator*(complex t);
};
istream &operator>>(istream&in,complex&c)
{
    cout<<"\nENTER REAL AND IMAGINARY PART OF NOS.:";
    in>>c.real>>c.img;
}
ostream &operator<<(ostream&out,complex&c)
{
    cout<<"\nENTER REAL AND IMAGINARY PART OF NOS.:";
    out<<c.real<<"+"<<c.img<<"i";
}
complex complex::operator+(complex t)
{
    complex temp;                           
    temp.real=real + t.real;
    temp.img=img + t.img;
    return temp;
}
complex complex::operator*(complex t)
{
    complex temp;
    temp.real=(real*t.real)-(img*t.img);
    temp.img=(real*t.img)+(real*t.img);
    return temp;
}

int main()
{
    complex c1,c2,c3;
    
    cout<<"\nFOR 1st COMPLEX NO:";
    cin>>c1;
    cout<<c1;
    
    cout<<"\nFOR 2nd COMPLEX NO:";
    cin>>c2;
    cout<<c2;
    
    int choice;
do
{   
    cout<<"\nENTER OPERATION THAT YOU WANT TO PERFORM\n :\n1. ADDITION \n2. MULTIPLICATION\n";
    cin>>choice;
 
    switch(choice)
    {
        case 1: cout<<"\nPERMORM C1+C2";
            c3=c1+c2;
            cout<<c3;
            break;
        case 2: cout<<"\nPERMORM C1*C2";
            c3=c1*c2;
            cout<<c3;
            break;
        default : cout<<"INVALID CHOICE";
    }
} while (choice!=3);
}
