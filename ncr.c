#include<stdio.h>

int ncr(int n, int r){
	if (n<r){
		return 0;}
	else if(n==r){
		return 1;}
	else if((n>r)&&(r==0)){
		return 1;}
	else{
		return ncr(n-1,r)+ncr(n-1,r-1);}
}

int main(){
	int n,r;
	printf("enter n,r");
	scanf("%d %d",&n,&r);
	printf("%d",ncr(n,r));}
