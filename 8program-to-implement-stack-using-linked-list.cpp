//program to implement stack using linked list
#include<iostream>
using namespace std;

class Stack{
private:
    struct Node{
        int data;
        Node* next;
    };
    Node* top;
public:
    Stack() { top = NULL; }
    // PUSH operation (Insert at beginning)
    void push(int x) {
        Node* newNode = new Node();
        newNode->data = x;
        newNode->next = top;
        top = newNode;
    }
    // POP operation (Delete from beginning)
    void pop() {
        if (top == NULL) {
            cout << "Stack Underflow! Nothing to pop." << endl;
            return;
        }
        Node* temp = top;
        top = top->next;
        delete temp;
    }
    // PEEK operation (View top element)
    void peek() {
        if (top == NULL) {
            cout << "Stack is empty." << endl;
        } else {
            cout << "Top element is: " << top->data << endl;
        }
    }
    // Display stack
    void display() {
        Node* temp = top;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    cout << "Stack elements: ";
    s.display();
    s.peek();
    s.pop();
    s.pop();
    cout << "After pop: ";
    s.display();
    s.peek();
    return 0;
}