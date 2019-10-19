#include<stdio.h>
int max(int a, int b){
	if(a > b)return a;
	return b;
}
int main(){
	int n = 10;
	int m = 0;
	int i; 
	for(i = 1; i <= n; i++){
		int x;
		scanf("%d", &x);
		m = max(m, x);
	}
	printf("%d\n", m);
	return 0;
}

