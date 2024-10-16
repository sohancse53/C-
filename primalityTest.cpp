#include<bits/stdc++.h>
using namespace std;
bool prime(int n){
    if(n<2) return false;
     if(n==2) return true;
    if(n%2==0) return false;
   
    for(int i=3;i*i<n;i+=2){
        if(n%i==0) return false;
    }
    return true;
}
int main()
{
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
       if(prime(n)==true) cout<<"prime"<<endl;
       else cout<<"Not prime"<<endl;
    }
 
return 0;
}