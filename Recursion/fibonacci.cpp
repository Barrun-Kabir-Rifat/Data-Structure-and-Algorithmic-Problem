
//Question: print out first n fibonacci number using recursion
/* Allah is the best planner.He knows everything*/
#include<bits/stdc++.h>
using namespace std;
 
#define pb  push_back
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define en "\n"

typedef long long int ll;
typedef unsigned long long int ull;
  
int fibo(int n)
{
  if(n<=1)
  {
    return n;
  }    
 int first= fibo(n-1);
  int last=fibo(n-2); 
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                
return first+last;
   
}
  
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<=n;i++)
    {
     cout<<fibo(i)<<" ";
    }
  

   return 0;
}