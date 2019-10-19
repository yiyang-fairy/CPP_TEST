#include<bits/stdc++.h>
using namespace std; 
int main(){
	int n = 10;
	int m = INT_MIN;
	for(int i = 1; i <= n; i++){
		int x;
		cin >> x;
		m = max(x, m); 
	}
	cout << m << endl;
	return 0;
}

