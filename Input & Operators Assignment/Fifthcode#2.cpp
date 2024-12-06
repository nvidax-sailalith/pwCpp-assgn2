#include <iostream>
using namespace std;
int main() {
    char c1, c2;
    cout << "Enter two characters: ";
    cin >> c1 >> c2;
    int diff = abs(c1 - c2);
    cout << "The difference between the ASCII values is: " << diff << endl;
    return 0;
}