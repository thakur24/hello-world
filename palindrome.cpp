#include <iostream>
using namespace std;

int main() {
    // Declaring a variable to take input 
    int input;
    cout << "Enter a number: ";
    cin >> input;

    // Declaring variables used to reverse the input number
    int d, n = input, rev = 0;
    while (n > 0) {
        d = n % 10; // d stores each digit from from right to left in each iteration
        rev = rev * 10 + d; // rev creates the reversed number at the end of all iterations
        n = n / 10; 
    }

    // Checking for palindrome condition and displaying output
    if (rev == input)
        cout << "\n" << input << " is a Palindrome number!\n";
    else
        cout << "\n" << input << " is not a Palindrome number!\n";

    return 0;
}