
//Question: Print out n to 1 natural number using recursion.


/* Allah is the best planner.He knows everything*/
#include<bits/stdc++.h>
using namespace std;
 
#define pb  push_back
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define en "\n"

typedef long long int ll;
typedef unsigned long long int ull;
 
void solve(int n,int a)
{
  if(n==a)
  {
    return ;
  }
   a++;
  solve(n,a);
   
    cout<<a<<" ";
   //cout<<endl;
    //cout<<n<<" ";
//    n++;
//    cout<<n<<"rifat"<<en;
//    cout<<n<<en;
   

}
  
int main()
{
fast();
 
 int t=1; 
 //cin>>t;
while(t--)
{
  int n;
  cin>>n;
 solve(n,0) ;
}
   return 0;
}