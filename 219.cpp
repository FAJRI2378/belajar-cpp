#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Input three different integers: ";
    cin >> a >> b >> c;

    int sum = a + b + c;
    int average = sum / 3;
    int product = a * b * c;

    // Mencari nilai terkecil (Smallest)
    int smallest = a;
    if (b < smallest) smallest = b;
    if (c < smallest) smallest = c;

    // Mencari nilai terbesar (Largest)
    int largest = a;
    if (b > largest) largest = b;
    if (c > largest) largest = c;

    cout << "Sum is " << sum << endl;
    cout << "Average is " << average << endl;
    cout << "Product is " << product << endl;
    cout << "Smallest is " << smallest << endl;
    cout << "Largest is " << largest << endl;

    return 0;
}