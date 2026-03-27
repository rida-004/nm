// Insertion Sort Algorithm in C++
#include <iostream>
using namespace std;

int main() {
    int A[] = {23, 1, 10, 5, 2}; // Example array
    int n = 5;
    // Outer loop: pick each element from index 1 to n-1
    for (int i = 1; i < n; i++) {
        int key = A[i];
        int j = i - 1;
        // Step 3: Move elements of sorted part that are bigger than key one step right
        while (j >= 0 && A[j] > key) {
            // Shift element to the right
            A[j + 1] = A[j];
            j--;
        }
        
        // Step 4: Place the key in its correct position
        A[j + 1] = key;
        
        // Optional: Print array after each pass to see the progress
        cout << "During pass " << i << " when key is " << key << ": ";
        for (int k = 0; k < n; k++) {
            cout << A[k] << " ";
        }
        cout << endl;
    }
    
    // Final sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << A[i] << " ";
    
    cout << endl;
    return 0;
}
