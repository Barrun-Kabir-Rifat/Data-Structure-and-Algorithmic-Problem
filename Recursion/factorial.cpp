
//Question:Print out factorial of a number using recursion
/* Allah is the best planner.He knows everything*/
#include<bits/stdc++.h>
using namespace std;
 
#define pb  push_back
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define en "\n"

typedef long long int ll;
typedef unsigned long long int ull;
  
int fact(int n)
{
  if(n==1)
  {
    return 1;
  }

  return n* fact(n-1);
}
  
int main()
{
//fast();
 
 int t=1; 
 //cin>>t;
while(t--)
{
   int n=6;
   cout<<fact(6)<<en;
}
   return 0;
}