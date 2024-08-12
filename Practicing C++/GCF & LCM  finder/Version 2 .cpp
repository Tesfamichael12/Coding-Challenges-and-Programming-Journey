//A program that finds GCF and LCM if two numbers 
//By Tesfamichael Tafere 
#include <iostream>
using namespace std;

int main() {
    int a, b, smaller;

    cout << "Enter two numbers: ";
    cin >> a >> b;
    smaller = min(a, b);//Calculate the smaller number 

    // Calculate GCF (Greatest Common Factor)
    int gcf = 1;
    for (int i = 2; i <= smaller; ++i) {
        if (a % i == 0 && b % i == 0) {
            gcf = i;
        }
    }

    int lcm = (a * b) / gcf;

    cout << "GCF: " << gcf << endl;
    cout << "LCM: " << lcm << endl;

    return 0;
}
