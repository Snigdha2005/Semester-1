#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	int n=3;double sum=0,x=0.5;
	int a[n][n];
	for (int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&a[i][j]);
			sum=sum+(a[i][j]*a[i][j]);}}
	double y= pow(sum,x);
	printf("%f\n",y);}
