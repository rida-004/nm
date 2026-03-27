//program to find the Greatest Common Divisor (GCD) of two numbers using a recursive function
#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else if (a < b)
        return gcd(b, a);
    else
        return gcd(b, a % b);
}

int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;

    if (x < 0) x = -x;
    if (y < 0) y = -y;

    int result = gcd(x, y);
    cout << "GCD(" << x << ", " << y << ") = " << result << endl;
    return 0;
}