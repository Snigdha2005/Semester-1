#include<stdio.h>
int main(){
	int n,i;
	float j=0,term,fact=1;
	for (n=1;n<=7;n++){
		for (i=1;i<=n;i++){
			fact = fact*i;}
		term = n/fact;
		j = j+term;}printf("%f",j);}
