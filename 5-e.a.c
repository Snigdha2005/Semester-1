#include<stdio.h>
main(){
	float area;
	int r=1;
	area=circle(r);
	printf("%f",area);}
circle(int r){
	float a;
	a= 3.14*r*r;
	return a;}
