#include <iostream>
using namespace std;

class Queue {
private:
    int front, rear, size;
    int capacity;
    int* arr;

public:
    Queue(int c) {
        front = size = 0;
        rear = capacity = c;
        arr = new int[capacity];
    }

    ~Queue() {
        delete[] arr;
    }

    bool isEmpty() {
        return (size == 0);
    }

    bool isFull() {
        return (size == capacity);
    }

    void enqueue(int item) {
        if (isFull()) {
            cout << "Queue overflow\n";
            return;
        }
        rear = (rear + 1) % capacity;
        arr[rear] = item;
        size++;
        cout << item << " enqueued to queue\n";
    }

    int dequeue() {
        if (isEmpty()) {
            cout << "Queue underflow\n";
            return -1;
        }
        int item = arr[front];
        front = (front + 1) % capacity;
        size--;
        return item;
    }

    int peek() {
        if (isEmpty()) {
            cout << "Queue is empty\n";
            return -1;
        }
        return arr[front];
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty\n";
            return;
        }
        cout << "Queue elements: ";
        for (int i = 0; i < size; i++) {
            cout << arr[(front + i) % capacity] << " ";
        }
        cout << endl;
    }
};

int main() {
    Queue q(5);
    int option, value;
    do {
        cout << "\nQueue Operations Menu:\n";
        cout << "1. Enqueue\n2. Dequeue\n3. Peek\n4. Display\n0. Exit\n";
        cout << "Enter your choice: ";
        cin >> option;
        switch (option) {
            case 1:
                cout << "Enter value to enqueue: ";
                cin >> value;
                q.enqueue(value);
                break;
            case 2:
                value = q.dequeue();
                if (value != -1)
                    cout << "Dequeued: " << value << endl;
                break;
            case 3:
                value = q.peek();
                if (value != -1)
                    cout << "Front element: " << value << endl;
                break;
            case 4:
                q.display();
                break;
            case 0:
                cout << "Exiting queue menu.\n";
                break;
            default:
                cout << "Invalid option. Try again.\n";
        }
    } while (option != 0);
    return 0;
}
