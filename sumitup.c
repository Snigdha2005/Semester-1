#include<stdio.h>
void sumitup(int n, int *result){
	*result= *result+n;}
int main(){
	int n,sum=0,i;
	scanf("%d",&n);
	for (i=0;i<=n;i++){
		sumitup(i, &sum);}
	printf("%d", sum);}

