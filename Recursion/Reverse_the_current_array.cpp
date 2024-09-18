

// Question: Reverse the array using recursion
/* Allah is the best planner.He knows everything*/

#include<bits/stdc++.h>
using namespace std;
 
#define pb  push_back
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define en "\n"

typedef long long int ll;
typedef unsigned long long int ull;
  
 void reverse_arr(int arr[],int i,int n)
{
       if(i>=(n/2))
       {
        return;
       }
    swap(arr[i],arr[n-i-1]);
    reverse_arr(arr,i+1,n);
 
}
  
int main()
{
fast();
 
 int t=1; 
 //cin>>t;
while(t--)
{
    int arr[4];
    for(int i=0;i<4;i++)
    {
        cin>>arr[i];
    } 
     reverse_arr(arr,0,4);


     
     for(int i=0;i<4;i++)
      cout<<arr[i]<<" ";
      
}
   return 0;
}