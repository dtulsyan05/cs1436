// Dhwani Tulsyan

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(NULL));

    cout << "**************************************************\n";
    cout << "*                                                *\n";
    cout << "*            Welcome to Dhwani Games             *\n";
    cout << "*                                                *\n";
    cout << "*         Let's have fun playing together!       *\n";
    cout << "*                                                *\n";
    cout << "**************************************************\n";

    string Phrases[10] = {"fun friday", "break a leg", "bite the bullet", "spill the beans", "piece of cake", "under the weather", "kick the bucket", "easy peazy", "light as feather", "fast like a rabbit"};
    string SecretPhrase = Phrases[rand() % 10];

    string GuessPhrase = SecretPhrase;
    for (int i = 0; i < GuessPhrase.size(); i++)
    {
        if (SecretPhrase[i] == ' ')
            GuessPhrase[i] = ' ';
        else
            GuessPhrase[i] = '.';
    }

    int WrongGuess = 0;
    string LettersLeft = "abcdefghijklmnopqrstuvwxyz";
    char Letter;

    // Bowling pin graphic stages
    string pinStages[6] = {
        "                                                       \n"
        "                                                       \n"
        "                                                       \n"
        "                                                       \n"
        "                                                       \n"
        "                                                       \n",
        "                                                       \n"
        "                                                       \n"
        "                                                       \n"
        "       .##%#.                                          \n"
        "     @+      @@                                        \n"
        "   .@          @.                                      \n",
        "                                                       \n"
        "                                                       \n"
        "       .##%#.                                          \n"
        "     @+      @@                                        \n"
        "   .@          @.                                      \n"
        "   @            @                                      \n"
        "   @            #                                      \n"
        "   @            @                                      \n",
        "                                                       \n"
        "       .##%#.                                          \n"
        "     @+      @@                                        \n"
        "   .@          @.                                      \n"
        "   @            @                                      \n"
        "   @            #                                      \n"
        "   @            @                                      \n"
        "   @.          @:                                      \n"
        "   .@          @                                       \n"
        "    @          @                                       \n"
        "    .@########@                                        \n"
        "     @. ......@                                        \n",
        "       .##%#.                                          \n"
        "     @+      @@                                        \n"
        "   .@          @.                                      \n"
        "   @            @                                      \n"
        "   @            #                                      \n"
        "   @            @                                      \n"
        "   @.          @:                                      \n"
        "   .@          @                                       \n"
        "    @          @                                       \n"
        "    .@########@                                        \n"
        "     @. ......@                                        \n"
        "     @+**+#+#+#                                        \n"
        "     @########@                                        \n"
        "    .@        @                                        \n",
        "       .##%#.                                          \n"
        "     @+      @@                                        \n"
        "   .@          @.                                      \n"
        "   @            @                                      \n"
        "   @            #                                      \n"
        "   @            @                                      \n"
        "   @.          @:                                      \n"
        "   .@          @                                       \n"
        "    @          @                                       \n"
        "    .@########@                                        \n"
        "     @. ......@                                        \n"
        "     @+**+#+#+#                                        \n"
        "     @########@                                        \n"
        "    .@        @                                        \n"
        "   .@          @                                       \n"
        "  .@            @.                                     \n"
        " .@              @.                                    \n"
        " @                @                                    \n"
        "@.                 @                                   \n"
        "#.                  .#                                  \n"
        "@                    @                                  \n"
        ":#                    @:                                \n"
        "@                      @                                \n"
        "%.                     %                                \n"
        "@                      @                                \n"
        "@                      @                                \n"
        "@                      @                                \n"
        ".#                    #.                                \n"
        "@                    @                                  \n"
        "@                    @                                  \n"
        "@.                  .@                                  \n"
        " @                  @                                   \n"
        " @.                 @                                   \n"
        " .@                @.                                   \n"
        "  @                #                                    \n"
        "  .@              @.                                    \n"
        "   @              @                                     \n"
        "    @.           @                                      \n"
        "      ..###@##..                                        \n"};

    while (GuessPhrase != SecretPhrase && WrongGuess < 5)
    {
        cout << "Letters left: " << LettersLeft << endl;
        cout << "Current guess: " << GuessPhrase << endl;
        cout << "Enter a guess: ";
        cin >> Letter;
        Letter = tolower(Letter); // Convert to lowercase for case insensitivity

        int Found = LettersLeft.find(Letter);
        if (Found < LettersLeft.size())
        {
            LettersLeft.erase(Found, 1);
        }
        else
        {
            cout << "You already guessed that letter." << endl;
        }

        Found = SecretPhrase.find(Letter);
        if (Found == -1)
        {
            WrongGuess++;
            cout << "Wrong guess. Try again: " << 5 - WrongGuess << " tries left." << endl;
        }
        if (Found != -1)
        {
            GuessPhrase[Found] = Letter;
            // Found = SecretPhrase.find(Letter, Found + 1);
        }

        // Display current bowling pin stage
        cout << "Bowling Pin: " << endl;
        cout << pinStages[WrongGuess] << endl;
    }

    if (WrongGuess >= 5)
    {
        cout << "You lost! The phrase was: " << SecretPhrase << endl;
    }
    else
    {
        cout << "Congratulations! You guessed the phrase: " << SecretPhrase << endl;
    }

    return 0;
}
