#include <iostream>
using namespace std;

struct node {

   int data;
   struct node * next;	

};


struct node * head = new node;



void print_list(){

    struct node * container = new node;
    
    container = head;
    while (container != NULL){

       cout << container->data << "  "<< endl;
       container = container -> next; 
     } 
    
}



void insert_Item( int data ){




}

 
