#include <iostream>
#include <string>
using namespace std;

class Stack{
    private:
       int top;
       int arr[5];

    public:
       Stack (){
              top = -1;
              for (int i = 0; i < 5; i++)
              {
                arr[i] = 0;
              }
              
       }
       bool isEmpty(){
         if (top==-1)
            return true;
         else
            return false;
       }

       bool isFull(){
         if(top==4)
            return true;
         else
            return false;
       }

       void push(int val){
           if(isFull()){
               cout<<"stack overflow" <<endl;
           }
        else
        {
            top++;
            arr[top]=val;
        }
       }
       int pop(){
           if(isEmpty()){
            cout<<"stack underflow" <<endl;
            return 0;
           }
        else{
            int popValue = arr[top];
            arr[top] = 0;
            top--;
            return popValue;

        }
       }
       int count(){
       return (top+1);
       }
       int peek(int pos){
          if(isEmpty()){
            cout<<"Stack underflow"<<endl;
            return 0;
          }
          else{
            return arr[pos];
          }
       }

       void change(int pos,int val){
               arr[pos] = val;
               cout<<"item changed at location"<<pos<<endl;
       }
       void display(){
        cout<<"All values in the stack are"<<endl;
        for (int i = 4; i > 0; i--)
        {
            /* code */
            cout<<arr[i]<<endl;
        }
         
       }
};

int main (){
    Stack s1;
    int option,position,value;
    do
    {
        /* code */
        cout<<"what operation do you want to perform?"<<endl;
        cout<<"1. Push"<<endl;
        cout<<"2. Pop"<<endl;
        cout<<"3. isEmpty"<<endl;
        cout<<"4. isFull"<<endl;
        cout<<"5. peek"<<endl;
        cout<<"6. cout"<<endl;
        cout<<"7. change"<<endl;
        cout<<"8. display"<<endl;
        cout<<"9. clear screen "<<endl;

        cin >> option;
        switch(option){
            case 1:
                  cout<<"Enter an item to push in the stack"<<endl;
                  cin>>value;
                  s1.push(value);
                  break;
            case 2:
                  cout<<"pop function called"<<s1.pop()<<endl;
                  break;
            case 3:
                if(s1.isEmpty()){
                    cout << "Stack is Empty" <<endl;
                }
                else
                {
                    cout <<"Stack is Empty" <<endl;
                }
                break;
            case 4:
                 if(s1.isFull()){
                    cout << "Stack is full " <<endl;
                }
                else
                
                    cout <<"Stack is not full" <<endl;
                    break;
                case 5:
                    cout <<"Enter position of item you want to peek" <<endl;
                    cin>>position;
                    cout<<"peek funtion called"<<position<<"is"<<s1.peek(position)<<endl;
                    break;
                case 6:
                    cout<<"number of items in the stack are"<<s1.count()<<endl;
                    break;
                case 7:
                    cout<<"change function called";
                    cout<<"change function called"<<endl;
                    cin>>position;
                    cout<<endl;
                    cout<<"enter value of item you want to change";
                    cin>>value;
                    s1.change(position,value);
                    break;
                case 8:
                    cout<<"Display function called"<<endl;
                    s1.display();
                    break;
                case 9:
                    system("cls");
                    break;
                default:
                    cout<<"Enter proper option number"<<endl;
                }
                
            

     } while (option != 0);
    


return 0;
}

