// Dhwani Tulsyan
//Homework 3


#include <iostream>
using namespace std;

int main()
{
    int donuts, dozens, singles;
    cout << "How many donuts did you get?\n";
    cin >> donuts;
    dozens = donuts / 12;
    singles = donuts % 12;
    cout << "This is " << dozens << " dozen plus " << singles << " single donuts" << endl;

    if (donuts == 0){
        cout << "Are you on a sugar diet???";
    }
    else if (donuts >= 1 && donuts <= 2){
        cout << "A light snack, I see.";
    }
    else if (donuts >= 3 && donuts < 6){
        cout << "Just a little treat I see!";
    }
    else if (donuts >= 6 && donuts < 8){
        cout << "You're enjoying those donuts, aren't you?";
    }
    else if (donuts >= 8 && donuts < 11){
        cout << "A true donut lover!";
    }
    else if (donuts >= 11) {
        cout << "SUGARRRRR!!!!";
    }
    else{
        cout << "This is not a valid input.";
    }
        


       return 0;


}
