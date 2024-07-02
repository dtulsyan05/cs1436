#include <iostream>
#include "geometry.h"

using namespace std;
int main()
{
    int Apples, Pizzas, Donuts, IceCream;
    cout << "How many apples will you eat? ";
    cin >> Apples;
    cout << "How many donuts will you eat? ";
    cin >> Donuts;
    cout << "How many Pizzas will you eat? ";
    cin >> Pizzas;
    cout << "How many Ice Cream Cones will you eat? ";
    cin >> IceCream;
    float VolumeFood = (Apples * VolSphere(1.5)) + (Donuts * VolDonut(1.5, 0.5)) + (Pizzas * VolCylinder(0.5, 6)) + (IceCream * (VolCone(5, 1) + VolSphere(1.5)));
    cout << "The total volume of food is " << VolumeFood << endl;

    return 0;
}
