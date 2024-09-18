

/* this program show how functional recursive works and 
here this recursion print the number and that number to current sum.
finally it will contain sum of n natural number*/

/* Allah is the best planner.He knows everything*/
#include<bits/stdc++.h>
using namespace std;
 
#define pb  push_back
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define en "\n"

typedef long long int ll;
typedef unsigned long long int ull;

 // sum of n natural number;; 
int f(int n)
{
  if(n==0)
  {
    return 0;
  }
  cout<<n<<en;
  return n+f(n-1);
 
}
  
int main()
{
fast();
 
 int t=1; 
 //cin>>t;
while(t--)
{
   cout<<f(5)<<endl; 
}
   return 0;
}