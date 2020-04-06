#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;

int main()
{
    long long int firstNumber, secondNumber;
    double root;
    do
    {
        cin >> firstNumber;
        cin >> secondNumber;
        root = pow(secondNumber, 1 / firstNumber);
        cout << root << endl;
    } while (firstNumber != 0 && secondNumber != 0);
    return 0;
}
