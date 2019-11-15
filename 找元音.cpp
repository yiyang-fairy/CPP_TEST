#include<bits/stdc++.h>
using namespace std;
int main()
{
	char a[100],b[100];
	int i,j=0;
	gets(a);
	for(int i=0;a[i]!='\0';i++)
	{
		
		if(a[i]=='a' ||a[i]=='e' ||a[i]=='i' ||a[i]=='o' ||a[i]=='u')
		b[j++]=a[i];
	}
	puts(b);
	return 0;
}
