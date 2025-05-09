#include <iostream>
using namespace std;

class Node{
    public:
      int key;
      int data;
      Node* next;

      Node(){
        key=0;
        data=0;
        next=NULL;
      }

      Node(int k,int d){
        key = k;
        data = d;
      }
};

class SinglyLinkedList{
    public:
        Node* head;
        SinglyLinkedList(){
                head=NULL;
        }
        SinglyLinkedList(Node *n){
            head = n;
        }
        //check if node exists using key value
       Node* nodeExists(int k)
{
    Node *temp = NULL;
    Node* ptr = head;
    while(ptr != NULL){
        if(ptr->key == k){
            temp = ptr;
            break; // Exit the loop once the node is found
        }
        ptr = ptr->next;
    }
    return temp; // Return the found node or NULL
}
        //prepend node - attack a node at the start
        void prependNode(Node* n){
            if(nodeExists (n->key)!=NULL){
                cout <<"Node already exists with key value :" <<n->key<<"Append another node with different key value"<<endl;
            }
            else{
                n->next=head;
                head=n;
                cout<<"Node prepended"<<endl;
            }
        }
        //append a node to a list
        void appendNode(Node *n){
            if(nodeExists(n->key)!=NULL){
                cout<<"Node already exists with key value" <<n->key<<"Append another node with different key value"<<endl;
            }
            else{
                if(head==NULL){
                    head = n;
                    cout<<"Node Appended"<<endl;
                }
                else{
                    Node *ptr = head;
                    while(ptr->next!=NULL)
                    {
                        ptr = ptr ->next;
                    }
                    ptr -> next=n;
                    cout<<"Node Appended"<<endl;

                }
            }
        }
        //insert a Node after a particular node in the list
        void insertNodeAfter (int k,Node *n){
            Node* ptr = nodeExists(k);
            if(ptr==NULL){
                cout<<"No node exists with key value"<<k<<endl;
            }
            else{
                if (nodeExists(n->key)!=NULL){
                    cout<<"Node Already exists with key value :" <<n->key<<"Append another node with different key value"<<endl;
                }
                else{
                    n->next=ptr->next;
                    ptr->next=n;
                    cout <<"Node inserted"<<endl;
                }
            }
        }
        //Delete node by unique key
        void deleteNodeByKey(int k){
            if(head==NULL){
                cout<<"Singly Linked List already empty cant delete"<<endl;

            }
            else if (head !=NULL){
                if(head->key==k){
                    head =head->next;
                    cout<<"Node Unlinked with keys value"<<k<<endl;
                }
                else
                {
                    Node *temp=NULL;
                    Node *prevptr = head;
                    Node *currentptr = head->next;
                    while(currentptr!=NULL){
                        if (currentptr -> key==k){
                            temp = currentptr;
                            currentptr=NULL;
                        }
                        else{
                            prevptr = prevptr->next;
                            currentptr = currentptr->next;
                        }
                        if(temp!=NULL){
                            prevptr->next=temp->next;
                            cout<<"Node unlinked with keys value" <<k<<endl;
                        }
                        else{
                            cout<<"Node doesnt exist with key value" <<k<<endl;
                        }
                    }
                }
                

            }
        }
        //update node
        void updateNodeByKey(int k,int d){
            Node* ptr = nodeExists(k);
            if(ptr!=NULL){
                ptr->data=d;
                cout<<"Node data updated successfully"<<endl;

            }
            else{
                cout<<"Node doesn't exist with key value"<<endl;
            }
        }
        //printing
        void printList(){
            if(head==NULL){
                cout<<"No Nodes in the singly list"<<endl;
            }
            else{
                cout<<endl<<"Singly Linked List Values" <<endl;
                Node *temp = head;
                while(temp!=NULL){
                    cout<<"("<<temp->key<<","<<temp->data<<") -->";
                    temp = temp -> next;
                }
            }
        }

};  

int main(){
   SinglyLinkedList s;
   int option;
   int key1,k1,data1;
   do
   {
    cout <<"\nWhat operation do you want to perform? Select option number (enter 0 to exit):" << endl;
    cout <<"1. appendNode()" << endl;
    cout <<"2. prependNode()" << endl;
    cout <<"3. insertNodeAfter()" << endl;
    cout <<"4. deleteNodeByKey()" << endl;
    cout <<"5. updateNodeByKey()" << endl;
    cout <<"6. print()" << endl;
    cout <<"7. Clear screen" << endl;

    cin >> option;
    Node* n1 = new Node();
    switch(option){
        case 0:
            break;
        case 1:
            cout << "Append node operation\nEnter key and data of the node to be appended: ";
            cin >> key1 >> data1;
            n1->key = key1;
            n1->data = data1;
            s.appendNode(n1);
            break;
        case 2:
            cout << "Prepend node operation\nEnter key and data of the node to be prepended: ";
            cin >> key1 >> data1;
            n1->key = key1;
            n1->data = data1;
            s.prependNode(n1);
            break;
        case 3:
            cout << "Insert node operation\nEnter key and data of the node to be inserted: ";
            cin >> key1 >> data1;
            cout << "Enter key of the node after which to insert: ";
            cin >> k1;
            n1->key = key1;
            n1->data = data1;
            s.insertNodeAfter(k1, n1);
            break;
        case 4:
            cout << "Delete node operation\nEnter key of the node to be deleted: ";
            cin >> k1;
            s.deleteNodeByKey(k1);
            break;
        case 5:
            cout << "Update node operation\nEnter key and new data of the node to be updated: ";
            cin >> key1 >> data1;
            s.updateNodeByKey(key1, data1);
            break;
        case 6:
            cout << "Print list operation\n";
            s.printList();
            break;
        case 7:
            system("cls");
            break;
        default:
            cout << "Enter a proper option number\n";
    }
   } while (option != 0);
   



 return 0; 
}