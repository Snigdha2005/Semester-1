#include<stdio.h>
int main(){
	int i,p,x;
	for(i=1;i<4;i++){
		for (p=1;p<4;p++){
			if (p !=i){
				for (x=1;x<4;x++){
					if ((x !=p)&&(x!=i)){
						printf("%d\n", i*100+p*10+x);}}}}}}
