#include <bits/stdc++.h>
#include <string>
using namespace std;
/*ALGORITHM inserting at the end
1. START
2. Create a new node and assign the data
3. Find the last node
4. Point the last node to new node
5. END*/
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
void insertatend(int data){
   
   //create a link
   struct node *lk = (struct node*) malloc(sizeof(struct node));
   lk->data = data;
   struct node *linkedlist = head;

   // point it to old first node
   while(linkedlist->next != NULL)
      linkedlist = linkedlist->next;

   //point first to new first node
   linkedlist->next = lk;
}
int main(){
   insertatbegin(12);
   insertatend(22);
   insertatend(30);
   insertatend(44);
   insertatend(50);
   cout << "Linked List: ";

   // print list
   printList();
}