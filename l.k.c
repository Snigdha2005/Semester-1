#include<stdio.h>
#include<stdlib.h>
int main(){
	int N=3;
	int isFlag=1;
	int a[N][N];
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			scanf("%d",&a[i][j]);}}
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			if (i!=j){
				if (a[i][j]!=a[j][i]){
					isFlag=0;}}}}
	if (isFlag==1)
		printf("symmetric");
	else
		printf("not symmetric");}
