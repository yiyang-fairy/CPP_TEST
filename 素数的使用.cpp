#include<bits/stdc++.h>
using namespace std;
bool prime(int n){// true / false
	for(int i = 2; i * i <= n; i++){
		if(n % i == 0){
			return false;
		}
	}
	return true;
}

int main(){
	int n = 1000000007;
	cout << prime(n) << endl;// a, bÎªÊµ²Î
	
	int a = 1, b = 100;
	for(int i = a; i <= b; i++){
		if(prime(i)){
			cout << i << endl; 
		}
	}
} 
