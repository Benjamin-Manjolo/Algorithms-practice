#include <bits/stdc++.h>
#include <string>
using namespace std;

/* ALGORITHM  inserting at the begining of the LinkedList 
1. START
2. Create a node to store the data
3. Check if the list is empty
4. If the list is empty, add the data to the node and 
   assign the head pointer to it.
5. If the list is not empty, add the data to a node and link to the 
   current head. Assign the head to the newly added node.
6. END*/
struct node {
   int data;
   struct node *next;
};
struct node *head = NULL;
struct node *current = NULL;

// display the list
void printList(){
   struct node *p = head;
   cout << "\n[";
   
   //start from the beginning
   while(p != NULL) {
      cout << " " << p->data << " ";
      p = p->next;
   }
   cout << "]";
}

//insertion at the beginning
void insertatbegin(int data){
   
   //create a link
   struct node *lk = (struct node*) malloc(sizeof(struct node));
   lk->data = data;
   
   // point it to old first node
   lk->next = head;
   
   //point first to new first node
   head = lk;
}
int main(){
   insertatbegin(12);
   insertatbegin(22);
   insertatbegin(30);
   insertatbegin(44);
   insertatbegin(50);
   cout << "Linked List: ";
   
   // print list
   printList();
}