#include<iostream>
using namespace std;
int n;
#define size 10

template <class T>

void sel(T A[size])
{
	int i,j,min;
	T temp;
	
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i;j<n;j++)
		{
			if(A[j]<A[min])
			min=j;
		
		temp=A[i];
		A[i]=A[min];
		A[min]=temp;
		}
	}
	
	cout<<"Sorted Array:";
	for(i=0;i<n;i++)
	{
		cout<<""<<A[i]<<endl;
	}
}

int main()
{
	int i;
	int A[size];
	float P[size];
	
	cout<<"Enter number of Integers:";
	cin>>n;
	cout<<"Enter Integers:";
	for(i=0;i<n;i++)
	{
		cin>>A[i];
	}
	
	sel(A);
	
	cout<<"Enter Number of Decimal:";
	cin>>n;
	cout<<"Enter Decimal:";
	for(i=0;i<n;i++)
	{
		cin>>P[i];
	}
	
	sel(P);
	
	return 0;
}
