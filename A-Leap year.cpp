#include <bits/stdc++.h>
using namespace std;

int main() {
    int Y;
    cout <<"";
    cin >>Y;

    // Check if the year is within the given range
    if (Y < 1583 || Y > 2023) {
        cout << "Invalid" << endl;
        return 1;
    }
    // Determine the number of days based on the Gregorian calendar rules
    int Days;
    if ((Y% 4 == 0 && Y % 100 != 0) || Y % 400 == 0) {
        Days = 366; // Leap year
    } else {
        Days = 365;
    }
    // Print the result
    cout<<Days<<endl;
    return 0;
}
