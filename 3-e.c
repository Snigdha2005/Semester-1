#include<stdio.h>
int main(){
	int n,i;
	for (n=2;n<=300;n++){
		for (i=2;i<n;i++){
			if (n%i!=0){
				if (i==n-1){
					printf("%d\n",n);}
				else
					continue;}
				else {break;}}}}
