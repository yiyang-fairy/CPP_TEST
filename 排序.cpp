#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[6],i,j,t;
	for(i=1;i<=5;i++)
	cin>>a[i];
	for(i=1;i<=4;i++){
		for(j=i+1;j<=5;j++){
			if(a[i]>a[j]){
				t=a[i];a[i]=a[j];a[j]=t;
			}
		}
	}
	for(i=1;i<=5;i++) cout<<a[i]<<" ";
	
	return 0; 
} 
