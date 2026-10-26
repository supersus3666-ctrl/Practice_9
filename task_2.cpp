#include <iostream>
using namespace std;

int main() {
    string word;
    int password;

    cout << "Введите кодовое слово: ";
    cin >> word;
    cout << "Введите пароль: ";
    cin >> password;

    if (word == "admin") {
        if (password == 1234) {
            cout << "Доступ разрешён" << endl;
        }
        else {
            cout << "Неверный пароль" << endl;
        }
    }
    else {
        cout << "Кто вы такой?" << endl;
    }

    return 0;
}