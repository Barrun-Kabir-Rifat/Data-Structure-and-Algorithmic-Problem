// we need to find out all possible combinations of number of the given vector that is equal to given target. 
// Here, we can use a single element multiple time
#include<bits/stdc++.h>
using namespace std;
 
#define pb  push_back
#define en "\n"
typedef long long int ll;

void combination_sum(int ind,int target,vector<ll>&arr,vector<ll>&ds, vector<vector<ll>>&ans)
{
      if(ind==arr.size())
      {
        if(target==0)
        {
            ans.push_back(ds);
        }
            return;
      }
      


       if(arr[ind]<=target)
        {
            ds.pb(arr[ind]);
            combination_sum(ind,target-arr[ind],arr,ds, ans);
            ds.pop_back();
        }
      combination_sum(ind+1,target,arr,ds,ans);


      
} 
int main()
{
   int n;
   cin>>n;
   int target=7;
   vector<ll>arr(n);
   vector<vector<ll>>ans;
   vector<ll>ds;
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }


combination_sum(0, 7,arr,ds, ans);


    for(int i=0;i<ans.size();i++)
    {
       vector<ll>temp=ans[i];
        for(int j=0;j<temp.size();j++)
        {
            cout<<temp[j]<<" ";
        }
        cout<<en;
    }
    cout<<en;
   return 0;
}
