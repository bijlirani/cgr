#include<iostream>
#include<map>
#include<string>
using namespace std;

// decare,data,size,display,search, close

int main()
{
	map <string,int> pop;
	pop.insert(pair<string,int>("MH",202));
	pop.insert(pair<string,int>("TN",122));
	pop.insert(pair<string,int>("JK",200));
	pop.insert(pair<string,int>("OD",98));

	map<string,int>::iterator it=pop.end();
	
	cout<<"The Size of Map is:"<<pop.size()<<endl;
	
	//display
	
	cout<<"Data In Map is:"<<endl;
	for(it=pop.begin();it!=pop.end();++it)
	{
		cout<<"State:\t"<<it->first<<"\tPopulation:\t"<<it->second<<" Millions"<<endl;
	}
	
	string s;
	cout<<"Enter State Name to Search:";
	cin>>s;
	
	it=pop.find(s);
	
	if(it!=pop.end())
	{
		cout<<"State:\t"<<it->first<<"\tPopulation:\t"<<it->second<<"Millions";
	}
	else 
	{
		cout<<"Record Not Found!";
	}
	
	return 0;
}

