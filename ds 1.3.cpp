// ds 1.3 
	#include<iostream>
     #include<bits/stdc++.h>
	  using namespace std;

	class Node
	{
	public:
	int data;
	Node* next;
	// Constructor.
	Node(int data)
	{	this -> data = data; this -> next = NULL;
	}
	// Destructor.
	~Node()
	{
	int value = this->data;
	// memory free. if(this->data)
	{
	delete next;
	this->next=NULL;
	}
	 
	cout<<"Node is free with data "<<value<<"\n";
	}
	};
	
	void InsertAtHead(Node* &head, int d)
	{
	Node* temp = new Node(d); temp -> next = head;
	head = temp;
	}
	
	void InsertAtTail(Node* &tail, int d)
	{
	Node* temp = new Node(d); tail -> next = temp;
	tail = temp;
	}
	
	void print(Node* &head)
	{
	Node* temp = head; while(temp!=NULL)
	{
     cout<<temp -> data<<" "; temp = temp -> next;
	}
	cout<<endl;
	}
	
	void Delete(Node* head, int position)
	{
	if(position == 1)
	{
	Node* temp = head; head = head -> next; temp -> next = NULL; delete temp;
	}
	else
	{
	Node* curr = head; Node* prev = NULL; int cnt=1; while(cnt<position){
	prev = curr;
	curr = curr->next; cnt++;
	}
	prev->next = curr->next; curr->next=NULL; delete curr;
}
	}
	 

	void Search(Node* head, int data)
	{
	int cnt = 1;
	Node* temp = head; while(temp!= NULL)
	{
	if(temp -> data == data)
	{
cout<<"The index is: "<<cnt<<endl; break;
	}
	else
	{
	temp=temp->next; cnt++;
	}
	}
	}

	int main()
	{
	Node* node1 = new Node(5); Node* head = node1;
	Node* tail = node1; InsertAtHead(head,4); InsertAtTail(tail,6); InsertAtTail(tail,7); cout<<"The list is:\n"; print(head);
	int choice;
	cout<<"1. Insert a new element\n2. Delete an existing element.\n3. Search an element.\n4. Display all the element\n";
	cout<<"Enter your choice(1-4)\n"; cin>>choice;
	switch (choice)
	{
	case 1:
	{
	int elem;
	cout<<"Enter the element you want to insert:\n"; cin>>elem;
	InsertAtTail(tail,elem);
	cout<<"After inserting the list is:\n"; print(head);
	}
	break;
	case 2:
	{
	int elem;
	cout<<"Enter the position you want to delete:\n"; cin>>elem;
	Delete(head, elem);
	 
	cout<<"After deleting the list is:\n"; print(head);
	}
break;
	case 3:
	{
	int elem;
	cout<<"Enter the element you want to search:\n"; cin>>elem;
	Search(head, elem);
	}
	break;
	case 4:
	{
	cout<<"The list is: \n"; print(head);
	}
	break;
	default:
	cout<<"Invalid input"; break;
	}
	return 0;

	}
