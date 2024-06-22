#include <iostream>
using namespace std;

// Function to display the content of the purse
void print(int pennies, int nickels, int dimes, int quarters, float total) {
    cout << quarters << " quarters + " << dimes << " dimes + " << nickels
    << " nickels + " << pennies << " pennies = $" << total << endl;
}
// Function to compute the total dollar value
float dollars(int pennies, int nickels, int dimes, int quarters) {
    int totalCents = pennies + 5*nickels + 10*dimes + 25*quarters;
    return static_cast<float>(totalCents) /100;
}

// Function prototypes
void print(int pennies, int nickels, int dimes, int quarters, float total);
float dollars(int pennies, int nickels, int dimes, int quarters);

int main() {
    int pennies = 0, nickels = 0, dimes = 0, quarters = 0;
    int p, n, d, q;
    
    // Initial display of the purse contents
    float total = dollars(pennies, nickels, dimes, quarters);
    print(pennies, nickels, dimes, quarters, total);
    
    // Insert coins
    cout << "Insert (pennies nickels dimes quarters): ";
    cin >> p >> n >> d >> q;
    pennies += p;
    nickels += n;
    dimes += d;
    quarters += q;
    total = dollars(pennies, nickels, dimes, quarters);
    print(pennies, nickels, dimes, quarters, total);
    
    // Remove coins
    cout << "Remove (pennies nickels dimes quarters): ";
    cin >> p >> n >> d >> q;
    pennies -= p;
    nickels -= n;
    dimes -= d;
    quarters -= q;
    total = dollars(pennies, nickels, dimes, quarters);
    print(pennies, nickels, dimes, quarters, total);
    
    
    return 0;

}