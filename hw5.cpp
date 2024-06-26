// Dhwani Tulsyan
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream fin("lotto.txt.csv");
    int Num;
    int Count = 0, Sum = 0;
    int Frequency[55] = {
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
    };
    while (!fin.eof()) // read each line

    {
        fin >> Num; // read day
        fin >> Num; // read month
        fin >> Num; // read year
        for (int i = 1; i <= 6; i++)
        {
            fin >> Num;
            Frequency[Num]++;
            Count++;
            Sum += Num;
        }
    }
    cout << "Statistics for Lotto Texas (1992 - present)";
    cout << "Total numbers = " << Count << endl;
    cout << "Sum of these numbers = " << Sum << endl;
    cout << "Average of these numbers = " << Sum / Count << endl;
    cout << "Frequency of Numbers:" << endl;
    for (int i = 1; i <= 54; i++)
    {
        cout << i << "\t" << Frequency[i] << endl;
    }
    fin.close();
    return 0;
}