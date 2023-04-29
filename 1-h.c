#include<stdio.h>
#include<math.h>
/*int main(){
	int n,t,x,sum=0;
	scanf("%d",&n);
	for (x=1;x<=5;x++){
		t=n%10;
		n = (n-t)/10;
		sum=sum+t;}
	printf("%d",sum);}*/
int power(a,b){
	int i,ten=1;
	for (i=1;i<=b;i++){
		ten=ten*a;}
	return ten;}

int main(){ int n,x,q,r,t;
	scanf("%d",&n);
	t=n;
	
	for (x=1;x<=5;x++){
		r= t%10;
		q=(t-r)/10;
		t=r*power(10,5-x)+q;}
	printf("%d",t);}



