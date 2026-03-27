// Program for the implementation of array as an adt
#include<iostream>
using namespace std;
class ArrayADt {
private:
int arr[10],i;
int size;
public:
void create (int n) {
if(n > 10) {
cout << "Size cannot exceed 10" << endl;
return;
}
size=n;
cout << "enter the elements" << endl;
for(i=0;i<size; i++) {
cin>>arr[i];}
}
void traverse () {
cout << " ------- your output--------- " << endl;
for(i=0;i<size; i++) {
cout << arr[i] << endl;
}
}
void insert (int pos, int value) {
if(size >= 10) {
cout << "Array is full, cannot insert" << endl;
return;
}
if(pos < 1 || pos > size+1) {
cout << "Invalid position" << endl;
return;
}
int index=pos-1;// matching position with index
for(i=size; i>index; i -- ) {
    arr[i]=arr[i-1]; // shifting
}
arr[index]=value; // inserting value
// 3rd kaam size badaune
size++;
}
void del (int pos) {
if(pos < 1 || pos > size) {
cout << "Invalid position" << endl;
return;
}
int index=pos-1;
for(i=index; i<size-1; i++) {
arr[i]=arr[i+1];}//pahilo kaam back shifting again
size --; // decreasing size by 1 after deletion
}
};
int main() {
ArrayADt obj;// creating obj of class
obj.create (4);// calling create
obj . traverse () ;
obj.insert (2,8);// this will insert 8 at position 2
obj.traverse () ;// this will call traverse to show output after insertion
obj.del (1);// this will delete element from position 1
obj . traverse () ; //this will call traverse to show output after deletion
return 0;
}