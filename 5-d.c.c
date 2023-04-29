#include<stdio.h>

int main(){int n;
	scanf("%d",&n);
	primefactor(n);}
int primefactor(int n){int q;
	for (int i=2;i<n;i--){if (n%i!=0){continue;}
		else{
		q = n/i;
		printf("%d",i);
		return primefactor(q);}}}

