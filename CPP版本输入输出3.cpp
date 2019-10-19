#include<bits/stdc++.h>
using namespace std; 
int main(){
	int m = INT_MIN;
	int x;
	while(cin >> x){//输入到文件尾
		m = max(m, x);
	}
	cout << m << endl;
	return 0;
}

