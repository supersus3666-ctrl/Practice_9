#include <iostream>
using namespace std;

int main() {
    char letter;
    cout << "Введите букву: ";
    cin >> letter;

    switch (letter) {
    case 'x':
    case 'y':
    case 'z':
        cout << char(letter - 23) << endl;
        break;
    default:
        cout << char(letter + 3) << endl;
    }

    return 0;
}