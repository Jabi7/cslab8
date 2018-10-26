#include<iostream>
using namespace std;

void arent(int a[], int n){
	for (int i = 0; i < n; i++)
	{
		cin>>a[i];
	}
}

int arsum(int a[], int n){
	int s=0;
	for (int i = 0; i < n; i++)
	{
		s = s + a[i];
	}
	return s;
}

int main()
{
	int a[100],n;
	cout<<"enter strength of array : ";
	cin>>n;
	cout<<"\nenter the elements of array : \n";
	arent(a,n);
	cout<<"\nthe sum of array : ";
	cout<<arsum(a,n);
	cout<<endl;
	
	return 0;
}