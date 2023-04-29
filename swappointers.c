#include<stdio.h>
int main(){
	int a,b, *pa,*pb,*c;
	pa=&a;
	pb=&b;
	scanf("%d %d",&a,&b);
	printf("%p %p", pa,pb);
	c=pa;
	pa=pb;
	pb=c;
	printf("\n%p %p",pa,pb);
	printf("\n%d %d",*pa,*pb);}
