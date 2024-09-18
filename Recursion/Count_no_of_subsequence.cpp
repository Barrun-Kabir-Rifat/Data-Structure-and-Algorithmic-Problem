
// description: subsequence sum of an array that is equal to k. print the count of those subsequences;
// here , take - not take formula applied . that how subsequence works;
#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define en "\n"
typedef long long int ll;
//int count=0;

int  subsequence(int ind, ll arr[], int n, int sum, int k,int count)
{
    if (ind >= n)
    {
        if (sum == k)
        {
          return 1;  
        }
        return 0;
    }
   
    sum = sum + arr[ind];
    //v.pb(arr[ind]);
  int l=  subsequence(ind + 1, arr, n, sum, k,count);
     
    sum = sum - arr[ind];
   // v.pop_back();

int r= subsequence(ind + 1, arr, n, sum, k,count);
    return l+r;
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
    cout<<subsequence(ind, arr, n, 0, 2,0)<<en;

    return 0;
}
