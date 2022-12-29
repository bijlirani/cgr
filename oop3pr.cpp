#include<iostream>
#include<string.h>

using namespace std;

class pub
{
	protected:
		string title;
		float price;
	public:
		void szero()
		{
			title='000';
			price=0.0;
		}
		void getdata()
		{
			cout<<"Enter Name:";
			cin>>title;
			cout<<"Enter Price:";
			cin>>price;
		}
		void putdata()
		{
			cout<<"Name: "<<title<<endl;
			cout<<"Price: "<<price<<endl;
		}
		
};

class book : public pub
{
	int page;
	
	public:
	void szero()
	{
		page=0;
		pub::szero();
	}
	
	void getdata()
	{
		pub::getdata();
		
		cout<<"Enter Page Count:";
		cin>>page;
		try
		{
			if(page<=0)
			throw 0;
			
			if(price<=0)
			throw 0.0;
		}
		catch (int x)
		{
			szero();
		}
		catch (double x)
		{
			szero();
		}
	}
	
	void putdata()
	{
		pub::putdata();
		cout<<"Page Count:"<<page<<endl<<endl;
	}
};

class tape : public pub
{
	float dur;
	
	public:
	void szero()
	{
		dur=0.0;
		pub::szero();
	}
	
	void getdata()
	{
		pub::getdata();
		cout<<"Enter Duration:";
		cin>>dur;
		
		try
		{
			if(dur<=0)
			throw 0.0;
			
			if(price<=0)
			throw 0.0;
		}
		catch(double x)
		{
			szero();
		}
		catch(double x1)
		{
			szero();
		}
	
	}
	void putdata()
	{
			pub::putdata();
			cout<<"Duration:"<<dur<<endl<<endl;
	}
};

int main()
{
	book B;
	tape T;
	cout<<"Enter Data for Book:"<<endl;
	B.getdata();
	B.putdata();
	cout<<"Enter Data for Data:"<<endl;
	T.getdata();
	T.putdata();
	return 0;
}
