#include <iostream>
#include "LinkedList.h" 
using namespace std;

void LinkedList::insertToHead(int input){
	
	Node *newNode = new Node();
	newNode->value = input;
	
	newNode->next = head;
	head = newNode;
	
	if (tail==NULL)
		tail = head;
		
}

void LinkedList::printAll(){
	
	Node *tmp = head;
	while (tmp!=NULL){
		cout<<tmp->value<<"->";
		tmp=tmp->next;
	}
}

void LinkedList::insertToTail(int input) {
    Node *newNode = new Node();
    newNode->value = input;
    if (head == NULL) {
        head = newNode;
        return;
    }
	Node *tmp = head;
    while (tmp->next !=NULL) {
        tmp = tmp->next;
    }
	tail = newNode;
	tmp->next = newNode;
}

void LinkedList::insetAfter(int input, int data) {	
	Node *newNode = new Node();
    newNode->value = input;
    
    Node *tmp = head;
      while (tmp != NULL) {
        if (tmp->value == data) {
          newNode->next = tmp->next;
          tmp->next = newNode;
          return;
        }
		tmp = tmp->next;
    }
    cout << "Node dengan data" << data << " Tidak Ditemukan." << endl;
}
void LinkedList::deleteFromHead()
{
	Node *delNode = head;
	head = head->next;
	delete delNode;
}
void LinkedList::deleteFromTail()
{
	Node *tmp = head;
	while (tmp->next->next != NULL)
	{
		tmp = tmp->next;
	}
	Node *delNode = tmp->next;
	tail = tmp;
	tail->next = NULL;
	delete delNode;
}
void LinkedList::deleteByValue(int input)
{
	Node *delNode;
	Node *tmp = head;
	
	if (input == head->value)
	{
		head = head->next;
		delete tmp;
		
	}
	else{
		
		while (tmp->value != input)
		{
			tmp = tmp->next;
		}
		delNode = tmp->next;
		tmp->next     = delNode->next;
		delNode = NULL;
		delete delNode;
	}
}
