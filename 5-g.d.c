#include<stdio.h>
main(){
	float a=13.5;
	float *b,*c;
	b=&a;
	c=b;
	printf("%u%u%u",&a,b,c);
	printf("%f%f%f%f%f",a,*(&a),*&a,*b,*c);}
