#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Введите 6-значное число: ";
    cin >> number;

    int a = number / 100000;
    int b = (number / 10000) % 10;
    int c = (number / 1000) % 10;
    int d = (number / 100) % 10;
    int e = (number / 10) % 10;
    int f = number % 10;

    int sum1 = a + b + c;
    int sum2 = d + e + f;

    bool isSum1Even = (sum1 % 2 == 0);
    bool isSum2Even = (sum2 % 2 == 0);

    if ((isSum1Even && !isSum2Even) || (!isSum1Even && isSum2Even)) {
        cout << "Билет счастливый" << endl;
    }
    else {
        cout << "Билет обычный" << endl;
    }

    return 0;
}