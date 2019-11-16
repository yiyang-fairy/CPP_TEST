#include<bits/stdc++.h>
using namespace std;
int main()
{
	char a[10];
	int i;
	gets(a);
	/*for(i=0;i<=strlen(a)-1;i++)
	{
		cout<<a[i];
		if(i!=strlen(a)-1) cout<<" "; 
	}*/
	for(i=strlen(a)-1;i>=0;i--)
	{
		cout<<a[i];
		if(i!=0) cout<<" ";
	}
	
	return 0;
}
