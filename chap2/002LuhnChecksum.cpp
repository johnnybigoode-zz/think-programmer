#include <iostream>
using namespace std;
using std::cin;
using std::cout;

int doubleDigitValue(int d)
{
    int doubleDigit = d * 2;

    int sum;
    if (doubleDigit >= 10){
        sum = 1 + doubleDigit % 10;
    }else{
        sum = doubleDigit;
    }

    return sum;
}

int main()
{
    int digit;

    cout << "Enter a single digit number, 0-9: ";
    cin >> digit;

    int sum = doubleDigitValue(digit);

    cout << "Sum of digits in doubled number: " << sum << "\n";

    return 0;
}

