#include <iostream>
using namespace std;

int main() {
    int level;

    cout << "Введите уровень дня (1-10): ";
    cin >> level;

    if (level >= 1 && level <= 3) {
        cout << "Держись, всё наладится" << endl;
    }
    else if (level >= 4 && level <= 6) {
        cout << "Нормальный день" << endl;
    }
    else if (level >= 7 && level <= 10) {
        cout << "Отличный день!" << endl;
    }
    else {
        cout << "Такого уровня не существует" << endl;
    }

    return 0;
}