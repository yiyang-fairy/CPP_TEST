#include<bits/stdc++.h>
using  namespace std;
int main()
{
	int a[10],i,n=5,h,l,m,x,p=0;
	for(i=0;i<=n-1;i++)
	{
		cin>>a[i];
	}
	cin>>x;
	h=n-1;l=0;
	
	while(l<=h)
	{
		m=(h+l)/2;
		if(x==a[m])
		{
			p=1;cout<<m<<endl;break;
		}	
		else if(x<a[m])
		h=m-1;
		else if(x>a[m])
		l=m+1;
		
	}
	if(p==0)
	 {cout<<"Not exist!"<<endl;}
	
	return 0;
}
