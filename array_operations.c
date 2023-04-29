#include<stdio.h>
#include<stdlib.h>
//print_arrays function defintion
void print_arrays(int a[], int b[], int n){
	for(int i=0;i<n;i++){
		printf("%d  %d\n",a[i],b[i]);}}//in oreder to print both a and b arrays

//find_match function definition
int find_match(int a[],int b[],int n, int val){
	for(int i=0;i<n;i++){
		if (a[i]== val){//to check if any element of array a is equal to val
			return b[i];}//to return the element of same index of array b
		else{
			if (i==n-1){
				return -1;}}}}
//update_match function defintion
int update_match(int a[],int b[],int n,int val, int bval){
	for(int i=0;i<n;i++){
		if (a[i]==val){//to check if any element of array a is equal to val
			b[i]=bval;//to update b array element with the same index
			return 0;}
		else{
			if (i==n-1){//to return -1 if not element of a is equal to val
				return -1;}}}}
//delete_match function defintion
int delete_match(int a[],int b[],int n,int val){
	for(int i=0;i<n;i++){
		if (a[i]==val){//to check if any element of array a is equal to val
			for(int j=i;j<n;j++){
				a[j]=a[j+1];//to update the array by removing that element
				b[j]=b[j+1];}return 0;}
		else{ if (i==n-1){
			return -1;}}}}
//main function
int main(){
	int n;
	scanf("%d",&n);//user input of the size of arrays
	int ids[10],marks[10];//declaration of arrays
	for (int i=0;i<n;i++){
		scanf("%d %d", &ids[i], &marks[i]);}//to add elements to both the arrays 
	while(1){
		int opt;
		scanf("%d",&opt);//user input of the option number
		switch(opt){//when option is 1
			case 1:{if (ids!=NULL){
				       print_arrays(ids,marks,n);}//function call
				else{
				       	printf("<empty>\n");}//output specification if array empty
				break;}
			//when option is 2 
			case 2:{ int val;
				 scanf("%d",&val);//user input of val
				 if(find_match(ids,marks,n,val)!=(-1)){
					 printf("%d\n", find_match(ids,marks,n,val));}//function call and output of corresponding marks
				 else{
					 printf("<value-not-found>\n");}
			         break;}
			//when option is 3
			case 3:
			       {int val,bval;
				scanf("%d %d",&val,&bval);//user input of val and bval
				update_match(ids,marks,n,val,bval);//function call
			       break;}
			//when option is 4
			case 4:{int val;
				scanf("%d",&val);//user input of val
				if(delete_match(ids,marks,n,val)==0){//function call
				n--;}//to update the size of array after deleting an element
				else if (delete_match(ids,marks,n,val)==(-1)){
					printf("<value-not-found>");}
				break;}
			//when any other option is entered
			default:{
					exit(0);}
		}
	}
}  
					
