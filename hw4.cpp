// Dhwani Tulsyan
//  Homework 4
#include <iostream>
using namespace std;

int main()
{
    double Fahrenheit, Celcius, Miles, Kilometers, Pounds, Kilograms, Quarters, Dime, Nickel, Penny, Sum_of_coins;
    int choice;
    while (choice != 6)
    {
        cout << "1 = Convert Fahrenheit to Celsius\n2 = Convert Miles to Kilometers\n3 = Convert Pounds to Kilograms\n4 = Calculate value of coins\n5 = Print for loop patterns\n6 = Exit\n ";
        cout << "Enter your choice:\n ";
        cin >> choice;
        if (choice == 1)
        {
            cout << "Enter the degrees in Fahrenheit: ";
            cin >> Fahrenheit;
            Celcius = ((Fahrenheit - 32.0) * (5.0 / 9.0));
            cout << "This is the temperature in Celcius: " << Celcius << endl;
        }

        if (choice == 2)
        {
            cout << "Enter the number of Miles: ";
            cin >> Miles;
            Kilometers = (Miles * 1.609344);
            cout << "This is " << Kilometers << " Kilometers" << endl;
        }

        if (choice == 3)
        {
            cout << "Enter the number of Pounds: ";
            cin >> Pounds;
            Kilograms = (Pounds * 0.45359237);
            cout << "This is " << Kilograms << " Kilograms" << endl;
        }
        if (choice == 4)
        {
            cout << "Tell me the number of each type of coin you have:\n";
            cout << "How many Quarters do you have? ";
            cin >> Quarters;
            cout << "How many Nickels do you have? ";
            cin >> Nickel;
            cout << "How many Dimes do you have? ";
            cin >> Dime;
            cout << "How many Pennies do you have? ";
            cin >> Penny;
            Sum_of_coins = (Quarters * .25) + (Dime * .10) + (Nickel * .5) + (Penny * .01);
            cout << "The dollar value of is $ " << Sum_of_coins << endl;
            {
                if (Sum_of_coins < 0.50)
                {
                    cout << "You don't have much money to buy anything.\n";
                }
                else if (Sum_of_coins >= 0.50 && Sum_of_coins < 2.00)
                {
                    cout << "You could buy a small snack.\n";
                }
                else if (Sum_of_coins >= 2.00 && Sum_of_coins < 5.00)
                {
                    cout << "You could maybe get a small meal.\n";
                }
                else
                {
                    cout << "So much weight in your wallet?? You must be strong.\n";
                }
            }
        }
        if (choice == 5)
        {
            cout << "~~ Pattern 1 ~~\n";
            for (int i = 105; i <= 500; i += 5)
            {
                cout << i << " ";
                if (i % 100 == 0)
                {
                    cout << endl;
                }
            }
            cout << "~~ Pattern 2 ~~\n";
            for (int i = 1; i <= 10; i++)
            {

                for (int j = 1; j <= i; j++)
                {
                    cout << "*" << " ";
                }
                cout << endl;
            }
            cout << "~~ Pattern 3 ~~\n";
            for (int i = 1; i <= 10; i++)
            {

                for (int j = 10; j >= i; j--)
                {
                    cout << "$" << " ";
                }
                cout << endl;
            }
        }
    }
    if (choice == 6)
        cout << "Exit." << endl;

    return 0;
}
