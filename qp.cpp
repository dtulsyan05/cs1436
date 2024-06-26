// Dhwani Tulsyan
#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    string sentence1 = "Why did the gambler bring a ladder to the casino? Because he heard the stakes were high!";
    string sentence2 = "I started gambling to make some extra money. Now I'm just practicing my sad face in the mirror.";
    string sentence3 = "Gambling: the art of turning your paycheck into a receipt.";
    string sentence4 = "I gamble because it’s cheaper than therapy and comes with free snacks.";
    string sentence5 = "Gambling is like trying to cook without a recipe: sometimes you strike gold, but most times you end up with a mess.";

    cout << "Here is your Lotto Texas quick pick: ";
    for (int i = 1; i <= 6; i++)
    {
        cout << 1 + rand() % (50) << " ";
    }
    cout << endl;

    int rand_int = 1 + rand() % (5);

    if (rand_int == 1)
    {
        cout << sentence1 << endl;
    }
    else if (rand_int == 2)
    {
        cout << sentence2 << endl;
    }
    else if (rand_int == 3)
    {
        cout << sentence3 << endl;
    }
    else if (rand_int == 4)
    {
        cout << sentence4 << endl;
    }
    else
    {
        cout << sentence5 << endl;
    }

    return 0;
}