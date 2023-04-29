#include<stdio.h>
#include<stdlib.h>
int main(){
	int a[6][6];
	int b[6][6];
	int sum[6][6];
	for (int i=0;i<6;i++){
		for(int j=0;j<6;j++){
			scanf("%d",&a[i][j]);}
		}
	for (int i=0;i<6;i++){
		for(int j=0;j<6;j++){
			scanf("%d",&b[i][j]);}
		}
	for (int i=0;i<6;i++){
		for(int j=0;j<6;j++){
			sum[i][j]=a[i][j]+b[i][j];
			printf("%d",sum[i][j]);}printf("\n");}}


