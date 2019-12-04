#include<bits/stdc++.h>
using namespace std;
void nixu(char a[])
{
 int i=strlen(a)-1;
 while(i>=0)
 {
  cout<<a[i];
  i--;
 }
}
int main()
{
 char a[1000];
 gets(a);
 nixu(a);
 return 0; 
 } 
