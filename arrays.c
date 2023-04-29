#include<stdio.h>
#include<stdlib.h>
void read_array(int a[],int n){
	for(int x=0;x<n;x++){
	       scanf("%d", &a[x]);}}
int *read_array_dynamic(int n){
	int *p;
	p=(int*)malloc(n*sizeof(int));
	for(int i=0;i<n;i++){
		scanf("%d",&p[i]);}
	}
void print_array(int a[], int n){
	for(int x=0;x<n;x++){
		printf("%d ", a[x]);}
	printf("\n");}
void remove_first(int a[],int n){
	for(int x=0;x<n;x++){
		int swap=a[x+1];
		a[x]=swap;}}
void insert_first(int a[], int n, int newval){
	if (n>10){return;}
	for(int x=n-1;x>0;x--){
		a[x]=a[x-1];}
		a[0]=newval;}
void exchange_items(int a[],int n, int pos1, int pos2){
	int x;
	x=a[pos1];
	a[pos1]=a[pos2];
	a[pos2]=x;}
int main(){
	int ar[10];
	int i,n=0;
	while(1){
	scanf("%d",&i);
	if(i==(-1)){ exit(0);}
	else{
	switch(i){
		case 0:
			{	int c;
				scanf("%d",&c);
				if (n!=10){n++;
				insert_first(ar,n,c);}
				else{	
					printf("<error-full>\n");}
				break;}
		case 1:
			{if(n==0){
					 printf("<error-empty>\n");}
			else{
				remove_first(ar, n);
				n--;}
			break;}
		case 2:
			{       if (n!=0){
				print_array(ar,n);}
				else{
					printf("<empty>\n");}
				break;}
		case 3:
			{	int pos1,pos2;
				scanf("%d%d",&pos1,&pos2);
				if( (pos1<=n) && (pos2<=n)){
				exchange_items(ar,n,pos1,pos2);}
				else{ printf("<error-oob>\n");}}}}}}
