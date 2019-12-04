#include<bits/stdc++.h>
using namespace std;
int prime(int n)
{
	int i;
	for(i=2;i<=sqrt(n);i++)
	if(n%i==0) return 0;
	return 1;
	
}
int main()
{
	int n,i=2;
	cin>>n;
	while(i<=n)
	{
		if(prime(i))
		cout<<i<<endl;
		i++;
	}
	return 0;
 } 
