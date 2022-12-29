
#include <iostream>
using namespace std;
class complex 
{
	int x,y;
	public:
	complex()
	{
		x=0;
		y=0;
	
	}
	
	friend void operator >>(complex &u, complex &v)
	{
		cout<<"Please Enter Real Value For First Number (x1):"<<endl;
		cin>>u.x;
		cout<<"Enter The Imaginary Value For The First Number (y1):"<<endl;
		cin>>u.y;
		cout<<"Ether The Real Value for Second Number (x2):"<<endl;
		cin>>v.x;
		cout<<"Enter the Imaginary Value for Second Nuber (y2):"<<endl;
		cin>>v.y;
		
	}
	friend void operator <<(complex &u, complex &v)
	{
		cout<<"First Complplex Number is :"<<u.x<<"+"<<u.y<<"i"<<endl;
		cout<<"Second Complex Number is:"<<v.x<<"+"<<v.y<<"i"<<endl;
	}
	friend void operator +(complex &u,complex &v)
	{
		complex add;
		add.x=u.x+v.x;
		add.y=u.y+v.y;
		if(add.y>0)
		{
		cout<<"Addition of the given complex number is ="<<add.x<<'+'<<add.y<<"i"<<endl;
		}
		else
		cout<<"Addition of the given complex number is ="<<add.x<<'(-1)*'<<add.y<<"-i"<<endl;	
	}
	friend void operator -(complex &u, complex &v)
	{
		complex sub;
		sub.x=u.x-v.x;
		sub.y=u.y-v.y;
		if(sub.y>0)
		{
		cout<<"subtraction of the given complex number is ="<<sub.x<<'+'<<sub.y<<"i"<<endl;
		}
		else
		cout<<"Subtraction of the given complex number is ="<<sub.x<<(-1)*sub.y<<"-i"<<endl;	
	}
	friend void operator *(complex &u,complex &v)
	{
		complex mult;
		mult.x=(u.x*v.x)-(u.y*v.y);
		mult.y=(u.x*v.y)+(v.x*u.y);
		
		if(mult.y>0)
		{
			cout<<"Multiplication is:\n"<<mult.x<<"+"<<mult.y<<"i";
		}
		else
		{
			cout<<"Multiplication is:\n"<<mult.x<<"+"<<mult.y<<"-i";
		}
	}
	
	
};
int main()
{
	char ch;
	char des;
	complex s1,s2;
	operator>>(s1,s2);
	operator<<(s1,s2);
	do
	{
		cout<<"choose the operation to be performed"<<endl;
		cout<<"(+) addition"<<endl;
		cout<<"(-) subtraction"<<endl;
		cout<<"(*) multiplication"<<endl;
		cin>>ch;
		switch(ch)
		{
			case '+':
			s1+s2;
			break;
			case '-':
			s1-s2;
			break;
			case '*':
			s1*s2;
			break;
			default:
			cout<<"Enter Valid Input"<<endl;
		}
		cout<<"Do You wish to perform operation Again? (Y/N)"<<endl;
		cin>>des;		
	}
	while (des=='y'|| des=='Y');
}
/*
#include <iostream>
using namespace std;
class complex 
{
	int x,y;
	public:
	complex()
	{
		x=0;
		y=0;
	
	}
	
	friend void operator >>(complex &u, complex &v)
	{
		cout<<"Please Enter Real Value For First Number (x1):"<<endl;
		cin>>u.x;
		cout<<"Enter The Imaginary Value For The First Number (y1):"<<endl;
		cin>>u.y;
		cout<<"Ether The Real Value for Second Number (x2):"<<endl;
		cin>>v.x;
		cout<<"Enter the Imaginary Value for Second Nuber (y2):"<<endl;
		cin>>v.y;
		
	}
	friend void operator <<(complex &u, complex &v)
	{
		cout<<"First Complplex Number is :"<<u.x<<"+"<<u.y<<"i"<<endl;
		cout<<"Second Complex Number is:"<<v.x<<"+"<<v.y<<"i"<<endl;
	}
	friend void operator +(complex &u,complex &v)
	{
		complex add;
		add.x=u.x+v.x;
		add.y=u.y+v.y;
		if(add.y>0)
		{
		cout<<"Addition of the given complex number is ="<<add.x<<'+'<<add.y<<"i"<<endl;
		}
		else
		cout<<"Addition of the given complex number is ="<<add.x<<(-1)*add.y<<"-i"<<endl;	
	}
	friend void operator -(complex &u, complex &v)
	{
		complex sub;
		sub.x=u.x-v.x;
		sub.y=u.y-v.y;
		if(sub.y>0)
		{
		cout<<"subtraction of the given complex number is ="<<sub.x<<'+'<<sub.y<<"i"<<endl;
		}
		else
		cout<<"Subtraction of the given complex number is ="<<sub.x<<(-1)*sub.y<<"-i"<<endl;	
	}
	friend void operator *(complex &u,complex &v)
	{
		cout<<"Hello";
	}
	
	
};
int main()
{
	char ch;
	char des;
	complex s1,s2;
	operator>>(s1,s2);
	operator<<(s1,s2);
	do
	{
		cout<<"choose the operation to be performed"<<endl;
		cout<<"(+) addition"<<endl;
		cout<<"(-) subtraction"<<endl;
		cout<<"(*) multiplication"<<endl;
		cin>>ch;
		switch(ch)
		{
			case '+':
			s1+s2;
			break;
			case '-':
			s1-s2;
			break;
			case '*':
			s1*s2;
			break;
			default:
			cout<<"Enter Valid Input"<<endl;
		}
		cout<<"Do You wish to perform operation Again? (Y/N)"<<endl;
		cin>>des;		
	}
	while (des=='y'|| des=='Y');
}
/*
================OUTPUT===================

Please Enter Real Value For First Number (x1):
3
Enter The Imaginary Value For The First Number (y1):
2
Ether The Real Value for Second Number (x2):
5
Enter the Imaginary Value for Second Nuber (y2):
4
First Complplex Number is :3+2i
Second Complex Number is:5+4i
choose the operation to be performed
(+) addition
(-) subtraction
(*) multiplication
+
Addition of the given complex number is =8+6i
Do You wish to perform operation Again? (Y/N)
*/
