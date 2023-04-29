#include<stdio.h>
#include<math.h>

int main(){
	int n,i,p,w;
	scanf("%d",&n);
	char l,s;
	l = '*';
	s = ' ';
	for(i=n;i>=1;i--){
		p = 1;
		w =0 ;
		while(w<=n-i){
			printf("%c",s);
			w++;}
		while(p<=i){
			printf("%c",l);
			p++;}
			
		printf("\n");}}
