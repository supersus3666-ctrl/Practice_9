#include <iostream>
using namespace std;

int main() {
    char symbol;

    cout << "Введите символ: ";
    cin >> symbol;

    if (symbol >= '0' && symbol <= '9') {
        cout << "Цифра" << endl;
    }
    else {
        switch (symbol) {
        case '+':
        case '-':
        case '*':
        case '/':
            cout << "Оператор" << endl;
            break;
        case '(':
        case ')':
        case '[':
        case ']':
        case '{':
        case '}':
            cout << "Скобка" << endl;
            break;
        default:
            cout << "Неизвестный символ" << endl;
        }
    }

    return 0;
}