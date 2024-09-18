#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define en "\n"
typedef long long int ll;

// description: subsequence sum of an array that is equal to k. print those subsequence;
// here , take - not take formula applied . that how subsequence works;

void subsequence(int ind, ll arr[], vector<ll> v, int n, int sum, int k)
{
    if (ind >= n)
    {
        if (sum == k)
        {
            for (int i = 0; i < v.size(); i++)
            {
                cout << v[i] << " ";
            }
            if (v.size() == 0)
            {
                cout << "{}";
            }
            cout << en;
        }

        return;
    }
    v.pb(arr[ind]);
    sum = sum + arr[ind];
    subsequence(ind + 1, arr, v, n, sum, k);

    sum = sum - arr[ind];
    v.pop_back();

    subsequence(ind + 1, arr, v, n, sum, k);
}

int main()
{

    int n;
    cin >> n;
    ll arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<ll> v;
    int ind = 0;
    subsequence(ind, arr, v, n, 0, 2);

    return 0;
}
