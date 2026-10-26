#include <iostream>
#include <string>
using namespace std;

int main() {
    string password;
    bool isLong = false;
    bool hasUpper = false;
    bool hasDigit = false;
    bool hasSpecial = false;
    bool hasSpace = false;

    cout << "Введите пароль: ";
    cin >> password;

    if (password.length() >= 8) {
        isLong = true;
    }

    for (char ch : password) {
        switch (ch) {
        case ' ':
            hasSpace = true;
            break;
        case '!':
        case '@':
        case '#':
        case '$':
        case '%':
        case '^':
        case '&':
        case '*':
            hasSpecial = true;
            break;
        default:
            if (ch >= 'A' && ch <= 'Z') {
                hasUpper = true;
            }
            else if (ch >= '0' && ch <= '9') {
                hasDigit = true;
            }
            break;
        }
    }

    cout << "Нарушенные правила:" << endl;
    if (!isLong) {
        cout << "- Слишком короткий пароль" << endl;
    }
    if (!hasUpper) {
        cout << "- Нет заглавной буквы" << endl;
    }
    if (!hasDigit) {
        cout << "- Нет цифры" << endl;
    }
    if (!hasSpecial) {
        cout << "- Нет спецсимвола" << endl;
    }
    if (hasSpace) {
        cout << "- Содержит пробелы" << endl;
    }

    return 0;
}