#include<stdio.h>
#include<stdlib.h>
int main(){
	int n;
	scanf("%d",&n);//user input of n
	int *p;
	p=(int*)malloc(n*sizeof(int));
	for(int i=0;i<n;i++){
		scanf("%d",&p[i]);}//user input of elements
	while(1){int opt;
		scanf("%d",&opt);//user input of option 
		switch(opt){
			//when opt=1
			case 1:{
				        int t=p[0];
			       	        for(int x=0;x<n-1;x++){//to rotate the elements of the array
		                       		p[x]=p[x+1];}
					p[n-1]=t;
					for(int x=0;x<n;x++){
						printf("%d ",p[x]);}//to print elements of the array
					break;
			       }
			//when opt=2
			case 2:{
				       for (int i=n-1;i>=1;i--){//to shuffle the elements of the array randomly using Fisher-Yates shuffle algorithm
				       		for (int j=0;j<=i;j++){
					       		int swap=p[j];
					       		p[j]=p[i];
					       		p[i]=swap;}
				       }
				       for(int i=0;i<n;i++){
					       printf("%d ",p[i]);}//print elements of the array
				       break;
			       }
			//when opt is other than 1,2
			default :
			       		exit(0);}
		printf("\n");
	}
}

	
