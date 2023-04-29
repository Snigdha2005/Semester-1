#include<stdio.h>
void prime(n){
	for (int i=2;i<=n;i++){
		if (n%i==0){
			printf("%d",i);
			if (n/i!=1){
				return prime(n/i);}
			else{break;}}
		else{continue;}}}
int main(){
	int n;
	scanf("%d",&n);
	prime(n);}
