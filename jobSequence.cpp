
// d ---- deadlines
// p------profits
// j------jobs

#include<bits/stdc++.h>
using namespace std;
int p[]={10,50,20,60,10,30,40};

int jobSequence(int d[],int j[],int n)
{
    //bubble sorting 
    for(int i =1;i<=n;i++)
    {
        for(int j =1;j<=n;j++)
        {
            if(p[j]<p[j+1])
            {
                swap(p[j],p[j+1]);
                swap(d[j],d[j+1]);
            }
        }

    }

// finding appropriate job and position 
    d[0] = j[0] = 0;
    j[1]  = 1;
    int slot = 1;
    for(int i = 2;i<=n;i++)
    {
        int r = slot;
        while(d[j[r]]>d[i] && d[j[r]]!=r)
        {
            r = r-1;
        }
        if(d[j[r]]<=d[i] && d[i]>r)
        {
            for(int q = slot;q>=r+1;q--)
                j[q+1] = j[q];
            j[r+1] = i;
            slot = slot+1;
        }
    }
    return slot;
}

int main()
{
    int n,d[]={1,2,1,4,5,4,1},j[]={0,1,2,3,4,5,6};
    n=7;
    int total=0;
   
    int slot = jobSequence(d,j,n);
    cout<<"sorted jobs: "<<endl;
    for(int i =1;i<=n;i++)
        cout<<p[i]<<" "<<d[i]<<endl;
    cout<<"suitable jobs index number: "<<endl;
    for(int i =1;i<=slot;i++)
        {
            cout<<j[i]<<" ";
            total+=p[i];
        }
        cout<<endl;
    cout<<"total profit: "<<total<<endl;    
}