#include <iostream>

using namespace std;

int main() {

    int weekday;

    cout << "Enter any number you want from (1-7) : ";
    cin >> weekday;

    if(weekday == 1) {

        cout << endl << "Monday";

    } else if(weekday == 2) {

        cout << endl << "Tuesday";

    } else if(weekday == 3) {

        cout << endl << "Wednesday";

    } else if(weekday == 4) {

        cout << endl << "Thursday";

    } else if(weekday == 5) {

        cout << endl << "Friday";

    } else if(weekday == 6) {

        cout << endl << "Saturday";

    } else if(weekday == 7) {

        cout << endl << "Sunday";

    } else {

        cout << endl << "Please enter weekday number between 1-7.";
    }
   
    return 0;
}