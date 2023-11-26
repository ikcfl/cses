#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string dna;

    cin >> dna;

    int currentCounter;
    int maxCounter;
    char currentChar;

    currentCounter = 1;
    maxCounter = 1;
    currentChar = dna.at(0);

    for (int i = 1; i < dna.length(); i++)
    {

        if (currentChar == dna.at(i))
        {
            currentCounter += 1;
            if (currentCounter > maxCounter)
            {
                maxCounter = currentCounter;
            }
        }
        else
        {
            if (currentCounter > maxCounter)
            {
                maxCounter = currentCounter;
            }

            currentCounter = 1;
            currentChar = dna.at(i);
        }
    }

    cout << maxCounter;
}

int main(int argc, char const *argv[])
{
    solve();
    return 0;
}
