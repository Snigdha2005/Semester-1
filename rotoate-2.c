#include<stdio.h>
int rrotate(int n,int k);
int power(int a,int b);
int rrotate(int n,int k){
	int q,r,term;
	r = n%10;
	q = (n-r)/10;
	term = q+(r*(power(10,k-1)));
	return term;}
int power(int a,int b){
	int i,term=1;
	for (i=1;i<=b;i++){
		term = term*a;}
	return term;}
int main(){
	int n,k,d,x,i,r;
	char c=' ';
	scanf("%d %d",&n,&k);
	d = n;
	for (i=1;i<=k;i++){
	for (x=1;x<=k;x++){
		r = (d%power(10,x))/power(10,x-1);
		printf("%d %c",r,c);}
		d = rrotate(d,k);
		printf("\n");}}


