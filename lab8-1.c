#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,t=0;
	while(1){
	scanf("%d",&n);//user input of n
	int *p;
	p=(int*)malloc(n*sizeof(int));//for dynamic memory allocation
	if (n<=0)
		exit(0);//to exit if n<=0
	else if(n>t){//to check if current n is greater than previous n
		for (int i=0;i<n;i++){
			scanf("%d",&p[i]);}//user input of elements
		for(int i=0;i<n;i++){
			printf("%d ",p[i]);}}//output of array elements
	else if(n<=t){//to check if n is less than or equal to the previous n
		free(p);//to remove the current elements
		p=(int*)malloc(n*sizeof(int));
		for (int i=0;i<n;i++){
			scanf("%d",&p[i]);}//user input of elements
		for(int i=0;i<n;i++){
			printf("%d ",p[i]);}//output of elements
	}
	printf("\n");
	t=n;//to update t to current value of n
	    }
}

