#include<stdio.h>
#include<stdlib.h>
int repnumber(int n,int k);
int power(int a,int b);
int power(int a ,int b){
	int i,term=1;
	for (i=1;i<=b;i++){
		term=term*a;}
	return term;}
int repnumber(int n,int k){
	int o,q,r=n,s= n/power(10,k-1);
	for (o=k-1;o>=0;o--){
		q=r/power(10,o);
		if (s==q){ if(o==0){return 1;}}
		else{return 0;
			break;}
		r=r%power(10,o);
		s=q;}}
int extract(int n,int x){
	int d,dig,l=0,f;
	for (d=1;d<=x;d++){
		dig=l;
		l=n%power(10,d);
		f= (l-dig)/power(10,d-1);}
	return f;}
int main(){
	int n,k,i,l,b,s;
	for (l=1;l>0;l++){	
	scanf("%d",&n);
	if (repnumber(n,3)==1){exit(0);}
	i=1;
		while (i>=1){int u,w,v,e;
			w=extract(n,3);
			u=extract(n,2);
			v=extract(n,1);
			if ((w>=u)&&(w>=v)){
				if (u>v){b= w*power(10,2)+u*power(10,1)+v;
					s= v*power(10,2)+u*power(10,1)+w;}
				else{b= w*power(10,2)+v*power(10,1)+u;
					s= u*power(10,2)+v*power(10,1)+w;}}
			else if((u>=w)&&(u>=v)){
				if (w>v){b= u*power(10,2)+w*power(10,1)+v;
					s= v*power(10,2)+w*power(10,1)+u;}
				else{b= u*power(10,2)+v*power(10,1)+w;
					s= w*power(10,2)+v*power(10,1)+u;}}
			else if((v>=w)&&(v>=u)){
				if (w>u){b= v*power(10,2)+w*power(10,1)+u;
					s= u*power(10,2)+w*power(10,1)+v;}
				else{b= v*power(10,2)+u*power(10,1)+w;
					s= w*power(10,2)+u*power(10,1)+v;}}
			e = n;
			n = b-s;
			printf("%d - %d = %d \n",b,s,n);
			if (e==n){printf("Repeats after %d iterations \n",i);
			break;}
			else{ i=i+1;
				continue;}}}}
