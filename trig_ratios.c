#include<stdio.h>
#include<math.h>
double sin(double x);
double cos(double x);
void trig_ratios( double theta, double *s, double *c){
	*s= sin(theta);
        *c= cos(theta);
}
int main(){
	double theta,sine,cosine, *s,*c;
	scanf("%lf",&theta);
	s=&sine;
	c=&cosine;
	trig_ratios( theta,s,c);
        printf("%lf %lf", *s,*c);}	

