/******************************************************************************
Isyana is given the number of visitors at her local theme park on N consecutive days. 
The number of visitors on the i-th day is Vi.
A day is record breaking if it satisfies both of the following conditions: 

● The number of visitors on the day is strictly larger than the number of visitors on each of the previous days. 
● Either it is the last day, or the number of visitors on the day is strictly larger than the number of visitors on the following day. 
Note that the very first day could be a record breaking day! 
Please help Isyana find out the number of record breaking days.

*******************************************************************************/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n+1];
    
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    a[n]=-1;
    
    if(n==1)
    {
        cout<<"1"<<endl;
    }
    
    int ans=0;
    int mx=-1;
    
    for(int i=0; i<n; i++)
    {
        if(a[i]>mx && a[i]>a[i+1])
        {
            ans++;
        }
        mx = max(mx, a[i]);
    }
    cout<<ans<<endl;
    return 0;
}
