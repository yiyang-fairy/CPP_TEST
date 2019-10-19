#include<stdio.h>
int max(int a, int b){
	if(a > b)return a;
	return b;
}
int main(){
	int m = -0x7fffffff;// 32bit = 4byte = 4 * ff(11111111)  0x7fffffff(INT_MAX)
	int x;
	while(scanf("%d",&x) != EOF){// 用ctrl+c表示文件尾  EOF = end of file
		m = max(m, x);
	} 
	printf("%d\n", m);
	return 0;
}

