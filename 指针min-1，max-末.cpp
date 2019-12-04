#include<stdio.h>
max_min(int *a)
{
	int *max,*min,*p,temp;
	min=max=a;
	for(p=a+0;p<a+10;p++)
	{
		if(*p>*max) max=p;
		else if(*p<*min) min=p;
	}
	temp=*min;*min=a[0];a[0]=temp;
	if(max<a) max=min;
	temp=*max;*max=a[9];a[9]=temp;
}
int main()
{
	int a[10],i;
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	max_min(a);
	for(i=0;i<10;i++)
	printf("%d ",a[i]);
	return 0;
 } 
