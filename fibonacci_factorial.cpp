#include <iostream>
using namespace std;

int factorial(int n) {
    if(n==0 || n==1) return 1;
    else return n * factorial(n-1);
}

void fibonacci(int n) {
    int t1 = 0, t2 = 1, next;
    cout << "Fibonacci series: ";
    for(int i=1; i<=n; ++i) {
        cout << t1 << " ";
        next = t1 + t2;
        t1 = t2;
        t2 = next;
    }
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Factorial of " << num << " = " << factorial(num) << endl;
    fibonacci(num);

    return 0;
}
