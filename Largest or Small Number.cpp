#include <iostream>
using namespace std;

// Function to find the largest number
int findLargest(int a, int b, int c) {
    if (a >= b && a >= c)
        return a;
    else if (b >= a && b >= c)
        return b;
    else
        return c;
}

// Function to find the smallest number
int findSmallest(int a, int b, int c) {
    if (a <= b && a <= c)
        return a;
    else if (b <= a && b <= c)
        return b;
    else
        return c;
}

int main() {
    int num1, num2, num3;

    // Input 3 numbers
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    // Call the functions
    int largest = findLargest(num1, num2, num3);
    int smallest = findSmallest(num1, num2, num3);

    // Output the results
    cout << "The largest number is: " << largest << endl;
    cout << "The smallest number is: " << smallest << endl;

    return 0;
}
