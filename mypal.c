#include<stdio.h>
#include<math.h>
char mypal(char n){
	if ((n<'b')){
		printf("a");
	return ;}
	printf("%c",n);
	mypal(n-1);
	printf("%c",n);}
int main(){
	char n;
	printf("enter a letter from a-z:");
	scanf("%c",&n);
	mypal(n);}
