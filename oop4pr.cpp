#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	char data[200];
	
	ofstream out;
	out.open("information.txt",ios::out);
	cout<<"Enter Data:";
	fgets(data,200,stdin);
	out<<data;
	out.close();
	
	ifstream in;
	in.open("information.txt",ios::in);
	in.getline(data,200);
	cout<<"Data is:";
	cout<<data;
	in.close();
	
	return 0;
}
