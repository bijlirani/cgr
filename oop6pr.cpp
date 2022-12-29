#include<iostream>
#include<algorithm>
using namespace std;

class person
{
	public:
		string name;
		string dob;
		long ph;
		
		void getdata()
		{
			cout<<"Enter Name:";
			cin>>name;
			cout<"Enter DOB:";
			cin>>dob;
			cout<<"Enter Phone Number:";
			cin>>ph;
		}
		
		void display()
		{
			cout<<"Name:"<<name<<endl;
			cout<<"DOB:"<<dob<<endl;
			cout<<"Phone:"<<ph<<endl;
		}
};

bool compare(person &a, person &b)
{
	a.name<b.name;
}

int main()
{
	int n,i;
	cout<<"Enter The Number of Persons:";
	cin>>n;
	string z[n];
	person p[n];
	for(i=0;i<n;i++)
	{
		p[i].getdata();
	}
	
	sort(p,p+n,compare);
	
	cout<<"*******|Sorted Array|********";
	for(i=0;i<n;i++)
	{
		p[i].display();
	}
	
	string ns;
	cout<<"enter Name to Search:";
	cin>>ns;
	
	for(i=0;i<n;i++)
	{
		z[i]=p[i].name;
	}
	
	if (binary_search(z,z+n,ns))
	{
		cout<<"!!!Record Found!!!";
	}
	else 
	cout<<"!!!Record Not Found!!!";
	
return 0;
}
