#include <iostream>
using namespace std;

int main() {
    int x1, y1, x2, y2;

    cout << "Введите координаты начальной клетки (x1 y1): ";
    cin >> x1 >> y1;
    cout << "Введите координаты конечной клетки (x2 y2): ";
    cin >> x2 >> y2;

    if (x1 < 1 || x1 > 8 || y1 < 1 || y1 > 8 ||
        x2 < 1 || x2 > 8 || y2 < 1 || y2 > 8) {
        cout << "Координаты вне пределов доски" << endl;
        return 0;
    }

    int dx = abs(x1 - x2);
    int dy = abs(y1 - y2);

    if ((dx == 2 && dy == 1) || (dx == 1 && dy == 2)) {
        cout << "Ход возможен" << endl;
    }
    else {
        cout << "Ход невозможен" << endl;
    }

    return 0;
}