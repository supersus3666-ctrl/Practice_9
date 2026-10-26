#include <iostream>
using namespace std;

int main() {
    int current, target;

    cout << "Введите текущий этаж: ";
    cin >> current;
    cout << "Введите нужный этаж: ";
    cin >> target;

    if (current < 1 || current > 9 || target < 1 || target > 9) {
        cout << "Неверный этаж" << endl;
    }

    else if (current == target) {
        cout << "Вы уже здесь" << endl;
    }

    else {
        if (current < target) {
            cout << "Едем вверх" << endl;
        }
        else {
            cout << "Едем вниз" << endl;
        }
    }

    return 0;
}