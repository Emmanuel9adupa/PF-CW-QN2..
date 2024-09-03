#include <iostream>
using namespace std;

int main() {
    cout << "This program exhibits the positive divisors of positive integers entered." << endl;
    cout << "The program will repeatedly prompt you to enter a positive integer." << endl;
    cout << "Each time you enter a positive integer, the program will print all the divisors of your integer in a column and in decreasing order." << endl;

    while (true) {
        int number;
        cout << "Please enter a positive integer: ";
        cin >> number;

        // Checking if the input is valid
        while (number <= 0) {
            cout << number << " is not a positive integer." << endl;
            cout << "Please enter a positive integer: ";
            cin >> number;
        }

        // Printing divisors in decreasing order
        cout << "Divisors of " << number << " are:" << endl;
        for (int i = number; i >= 1; i--) {
            if (number % i == 0) {
                cout << i << endl;
            }
        }

        // Ask the user if they want to continue
        char response;
        cout << "Would you like to see the divisors of another integer (Y/N)? ";
        cin >> response;

        while (response != 'Y' && response != 'y' && response != 'N' && response != 'n') {
            cout << "Please respond with Y (or y) for yes and N (or n) for no." << endl;
            cout << "Would you like to see the divisors of another integer (Y/N)? ";
            cin >> response;
        }

        // Exit the loop if the user does not want to continue
        if (response == 'N' || response == 'n') {
            break;
        }
    }

    cout << "Thank you for using the divisor calculator!" << endl;
    return 0;
}
