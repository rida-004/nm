//implimentation-of-stack-using-array
#include<iostream>

using namespace std;
class stack{
    private:
    int top;
    int arr[5];
    public:
     stack(){
        top=-1;
        for(int i=0;i<5;i++){
            arr[i]=0;
        }
    }
    bool isEmpty(){
        if(top==-1)
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
    void push(int value){
        if(isFull()){
            cout<<"Stack overflow!"<<endl;
        }
        else{
            top++;
            arr[top]=value;
            cout<<"Pushed "<<value<<" onto stack"<<endl;
        }
    }
    void display(){
        if(isEmpty()){
            cout<<"Stack is empty!"<<endl;
        }
        else{
            cout<<"Stack elements: ";
            for(int i=0;i<=top;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
    }
};
int main (){
    stack mystack;
    mystack.push(4);
    mystack.push(10);
    mystack.push(5);
    mystack.display();
    return 0;
}