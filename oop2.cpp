#include<iostream>
using namespace std;

class data
{
	private:
	string name;
	string bg;
	string addr;
	string dob;
	string cldiv;
	string lic;
	static int c;
	int roll;
	long int ph;
	public:
	data();
	static int getcount();
	void getdata();
	void show();
	data (data *obj);
	data (int roll, long int ph, string name, string addr, string dob, string cldiv, string lic);
	~data(); 
};

int data:: c =0;

void data:: getdata()
{
	cout<<"Enter Name:"<<endl;
	cin>>name;
	cout<<"Enter Roll Number:"<<endl;
	cin>>roll;
	cout<<"Enter Telephone Number:"<<endl;
	cin>>ph;
	cout<<"Enter Address:"<<endl;
	cin>>addr;
	cout<<"Enter DOB:"<<endl;
	cin>>dob;
	cout<<"Enter Class and Division :"<<endl;
	cin>>cldiv;
	cout<<"Enter Lisance Number:"<<endl;
	cin>>lic;
} 
	int data::getcount()
	{
		return c;
	}

	void data::show()
	{
		cout<<"name:"<<name<<endl;
		cout<<"Roll no.:"<<roll<<endl;
		cout<<"Telephone:"<<ph<<endl;
		cout<<"Address:"<<addr<<endl;
		cout<<"Date of Birth:"<<dob<<endl;
		cout<<"Class And Division:"<<cldiv<<endl;
		cout<<"Lisance Number:"<<lic<<endl;
	}
		
	data::data()
	{
		roll=0;
		name="Name";
		addr="Address";
		dob="DOB";
		cldiv="Class And Division";
		lic="Lisance Number";
		cout<<"Default Constructor"<<endl;
		c++;
	}
data :: data (data *obj)
{
	cout<<"\n Copy Constructor"<<endl;
}
data::~data()
{
	cout<<"\n Destructer is called";
}	

	data::data(int roll, long int ph, string name, string addr, string dob, string cldiv, string lic)
	{
		cout<<"Parameterized Consructor"<<endl;
		c++;
		this->roll=roll;
		this->ph=ph;					//B=A  A=B
		this->name=name;
		this->addr=addr;
		this->dob=dob;
		this->cldiv=cldiv;
		this->lic=lic;
	}


int main()
{
	int num;
	data *d1 = new data();
	d1->show();
	delete d1;
	data *d2=new data(71,6969696969,"Atharva","Bhoknal","04/11/2003","SE A","IAm69");
	d2->show();
	data *d3= new data(d2);
	d3->show();
	delete d2;
	cout<<"\n Enter Size of the Database:";
	cin>>num;
	data dx[num];
	for (int i=0;i<num;i++)
	{
		dx[i].getdata();
	}	
	for (int i=0;i<num;i++)
	{
		dx[i].show();
	}
	cout<<"Number of Constructor Calls and total number of object:"<<data::getcount()<<endl;
	return 0;
}
/*
======OUTPUT======
Default Constructor
name:Name
Roll no.:0
Telephone:0
Address:Address
Date of Birth:DOB
Class And Division:Class And Division
Lisance Number:Lisance Number

 Destructer is calledParameterized Consructor
name:Atharva
Roll no.:71
Telephone:6969696969
Address:Bhoknal
Date of Birth:04/11/2003
Class And Division:SE A
Lisance Number:IAm69

 Copy Constructor
name:
Roll no.:0
Telephone:0
Address:
Date of Birth:
Class And Division:
Lisance Number:

 Destructer is called
 Enter Size of the Database:2
Default Constructor
Default Constructor
Enter Roll Number:
71
Enter Telephone Number:
1234567890
Enter Address:
Pune
Enter DOB:
04/11/2003
Enter Class and Division :
A
Enter Lisance Number:
GHI123
Enter Roll Number:
72
Enter Telephone Number:
1234567890
Enter Address:
Pune
Enter DOB:
26/01/2004
Enter Class and Division :
B
Enter Lisance Number:
ABC123
name:Name
Roll no.:71
Telephone:1234567890
Address:Pune
Date of Birth:04/11/2003
Class And Division:A
Lisance Number:GHI123
name:Name
Roll no.:72
Telephone:1234567890
Address:Pune
Date of Birth:26/01/2004
Class And Division:B
Lisance Number:ABC123
Number of Constructor Calls and total number of object:4

 Destructer is called
 Destructer is called
 */
