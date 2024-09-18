#include<bits/stdc++.h>
using namespace std;
 
#define pb  push_back
#define en "\n"
typedef long long int ll;
void subsequence(int ind,ll arr[],vector<ll>v,int n)
{
    if(ind>=n)
    {
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }
        if(v.size()==0)
        {
            cout<<"{}";
        }
        cout<<en;
       return;
    }
    v.pb(arr[ind]);
    subsequence(ind+1,arr,v,n);
    v.pop_back();
   subsequence(ind+1,arr,v,n);
}
    
int main()
{
   
int n;
cin>>n;
 ll arr[n];
 for(int i=0;i<n;i++)
 {
    cin>>arr[i];
 }

 vector<ll>v;
 int ind=0;
 subsequence(ind,arr,v,n);

   return 0;
}
