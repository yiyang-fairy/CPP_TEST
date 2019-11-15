#include<bits/stdc++.h>
using namespace std;
void A(char a[])
{
	for(int i=strlen(a)-1;i>0;i--)
	{
		a[2*i]=a[i];
		a[2*i-1]=' ';
	}
	cout<<a;
}
int main()
{
	char a[10];
	gets(a);
	A(a);
	
	return 0;
}
