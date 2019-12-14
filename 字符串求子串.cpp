#include<bits/stdc++.h>
using namespace std;
void copy(char *str,int n,int m)
{
        int i,j;
        char string[100];
        char *p = string;
        i = m-1;
		j = 0;
        str = str+i;
        while(i<n)
		{
            *(p+j) = *(str++);
            printf("%c",*(p+j) );
            i++;j++;
        }
}
int main()
{
    int n,m;
    char a[100];
    cin>>n;
    for(int i=0;i<n;i++)
    cin>>a[i];
    cin>>m;
    copy(a,n,m);
    return 0; 
}

    


