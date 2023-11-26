#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;

    cin >> n;

    vector<int> nums;

    for (int i = 0; i < n - 1; i++)
    {

        int t;

        cin >> t;

        nums.push_back(t);
    }

    sort(nums.begin(), nums.end());

    for (int i = 1; i <= n; i++)
    {
        if (nums[i - 1] != i)
        {
            cout << i;
            return;
        }
    }
}

int main(int argc, char const *argv[])
{
    solve();
    return 0;
}
