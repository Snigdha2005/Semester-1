#include<stdio.h>
#include<math.h>
void prime(int n);
int main(){
	int n;
	scanf("%d",&n);
	prime(n);}
void prime(int n){int i,p;
	for (i=2; i<=n;i++){
		if (i==2){
			printf("%d\n",i);}
		else {for (p=2;p<i;p++){
			if (i%p!=0){
				if (p==i-1){
					printf("%d\n",i);}
				else
					continue;}
			else {break;}}}}}
