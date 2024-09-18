#include<bits/stdc++.h>
using namespace std;
 
#define pb  push_back
#define en "\n"
typedef long long int ll;


// merge the all single element
void merge(vector<ll>&arr,int low,int mid, int high) 
{
    vector<ll>temp;
   int left=low;
   int right=mid+1;
     while(left<=mid && right<=high)
     {
        if(arr[left]<=arr[right])
        {
            temp.pb(arr[left]);
            left++;
        }
        else
        {
            temp.pb(arr[right]);
            right++;
        }
     }
     while(left<=mid)
     {
        temp.pb(arr[left]);
        left++;

     }
     
     while(right<=high)
     {
        temp.pb(arr[right]);
        right++;
     }
     int k=0;
   for(int i=low;i<=high;i++)
   {
       arr[i]=temp[k];
       k++;
   }
}

//divide the array untill it reaches to single element.
//when it becomes single then merge them.

void merge_sort(vector<ll>&arr,int low, int high)
{
    if(low==high)
    {
        return; 
    }
     int mid=(low+high)/2;
     merge_sort(arr,low,mid);
     merge_sort(arr,mid+1,high);
     merge(arr,low,mid,high);
}
  
  
int main()
{
     int n;
     cin>>n;
 vector<ll>arr(n);
     for(int i=0;i<n;i++)
     {
        cin>>arr[i];
     }


 merge_sort(arr,0,n-1);

// sorted array print;
 for(int i=0;i<n;i++) 
   {
    cout<<arr[i]<<" ";
   }
   cout<<en;
   return 0;
}