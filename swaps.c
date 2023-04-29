#include<stdio.h>
int swap(int *a, int *b){
	int t;
	t = *a;
	*a = *b;
	*b = t;
}

int main(){
	int a,b,c, *p,*q,*r;
	scanf("%d %d %d",&a,&b,&c);
	p=&a;
	q=&b;
	r=&c;
	printf("%d %d %d",*p,*q,*r);
	swap(p,q);
	swap(q,r);
	printf("\n%d %d %d", *p, *q, *r);}
