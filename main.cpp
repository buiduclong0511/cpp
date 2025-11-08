#include <iostream>
using namespace std;

void changeValue(int &a) {
    a = 5;
}

int main() {

    int a = 1;

    changeValue(a);

    cout << "Value of a: " << a << endl; // This will print 1, not 5

    return 0;
}
