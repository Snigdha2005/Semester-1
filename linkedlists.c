#include<stdio.h>
#include<stdlib.h>
//defining a structure named student with attributes name id marks and a pointer to another student structure(creating a linked list)
struct student{
	char name[21];
	int id;
	float marks;
	struct student *next;};

//defining a function read_new_student which returns a pointer to another student structure 
struct student* read_new_student(){
	struct student *temp=(struct student *)malloc(sizeof(struct student));//dynamic memory allocation for temp student structure
	scanf("%s %d %f",(temp->name),&(temp->id),&(temp->marks));//user input of structure name id marks pointed by temp
	temp->next=NULL;//assigning the pointer NULL value to end the linked list
	return temp;}//returning the structure pointer temp

//defining a function insert_student_byid which returns a pointer to another student structure
struct student* insert_student_byid(struct student *head,struct student *new){
	if(head ==NULL){
		return new;}//to return new structure when head pointer is empty
	else if(!head || head->id > new->id){//to check if head pointer is empty or not and whether the id is greater than or not
		new->next=head;//updating the new structure next to head
		head=new;//updating head to new
		return head;}//returning head pointer
	struct student *temp=head;//declaration of new student structure named temp which is assigned head
	while (temp->next && temp->next->id <new->id){//to check if temp->next exists or not and to traverse along the linked list if all the ids are in increasing order
		temp=temp->next;}//updating the temp pointer
	new->next=temp->next;//updating new->next
	temp->next=new;//updating temp->next
	return head;}//returning head

//defining a function delete_student which returns a pointer to another student structure 
struct student *delete_student(struct student *head,int id){
	struct student *ptr,*temp2,*temp3;//declaration of ptr temp2 temp3 student structures pointers
	ptr=head;//assigning ptr head 
	if(!head){//to check if head is NULL
		return head;}
	else{
		if(head->id==id){//if the first structure id matches, deletion of first structure and returning modified list
			struct student *temp;
			temp=head;
			head=head->next;
			free(temp);
			return head;}
		else{//if structure id matches with any other, deletion of that structure and returning the modified list
			while(ptr->id!=id){
				temp3=ptr;
				ptr=ptr->next;}
			temp2=ptr->next;
			temp3->next=temp2;
			free(ptr);
			temp3=head;
			return temp3;}}}

//defining function print_student_list to print name id marks corresponding to each structure in the linked list
void print_student_list(struct student *head){
	if (head!=NULL){//to check if head is NULL
		struct student *ptr=NULL;
		ptr=head;
		while (ptr!=NULL){//printing
			printf("%s %d %.0f\n",ptr->name,ptr->id,ptr->marks);
			ptr=ptr->next;}}}

//main function
int main(){
	struct student *head=NULL;//declaring and initialising a student structure pointer
	int n;
	scanf("%d",&n);//user input of n
	struct student *poi;//declaring new student structure pointer poi
	poi=head;//assigning head to poi
	for(int i=0;i<n;i++){
		poi=read_new_student();//function call
		head=insert_student_byid(head,poi);}//function call
	print_student_list(head);//print the list elements
	while(1){int delid;
		scanf("%d",&delid);//user input of id
		if(delid>0){//to check if user input id is +ve
		head=delete_student(head,delid);//function call
		print_student_list(head);}//printing the list 
		else{exit(0);}//exiting if user input id not +ve
			      }
}
