//This will show basic input and output for C
#include <iostream>
using namespace std;

int main() {
    cout << "This is an output printed to the screen. \n"; //Do not forget std:: before that!!

    int x;
    cout << "Please enter in a number ";
    cin >> x;
    cout << "Your number is " << x << "\n";
    int y;
    int z;
    cout << "Enter in the first number you would like to add: ";
    cin >> y;
    cout << "Enter in the second number you would like to add: ";
    cin >> z;
    cout << "The numbers added together are " << y+z;


    return 0;
}
