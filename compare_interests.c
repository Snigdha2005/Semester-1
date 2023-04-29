#include<stdio.h>
#include<math.h>
#include"utils.h"
int main(){
	float i,d,epsilon,p,a,b,c,e;
	//a=present value, b= n,c=r,e=t//
	printf("Enter the value of epsilon:");
	scanf("%f", &epsilon);
	p = 1;
	while(p>=1){
		scanf("%f %f %f %f", &a, &b, &c, &e);
		if ((a||b||c||e) <= 0){
			break;}
		i = compounded_value(a,b,c/100,e);
		d = inf_compounded_value(a,c/100,e,epsilon);
		printf("%f %f \t\n",i,d);
		p = p+1;}
}
