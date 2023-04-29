#include<stdio.h>
#include<stdlib.h>
//to avoid wastage of memory
#pragma pack(1)
struct student{//structure named student
	char name[21];
	int id;
	float marks;
};

//function defintion to read the name id and marks of n students
void scan(FILE* input_file,char* name,int* id, float* marks){
		fscanf(input_file,"%s %d %f",name,id,marks);}

//function to print the name id and marks of n students 
void print(FILE* output_file,char name[],int id, float marks){
		fprintf(output_file,"%s %d %.0f\n",name,id,marks);}
	
int main(){
	int n;//n denotes the numner of students
	FILE *input_file;
	FILE *output_file;
	input_file=fopen("input_file.txt","r");//open input_file in read mode
	fscanf(input_file,"%d",&n);//user input of n
	struct student stu[n];//structure elements separate declaration
	for (int i=0;i<n;i++){//user input of name id and marks
		scan(input_file,stu[i].name,&stu[i].id,&stu[i].marks);}//function call
	fclose(input_file);//close input_file.txt
	for (int i=0;i<n;i++){//sort according to the id of students
		for(int j=i;j<n;j++){
			if (stu[i].id>stu[j].id){
				struct student t;
				t=stu[i];
				stu[i]=stu[j];
				stu[j]=t;}}}
	output_file=fopen("output_file.txt","w");//open output_file
	for (int i=0;i<n;i++){//printing name id and marks in ascending order of ids in output_file.txt
		print(output_file,stu[i].name,stu[i].id,stu[i].marks);}
	fclose(output_file);//close output_file
			    }
