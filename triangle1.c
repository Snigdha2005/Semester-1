#include<stdio.h>
#include<math.h>
int main(){
	int i,n,p;
	char l,term;
	l = '*';
	scanf("%d",&n);
	for(i = n;i>=1;i--){p=1;
		while(p<=i){
			printf("%c",l);
			p++;
		}
		printf("\n");
	 }
}
