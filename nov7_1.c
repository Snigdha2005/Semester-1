#include<stdio.h>
#include<math.h>

int main(){
	int age;
	printf("enter your age:");
	scanf("%d \n", &age);
	if(age<18){
		printf("you are a child");
	}
	else if((age>=18)&&(age<=65)){
	       printf("you are an adult");
	}
	else if(age>65){
		printf("you are a senior citizen");
	}
}

//int main(){
	int m,n;
	printf("enter two numbers:");
	scanf("%d %d",&m,&n);
	if((m%n==0)||(n%m==0)){
		printf("multiple");}
	else {printf("not a multiple");}
}

//int main(){
	int a,b;
	char x;
	printf("enter two numbers: ");
	scanf("%d %d ",&a,&b);
	printf("enter a character +-/*%: ");
	scanf("%c", &x);
	if(x==+){
		printf("%d",a+b);}
	else if(x==-){
		printf("%d",a-b);}
	else if(x==*){
		printf("%d",a*b);}
	else if(x==/){
		printf("%d",a/b);}
	else if(x==%){
		printf("%d",a%b);}
}

//int main(){
	float a,b,c;
	printf("enter values a,b,c for ax^2+bx+c:");
	scanf("%f %f %f \n\n\n", &a,&b,&c);
	float w,v,z,s,t,r;
	w= b*b-4*a*c;
	v= pow(w,(1/2));
	z= -b+v;
	s= -b-v;
	t= s/(2*a);
	r= z/(2*a);
	printf("solutions are %f %f",t,r);
}

//int main(){
	int a,b,c,d;
	printf("enter 4 numbers:");
	scanf("%d %d %d %d \n\n\n\n", &a,&b,&c,&d);
	printf("integers are %d %d %d %d", d,c,b,a);
}

//int main(){
	int a,b,c,d;
	printf("enter 4 integers:");
	scanf("%d %d %d %d \n\n\n\n", &a,&b,&c,&d);
	if((a>b)&&(a>c)&&(a>d)){
		printf("max:%d",a);}
	else if((b>a)&&(b>c)&&(b>d)){
		printf("max:%d",b);}
	else if((c>a)&&(c>b)&&(c>d)){
		printf("max:%d",c);}
	else if((d>a)&&(d>b)&&(d>c)){
		printf("max:%d",d);}
	if((a<b)&&(a<c)&&(a<d)){
		printf("min:%d",a);}
	else if((b<a)&&(b<c)&&(b<d)){
		printf("min:%d",a);}
	else if((c<a)&&(c<b)&&(c<d)){
		printf("min:%d",a);}
	else if((d<a)&&(d<b)&&(d<c)){
		printf("min:%d",a);}
}

//int main(){
	char grade;
	printf("grade:");
	scanf("%c",&grade);
	switch(grade){
		case'A': printf("excellent");
			 break;
		case'B': printf("good");
			 break;
		case'C': printf("fair");
			 break;
		case'D': printf("poor");
			 break;
		case'F': printf("failure");
	}}

//int main(){
	char character;
	printf("character");
	scanf("%c",&character);
	switch(character){
		case'C': printf("do");
			 break;
		case'D': printf("re");
			 break;
		case'E': printf("me");
			 break;
		case'N': printf("fa");
			 break;
		case'A': printf("la");
			 break;
		case'B': printf("ti");
			 break;
		default: printf("error");}}

//int main(){
	char ar;
	printf("character:");
	scanf("%c", &ar);
	if((ar==a)||(ar==e)||(ar==i)||(ar==o)||(ar==u)){
		printf("it is a vowel");}
	else if((ar==+)||(ar==-)||(ar==*)||(ar==/)||(ar==%)){
		printf("it is an operator");}
	else {printf("it is something else");}}

//int main(){
	char c;
	printf("enter single digit character");
	scanf("%c",&c);
	switch(c){
		case'0': printf("zero");
			 break;
		case'1': printf("one");
			 break;
		case'2': printf("two");
			 break;
		case'3': printf("three");
			 break;
		case'4': printf("four");
			 break;
		case'5': printf("five");
			 break;
		case'6': printf("six");
			 break;
		case'7': printf("seven");
			 break;
		case'8': printf("eight");
			 break;
		case'9': printf("nine");
			 break;}}

//int main(){
	float a;
	printf("enter number");
	scanf("%f",&a);
	x= pow(a,(1/2));
	printf("%d",x);
}

//int main(){
	float x,y;
	printf("enter in inches:");
	scanf("%f",&x);
	y=(42.926)/(16.9);
	printf("%f in cm is %f", x,x*y);}

