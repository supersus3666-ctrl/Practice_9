#include <iostream>
using namespace std;

int main() {
    char player;
    const char computer = 'к'; 

    cout << "Введите ход (к/н/б): ";
    cin >> player;

    if (player == computer) {
        cout << "Ничья" << endl;
    }
    else if ((player == 'к' && computer == 'н') ||
        (player == 'н' && computer == 'б') ||
        (player == 'б' && computer == 'к')) {
        cout << "Вы победили" << endl;
    }
    else {
        cout << "Вы проиграли" << endl;
    }

    return 0;
}