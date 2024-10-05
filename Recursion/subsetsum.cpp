#include<bits/stdc++.h>
using namespace std;
 
#define pb  push_back
#define en "\n"
typedef long long int ll;


void subsetsum(int ind,vector<int>&arr,int n,vector<int>&ds, long long sum)
    {
        if(ind==n)
        {
            ds.push_back(sum);
            return;
        }
        subsetsum(ind+1,arr,n,ds,sum+arr[ind]);
        
        subsetsum(ind+1,arr,n,ds,sum);
        
    }
  

  
int main()
{
  
   int n;
   cin>>n;
    vector<int>arr(n);
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
        vector<int>ds;
        long long sum=0;
        int ind=0;
        subsetsum(ind,arr,n,ds,sum);
        sort(ds.begin(),ds.end());
        for(auto it:ds)
        {
            cout<<it<<" ";
        }
        cout<<en;
   return 0;
}