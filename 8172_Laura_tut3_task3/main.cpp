#include <iostream>
using namespace std;

int myCount (int n, char c);

int main () {
    int n;
    char c;
    
    cout << "Please enter number: ";
    cin >> n;
    cout << "Please enter counting condition (I/D): ";
    cin >> c;
    
    int z = myCount (n, c);
    cout << "Next Number is: " << z << endl;
    
    return 0;
}

int myCount (int n, char c) {
    int nextNum = 0;
    
        if (c == 'I') {
            nextNum = ++n;
        }
        else if (c == 'D') {
            nextNum = n - 1;
        }
    
    return (nextNum);
}
