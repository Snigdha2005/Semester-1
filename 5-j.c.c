#include<stdio.h>
int fibo(n){
	if (n>1){
		return fibo(n-1)+fibo(n-2);}
	else{return 1;}}
int main(){
	for (int i=1;i<=25;i++){
		printf("%d\t", fibo(i));}}

