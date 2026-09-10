#include <iostream>
using namespace std;

int main() {
    cout << "Hello! C++ is working fast." << endl;

    int sum = 0;

    for (int i = 1; i <= 1000000; i++) {
        sum += i;
    }

    cout << "Sum = " << sum << endl;

    return 0;
}