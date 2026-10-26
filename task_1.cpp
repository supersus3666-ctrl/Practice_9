#include <iostream>
#include <string>
using namespace std;

int main() {
    string color;
    cout << "Введите цвет светофора: ";
    cin >> color;

    char firstChar = color[0];

    switch (firstChar) {
    case 'r':
        cout << "Стой!" << endl;
        break;
    case 'y':
        cout << "Приготовься!" << endl;
        break;
    case 'g':
        cout << "Иди!" << endl;
        break;
    default:
        cout << "Не знаю такого цвета" << endl;
    }
    return 0;
}