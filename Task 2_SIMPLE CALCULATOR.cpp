#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <set>
#include <vector>
#include <stack>
#include <map>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int firstNumber, secondNumber;
    char operation;
    cout << "Enter the FIRST NUMBER: ";
    cin >> firstNumber;
    cout << "Enter the SECOND NUMBER: ";
    cin >> secondNumber;
    cout << "Choose the OPERATION: ";
    cin >> operation;

    switch (operation)
    {
    case '+':
        cout << firstNumber + secondNumber;
        break;
    case '-':
        cout << firstNumber - secondNumber;
        break;
    case '*':
        cout << firstNumber * secondNumber;
        break;
    case '/':
        cout << firstNumber / secondNumber;
        break;
    default:
        cout << "Wrong Operation...";
        break;
    }
    return 0;
}
