//implementation-of-queue-using-array
#include<iostream>

using namespace std;
class queue{
    private:
    int front;
    int rear;
    int arr[5];
    public:
    queue(){
        front=-1;
        rear=-1;
        for(int i=0;i<5;i++){
            arr[i]=0;
        }
    }
    bool isEmpty(){
        if(front==-1 && rear==-1)
        return true;
        else
        return false;
    } 
    bool isFull(){
        if(rear==4)
        return true;
        else
        return false;
    }
    void enqueue(int value){
        if(isFull()){
            cout<<"Queue overflow!"<<endl;
        }
        else{
            if(front==-1)
            front=0;
            rear++;
            arr[rear]=value;
            cout<<"Enqueued "<<value<<" to queue"<<endl;
        }
    }
    void display(){
        if(isEmpty()){
            cout<<"Queue is empty!"<<endl;
        }
        else{
            cout<<"Queue elements: ";
            for(int i=front;i<=rear;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
    }
};
int main (){
    queue myqueue;
    myqueue.enqueue(4);
    myqueue.enqueue(10);
    myqueue.enqueue(5);
    myqueue.display();
    return 0;
}
