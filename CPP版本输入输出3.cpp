#include<bits/stdc++.h>
using namespace std; 
int main(){
	int m = INT_MIN;
	int x;
	while(cin >> x){//���뵽�ļ�β
		m = max(m, x);
	}
	cout << m << endl;
	return 0;
}

