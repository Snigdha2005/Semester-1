#include<stdio.h>
int i=0;
val(){
	int i=100;
	printf("%d",i);
	i++;}
main(){
	printf("%d",i);
	i++;
	val();
	printf("%d",i);
	val();}
