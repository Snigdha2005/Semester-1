#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int read_strings(char *a[], int n);//funtion declaration
void sort_strings(char *a[],int n);//function declaration

//read_strings function definition
int read_strings(char *a[],int n){
	int count=0;//count variable to count number of elements in array
	char string[20];
	char valid[]="finish";
	for(int i=0;i<n;i++){
		scanf("%s",string);//user input of string
		char *arr;//character pointer declaration
		arr=malloc(strlen(string)+1);//dynamic memory allocation for arr
		strcpy(arr,string);//copy string to arr
		if (strcmp(string,valid)!=0){//check if input string and valid are similar
			count=count+1;
			a[i]=arr;//adding string element to array of pointers a
		}
		else
			break;//to break loop if input similar to valid
		}
	return count;}//return the number of elements in a

//sort_strings function definition
void sort_strings(char *a[], int n){//to swap strings by comparing
	for(int i=0;i<n;i++){
		for(int j=0;j<i;j++){
			if (strcmp(a[i],a[j])<0){//to check the alphabetical order
				char *t;
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
			else if(strcmp(a[i],a[j])>=0)
				continue;
		}
	}
}
//main function
int main(){
	int x,n=10;
	char *a[10];
	x=read_strings(a,10);//function call
	for(int i=0;i<x;i++)//printing string inputs
		printf("%s\n",a[i]);
	sort_strings(a,x);//function call
	printf("\n");
	for(int y=0;y<x;y++)//printing string inputs after sorting
		printf("%s\n",a[y]);
}

