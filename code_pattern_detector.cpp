#include <iostream>
using namespace std;

// Example: Repeated code
void example1() {
    for(int i = 0; i < 5; i++) {
        cout << i << endl;
    }
}

void example2() {
    for(int i = 0; i < 5; i++) {
        cout << i << endl;
    }
}

int main() {
    example1();
    example2();

    // Code Pattern Detector Suggestion:
    cout << "[Suggestion] Consider creating a function to avoid repetition" << endl;

    return 0;
}