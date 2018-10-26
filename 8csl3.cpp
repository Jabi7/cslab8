#include<iostream>
using namespace std;

void arent(int a[], int n){
	for (int i = 0; i < n; i++)
	{
		cin>>a[i];
	}
}




int kmax(int c[], int n, int k){
	int m;
	for(int j=0;j<=n;j++){
	for (int i = 0; i < n; i++)
	{
		if(c[i+1]>c[i]){
			m=c[j];
			c[j]=c[i];
			c[i]=m;
		}
	}
}
	return c[k-1];
}

int kmin(int c[], int n, int k){
	int m;
	for(int j=0;j<=n;j++){
	for (int i = 0; i < n; i++)
	{
		if(c[i+1]<c[i]){
			m=c[j];
			c[j]=c[i];
			c[i]=m;
		}
	}
}
	return c[k-1];
}


int main()
{
	int a[100],n,k;
	cout<<"enter size of array : ";
	cin>>n;
	cout<<"\nenter the elements of array : \n";
	arent(a,n);
	cout<<"\nenter k (<="<<n<<") : ";
	cin>>k;
	cout<<"\nthe kth largest element : ";
	cout<<kmax(a,n,k);
	cout<<"\nthe kth smallest element : ";
	cout<<kmin(a,n,k);
	cout<<endl;
	
	return 0;
}