#include<bits/stdc++.h>
using namespace std;
int binarySearch(int a[],int target,int n){
    
    int left=0;
    int right=n-1;
   
    while(left<=right){
         int mid=left+(right-left)/2;
        if(a[mid]==target) return 1;
        else if(a[mid]<target) left=mid+1;
        else right=mid-1;
      
    }
    return -1;  
}
int main()
{
 int arr[]={10,5,2,13,15};
 int n=sizeof(arr)/sizeof(arr[0]);
 sort(arr,arr+n);
 int x=binarySearch(arr,22,n);
 if(x==1) cout<<"found";
 else cout<<"not found"; 
return 0;
}