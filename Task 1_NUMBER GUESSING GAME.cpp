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
    srand(time(NULL));
    int guess = 0, randomNumber = rand() % 1000;
    //cout << randomNumber << endl;
    while (true) {
        cout << "Enter the number you guessed: ";
        cin >> guess;
        if (randomNumber == guess) {
            cout << "Your guess is correct...";
            break;
        }
        else if (randomNumber > guess)
            cout << "The guess is too low...\n";
        else
            cout << "The guess is too high...\n";
    }
        return 0;
}