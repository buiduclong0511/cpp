#include <iostream>

using namespace std;

// fib: 0, 1, 1, 2, 3,... (wiki)
// fib(1) = 0
// fib(2) = 1
// fib(3) = fib(1) + fib(2)
// fib(4) = fib(2) + fib(3)
// fib(n) = fib(n - 2) + fib(n - 1) + ... + 1 + 0

int fib(int n) {
    if (n == 1) {
        return 0;
    }

    if (n == 2) {
        return 1;
    }

    int a = 0;
    int b = 1;
    int result = 0;
    for(int i = 3; i <= n; i++) {
        result = a + b;

        a = b;
        b = result;
    }

    return result;
}

int main() {
    
    return 0;
}
