#include<stdio.h>
#include<math.h>
int f=0,p=0;
int altsum(int n){
	if (n>0){
	if (n%2==0){
		f= f+n;
		return altsum(n-1);}
	else if(n%2!=0){
	        p=p+n;
		return altsum(n-1);}}
	return f-p;}
		
int main(){
	int n,x;
	printf("enter n:");
	scanf("%d",&n);
	x = altsum(n);
	printf("%d",x);
}
