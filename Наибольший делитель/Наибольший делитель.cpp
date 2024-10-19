#include <iostream>

using namespace std;

int findGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;
    cout << "Введите два числа: ";
    cin >> num1 >> num2;
    int gcd = findGCD(num1, num2);

    cout << "НОД(" << num1 << ", " << num2 << ") = " << gcd << endl;

    return 0;
}