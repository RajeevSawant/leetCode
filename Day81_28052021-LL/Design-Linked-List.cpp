#include <iostream>
using namespace std;



class Node{

	int val;
	Node* next;

	public:
		Node(){
			val = 0;
		}

		Node(int x): val(x) {}
};


class MyLinkedList{

	public:
		int size;
		Node* head = new Node(0);

		MyLinkedlist(){

		}


		int get(int index){

			if (index > size) return -1;
		    
			ListNode* temp = head;

			for (int i = 0; i < index; i++) temp = temp -> next;

			return temp -> val;
		}



		void addAtHead(int val){
			Node* temp = head -> next;
			head -> next = new Node(val);
			head -> next -> next = temp; 
			size++;
		}


		void addAtTail(int val){
			Node* temp = head;
			while(temp -> next != NULL) temp = temp -> next;
			temp -> next = new Node(val);
			size++;
		}


		void addAtIndex(int index, int val){
			if (index > size) return;
			
			Node* temp = head;
			for (int i = 0; i < index; i++) temp = temp -> next;

			Node* temp1 = temp -> next;
			temp -> next = new Node(val);
			temp -> next -> next = temp1;
			size++;
		}


		void deleteAtIndex(int index){
			if (index >= size) return;
			Node* temp = head;
			for (int i = 0; i < index; i++) temp = temp -> next;
			Node* temp1 = temp -> next;
		        temp -> next = temp1 -> next;
			temp1 -> next = NULL;
			size--;
			delete temp1;
		}
};
