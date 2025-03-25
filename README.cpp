#include <iostream>

using namespace std;

int main() {
    double num1, num2, sum;

    cout << "Введите первое число: ";
    cin >> num1;

    cout << "Введите второе число: ";
    cin >> num2;

    sum = num1 + num2;

    cout << "Сумма " << num1 << " и " << num2 << " равна " << sum << endl;

    return 0;
}
