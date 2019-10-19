#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	vector<int>v;
	while(n){
		v.push_back(n % 10);
		n /= 10;
	}
	cout << v.size() << endl; 
	for(int i = v.size() -1; i >= 0; i--){
		cout << v[i];
		if(i != 0){
			cout << " ";
		}
	}
	cout << endl; 
	for(int i = 0; i < v.size(); i++){ 
		cout << v[i];
	}
	cout << endl;
} 


/*
n  12345
v = []

v = [5]
n = 1234

v = [5, 4]
n = 123

v = [5, 4, 3]
n = 12

v = [5, 4, 3, 2]
n = 1

v = [5, 4, 3, 2, 1]
n = 0

*/
