#include <stdio.h> 
#include <stdlib.h>
struct node{
	int info;
	struct node* next;
};
struct node* box = NULL;
void add(int num){
	struct node* newPtr = NULL;
	newPtr = (struct node*)malloc(sizeof(struct node));
	newPtr->info = num;
	newPtr->next = NULL;
	if(box!=NULL){
		struct node* temp = box;
		while(temp->next!=NULL){
			temp = temp->next;	
		}
		temp->next = newPtr;	
	}
	else{
		box = newPtr;
	}
}

void addFront(int num){
	struct node* newPtr = NULL;
	newPtr = (struct node*)malloc(sizeof(struct node));
	newPtr->info = num;
	newPtr->next = box;
	box = newPtr;
}

void delete1(){
	struct node* ptr = box;
	ptr = (struct node*)malloc(sizeof(struct node));
	box = box->next;
	free(ptr);
}

void printList(){
	while(box!=NULL){
		printf("%d ",box->info);
		box = box->next; 
	}
}

main(){ 
	//struct node* box = NULL;
	add(10);
	add(20);
	add(30);
	add(35);
	addFront(100);
	delete1();
	printList();
} 
