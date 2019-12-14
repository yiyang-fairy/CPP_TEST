#include<bits/stdc++.h>
using namespace std;
void move(int *a,int n,int m)
{
	int *p,a_end;
	a_end=*(a+n-1);
	for(p=a+n-1;p>a;p--)
		*p=*(p-1);
	*a=a_end;
	m--;
	if(m>0) move(a,n,m);
}
int main()
{
	int a[100],m,n,i;
	cin>>n;
	for(i=0;i<n;i++)
	cin>>a[i];
	cin>>m;
	move(a,n,m);
	for(i=0;i<n;i++)
	cout<<a[i]<<" ";
 } 
