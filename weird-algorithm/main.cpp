#include <bits/stdc++.h>

using namespace std;

void solve()
{

    long int num;

    cin >> num;

    while (true)
    {
        cout << num << " ";

        if (num == 1)
        {
            return;
        }

        if (num % 2 == 0)
        {
            num = num / 2;
        }
        else
        {
            num = 3 * num + 1;
        }
    }
}

int main(int argc, char const *argv[])
{
    solve();
    return 0;
}
