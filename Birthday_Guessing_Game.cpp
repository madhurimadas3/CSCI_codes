#include <iostream>

using namespace std;

int main() {
    int set1, set2, set3, set4, set5;

    cout << "Is your birthday in Set1 = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31}?" << endl;
    cout << "Enter 1 for Yes and 0 for No: ";
    cin >> set1;

    cout << "Is your birthday in Set2 = {2, 3, 6, 7, 10, 11, 14, 15, 18, 19, 22, 23, 26, 27, 30, 31}?" << endl;
    cout << "Enter 1 for Yes and 0 for No: ";
    cin >> set2;

    cout << "Is your birthday in Set3 = {4, 5, 6, 7, 12, 13, 14, 15, 20, 21, 22, 23, 28, 29, 30, 31}?" << endl;
    cout << "Enter 1 for Yes and 0 for No: ";
    cin >> set3;

    cout << "Is your birthday in Set4 = {8, 9, 10, 11, 12, 13, 14, 15, 24, 25, 26, 27, 28, 29, 30, 31}?" << endl;
    cout << "Enter 1 for Yes and 0 for No: ";
    cin >> set4;

    cout << "Is your birthday in Set5 = {16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31}?" << endl;
    cout << "Enter 1 for Yes and 0 for No: ";
    cin >> set5;

    int birthday = set1 + set2 * 2 + set3 * 4 + set4 * 8 + set5 * 16;

    cout << "Your birthday is " << birthday << endl;

    return 0;
}
