#include<stdio.h>
int gcd(a,b){
	if (a>b){int c,d;
		c= a/b;
		d=a-b*c;
		if (d!=0){
			return gcd(b,d);}
		else{return b;}}
	else if(b>a){return gcd(b,a);}
	else {return a;}}
int main(){int a,b;
	scanf("%d %d",&a,&b);
	printf("%d", gcd(a,b));}
