#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node* next;
};
int main(){

	struct Node *head;
	struct Node *one = new Node();
	struct Node *two = new Node();
	struct Node *three = new Node();
	struct Node *four = new Node();

	one->data = 1;
	one->next = two;
	two->data = 2;
	two->next = three;
	three->data = 3;
	three->next = NULL;

	head = one;

	while(head != NULL){
		cout<<head->data<<" ";
		head = head->next;
	}
	cout<<"\n";

	/*
	head = one;                 // previous head value had become NULL so we need to declair it again 
	four->data = 0;
	four->next = head;
	head = four;                  // adding the node at head of the single linked list 

	while(head!= NULL){
		cout<<head->data<<" ";
		head = head->next;
	}

	*/

/*
	head = one;
	four->data = 4;
	four->next = NULL;
	while(head!= NULL){
		if(head->next == NULL){
			head->next = four;
			break;                   //adding the node at tile of the single linkes list....
		}
		head = head->next;
	}
	head  = one;
	while(head!= NULL){
		cout<<head->data<<" ";
		head = head->next;
	}

	*/
		

    int r = 0;
    head = one;
	four->data = 4;
	four->next = NULL;
	while(head!= NULL){
		if(head->next == NULL){
			head->next = four;
			break;                  
		}
		head = head->next;
	}
	head  = one;

	while(head != NULL){
		if(r-1 == 0){
			head->next = head->next->next;        /// adding a element at tail and removing a mode at index r ..
		}
		head = head->next;
		r--;
	}
	head = one;
	while(head!= NULL){
		cout<<head->data<<" ";
		head = head->next;
	}

	return 0;
}