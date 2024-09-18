
/* Allah is the best planner.He knows everything*/
#include<bits/stdc++.h>
using namespace std;
 
#define pb  push_back
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define en "\n"

typedef long long int ll;
typedef unsigned long long int ull;
  
bool string_palindrome(int i,string str)
{
  if(i>=str.size()/2)
  {
    return true;
  }

  if(str[i]!=str[str.size()-1-i])
  {
    return false;
  }

  string_palindrome(i+1,str);  
}
  
int main()
{
fast();
 
 int t=1; 
// cin>>t;
while(t--)
{
    string str;
    cin>>str; 
   if(string_palindrome(0,str))
   {
    cout<<"Yes, this is palindrome"<<en;
   }
   else
   {
    cout<<"NO,This is not palindrome."<<en;
   }
}
   return 0;
}