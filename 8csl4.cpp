#include<iostream>
using namespace std;

void arent(int a[], int n){
	for (int i = 0; i < n; i++)
	{
		cin>>a[i];
	}
}


void armerge(int a[], int b[], int c[], int n, int m){
	int s=0;
	for (int i = 0; i < n; i++)
	{
		 c[i]=a[i];
	}
	for (int i = 0; i < m; i++)
	{
		 c[n+i]=b[i];
	}
	for (int i = 0; i < m+n; i++)
	{
		 cout<<c[i];
	}
}

int findmax(int c[], int x){
	int m=c[0];
	for (int i = 1; i < x; i++)
	{
		if(c[i]>m) m=c[i];
	}
	return m;
}

int main()
{
	int a[100],b[100],c[100],n,m;
	cout<<"enter size of array 1 : ";
	cin>>n;
	cout<<"\nenter the elements of array 1 : \n";
	arent(a,n);
	cout<<"enter size of array 2 : ";
	cin>>m;
	cout<<"\nenter the elements of array 2 : \n";
	arent(b,m);
	cout<<"\nthe merged array : ";
	armerge(a,b,c,n,m);
	cout<<"\nThe greatest number is : ";
	cout<<findmax(c,m+n);
	cout<<endl;
	
	return 0;
}