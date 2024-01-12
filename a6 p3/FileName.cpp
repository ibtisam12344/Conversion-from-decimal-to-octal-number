#include <iostream>
using namespace std;
void decimalToOctal(int decimalNumber) {
    int octalNumber[100];
    int i = 0;

    while (decimalNumber > 0) {
        octalNumber[i] = decimalNumber % 8;
        decimalNumber /= 8;
        i++;
    }

    cout << "Octal equivalent: ";
    for (int j = i - 1; j >= 0; j--) {
       cout << octalNumber[j];
    }

    cout << endl;
}

int main() {
    int decimalNumber;
    cout << "Enter any number" << endl;
    cin >> decimalNumber;
    decimalToOctal(decimalNumber);

    return 0;
}
