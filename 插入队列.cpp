#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,n=10,a[20],x,p=n-1;
	for(i=0;i<=n-1;i++)
	{
		cin>>a[i];
	}
	cin>>x;
	if(x>=a[n-1]) a[n]=x;
	while(x<a[p])
	{
		a[p+1]=a[p];
		p--;
	}
	a[p+1]=x;
	for(i=0;i<=n;i++)
	cout<<a[i]<<endl;
	return 0;
 } 
