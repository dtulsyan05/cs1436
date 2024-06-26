// Dhwani Tulsyan
#include <iostream>
using namespace std;
int main()
{
    cout << "This program is used to detect a palindrome." << endl;
    while (true)
    {
        cout << "Enter a word: ";
        string word, reverse;
        cin >> word;
        for (int i = word.size() - 1; i >= 0; i--)
        {
            reverse += word[i];
        }
        cout << "Your word in reverse: " << reverse << endl;

        if (reverse == word)
        {
            cout << "This is a palindrome! " << endl;
        }
        else
        {
            cout << "This is not a palindrome. " << endl;
        }
    }
    return 0;

    return 0;
}