#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Введите число от 1 до 10: ";
    cin >> number;

    if (number < 1 || number > 10) {
        cout << "Неверное число" << endl;
        return 0;
    }

    switch (number) {
    case 1: cout << "I" << endl; break;
    case 2: cout << "II" << endl; break;
    case 3: cout << "III" << endl; break;
    case 4: cout << "IV" << endl; break;
    case 5: cout << "V" << endl; break;
    case 6: cout << "VI" << endl; break;
    case 7: cout << "VII" << endl; break;
    case 8: cout << "VIII" << endl; break;
    case 9: cout << "IX" << endl; break;
    case 10: cout << "X" << endl; break;
    }

    return 0;
}