#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int m = a[0];
	int c = a[0];
	for(int i=1;i<n;i++)
	{
		c = max(a[i],c+a[i]);
		m = max(m,c);
	}
	cout<<m;
}
