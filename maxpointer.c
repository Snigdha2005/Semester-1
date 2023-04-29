#include<stdio.h>
float *maxpointer(float *pa, float *pb,float *pc){
	float p,q,r,*f;
	p= *pa;
	q= *pb;
	r= *pc;
	if ((p>q) && (p>r)){
		f=pa;}
	else if ((q>p) && (q>r)){
		f=pb;}
	else if ((r>q) && (r>p)){
		f=pc;}
	return f;
}


int main(){
	float a,b,c, *pa,*pb,*pc;
	scanf("%f %f %f",&a,&b,&c);
	pa=&a;
	pb=&b;
	pc=&c;
	printf("%p %p %p", pa,pb,pc);
	printf("\n%p\n", maxpointer(pa,pb,pc));
	}

	
