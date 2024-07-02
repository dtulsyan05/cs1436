#include <iostream>
using namespace std;

string LOLSpeak(string S, string Abbr, string Translation)
{

    int Found = S.find(" " + Abbr + " ", 0);
    if (Found != -1)
        S.replace(Found, Abbr.size() + 2, " " + Translation + " ");
    if (S.substr(0, Abbr.size() + 1) == Abbr + " ")
        S.replace(0, Abbr.size(), Translation);
    if (S.substr(S.size() - Abbr.size() - 1) == " " + Abbr)
        S.replace(S.size() - Abbr.size() - 1, Abbr.size() + 1, " " + Translation);
    return S;
}

int main()
{
    cout << "Enter a sentence: ";
    string S;
    getline(cin, S);

    S = LOLSpeak(S, "lol", "laughing out loud");
    S = LOLSpeak(S, "u", "you");
    S = LOLSpeak(S, "brb", "be right back");
    S = LOLSpeak(S, "imo", "in my opinion");
    S = LOLSpeak(S, "omw", "on my way");
    S = LOLSpeak(S, "bff", "best friends forever");
    S = LOLSpeak(S, "gtg", "got to go");
    S = LOLSpeak(S, "wtf", "what's the forecast");
    S = LOLSpeak(S, "omg", "oh my goodness");
    S = LOLSpeak(S, "idk", "i dont know");

    cout << "Your new sentence is: " << S << endl;

    return 0;
}
