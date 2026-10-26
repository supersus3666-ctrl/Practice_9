#include <iostream>
using namespace std;

int main() {
    int amount, mode;

    cout << "Введите сумму (кратную 10): ";
    cin >> amount;
    cout << "Выберите режим (1 - минимум купюр, 2 - крупные, 3 - отмена): ";
    cin >> mode;

    if (amount % 10 != 0 || amount <= 0) {
        cout << "Ошибка: сумма должна быть положительной и кратной 10" << endl;
        return 0;
    }

    switch (mode) {
    case 1: 
        cout << "Режим: минимальное количество купюр" << endl;
        int count5000 = amount / 5000;
        amount %= 5000;
        int count2000 = amount / 2000;
        amount %= 2000;
        int count1000 = amount / 1000;
        amount %= 1000;
        int count500 = amount / 500;
        amount %= 500;
        int count200 = amount / 200;
        amount %= 200;
        int count100 = amount / 100;
        amount %= 100;
        int count50 = amount / 50;
        int count10 = amount % 50 / 10;

        if (count5000 > 0) cout << "5000x" << count5000 << endl;
        if (count2000 > 0) cout << "2000x" << count2000 << endl;
        if (count1000 > 0) cout << "1000x" << count1000 << endl;
        if (count500 > 0) cout << "500x" << count500 << endl;
        if (count200 > 0) cout << "200x" << count200 << endl;
        if (count100 > 0) cout << "100x" << count100 << endl;
        if (count50 > 0) cout << "50x" << count50 << endl;
        if (count10 > 0) cout << "10x" << count10 << endl;
        break;

    case 2: 
        cout << "Режим: крупные купюры" << endl;
        int count5000_large = amount / 5000;
        amount %= 5000;
        int count1000_large = amount / 1000;
        amount %= 1000;
        int count100_large = amount / 100;

        if (count5000_large > 0) cout << "5000x" << count5000_large << endl;
        if (count1000_large > 0) cout << "1000x" << count1000_large << endl;
        if (count100_large > 0) cout << "100x" << count100_large << endl;

        if (amount % 100 != 0) {
            cout << "Ошибка: нельзя выдать точную сумму в данном режиме" << endl;
        }
        break;

    case 3:
        cout << "Операция отменена" << endl;
        break;

    default:
        cout << "Ошибка: неверный режим" << endl;
        break;
    }

    return 0;
}