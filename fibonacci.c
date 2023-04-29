#include<stdio.h>
#include<math.h>

int fibonacci(int n){
	int f0=0,f1=1;
	if (n>2){
		return fibonacci(n-1)+fibonacci(n-2);}
	if (n==(0)){
		return 0;}
	if (n==1){
		return 1;}}

int main(){int n;
	printf("enter n:");	
	scanf("%d",&n);
	printf("%d", fibonacci(n));}
		
