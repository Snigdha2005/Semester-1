#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int digits(int n);
int extract(int n,int i);
int remain(int n,int i);
int power(int a,int b);

int power(int a,int b){int k,term=1;
	for (k=1;k<=b;k++){
		term=term*a;}
	return term;}
int digits(int n){
	int x,v;
	for (x=1;x<n;x++){
		v = n%power(10,x);
		if (v==n){ return x;}
		else{ continue;}}}
int extract(int n,int i){
	int d,dig,r=0,f,s;
	s= digits(n);
	if (i<=s){
	for (d=1;d<=i;d++){
		dig= r;
		r= n%power(10,d);
		f= (r-dig)/power(10,d-1);}
	return f;}
	else{ return 0;}}
int remain(int n,int i){
	int t,l;
	if (i<=digits(n)){
	t = (n/power(10,i))*power(10,i-1);
	for (l=i-1;l>=1;l--){
		t = t+ extract(n,l)*power(10,l-1);}
	if (i!=1){return t+1;}
	else{return t;}}
	else{ return n;}}
int main(){
	int n,i,p;
	while (1){
	scanf("%d",&n);
	if (n<=0){exit(0);}
		p = digits(n);
		for (i=1;i<=p;i++){
			printf("%d\t",extract(n,i));
			printf("%d\n",remain(n,i));}
	}}
		


