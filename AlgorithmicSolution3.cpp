#include <iostream>
#include <stack>
using namespace std;

// 3. Implement a Queue using Two Stacks
// **Problem:** Implement a queue using two stacks.

class MyQueue {
    stack<int> s1, s2;
    public:
    //enque operation (add to back)
    void enqueue(int x){
        s1.push(x);
    }

    // Dequeue operation or remove from front

    int dequeue(){
        if (s2.empty()){
            if (s1.empty()) {
                    throw runtime_error("Queue is empty");
                }
            //move all from s1 to s2 to reverse order)
            while (!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
        }
        int front = s2.top();
        s2.pop();
        return front;
    }
    //check if queue is empty
    bool isEmpty(){
        return s1.empty() && s2.empty();
    }
};

int main(){
    MyQueue q;
    //enqueue elements

    for (int i = 0; i < 5;i++){
        q.enqueue(i);
        cout << "enqued: " << i << endl;
    }

    cout << "\nDequeing:\n";
    while (!q.isEmpty()){
        cout << q.dequeue() << "";

    }
    cout << endl;
    return 0;
}
