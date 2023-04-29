#include<stdio.h>
void cir(int x,int y,int z,int *s,int *r,int *t){
	int a=x,b=y,c=z;
	*s=c;
	*r=a;
	*t=b;}
main(){
	int x,y,z;
	int s,r,t;
	scanf("%d%d%d",&x,&y,&z);
	cir(x,y,z,&s,&r,&t);
	printf("%d %d %d", s,r,t);}
