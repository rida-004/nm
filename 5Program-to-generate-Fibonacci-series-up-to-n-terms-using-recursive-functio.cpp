//Program to generate Fibonacci series up to n terms using recursive functio.
#include <iostream>
using namespace std;

long long fibo(int k) {
    if (k == 1 || k == 2) return 1;       // Base cases: F1 = 1, F2 = 1
    return fibo(k - 1) + fibo(k - 2);     // Recursive definition
}

int main() {
    int n;
    cout << "Enter n: ";
    if (!(cin >> n) || n <= 0) {
        cout << "Please enter a positive integer." << endl;
        return 0;
    }

    cout << "Fibonacci numbers up to " << n << " terms:\n";
    for (int i = 1; i <= n; ++i) {
        cout << fibo(i) << "\n";
    }

    return 0;
}