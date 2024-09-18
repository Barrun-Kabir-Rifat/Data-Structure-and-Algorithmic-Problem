
/* Allah is the best planner.He knows everything*/
#include<bits/stdc++.h>
using namespace std;
 
#define pb  push_back
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define en "\n"

typedef long long int ll;
typedef unsigned long long int ull;
  
void recursive_sum(vector<ll>v,int i,int sum)
{
 
 if(i==v.size())
 {
     cout<<sum<<en;  
    return;
 } 
 
 recursive_sum(v,i+1,sum+v[i]);
  
}
  
int main()
{
fast();
 
 int t=1; 
 //cin>>t;
while(t--)
{
 //sum of n numbers using recursion   
  vector<ll>v;
  v.pb(1);
  v.pb(2);
  v.pb(3);
  v.pb(5);
    recursive_sum(v,0,0);
}
   return 0;
}