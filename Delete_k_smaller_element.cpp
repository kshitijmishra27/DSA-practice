#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int> deleteElement(int arr[],int n,int k);
int main()
{
    int t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        cin>>k;
        vector<int>v;
        v=deleteElement(arr,n,k);
        vector<int>::iterator it;
        for(it=v.begin();it!=v.end();it++)
        {
            cout<<*it<<" ";
        }
        cout<<endl;
    }
    return 0;
}
vector<int> deleteElement(int arr[],int n,int k)
{
    
    vector<int> vrr;
     stack<int>st;
    for(int i=0;i<n;i++)
    {
        while(!st.empty() && st.top()<arr[i] && k)
        {
            st.pop();
            k--;
        }
        st.push(arr[i]);
    }
    while(!st.empty())
    {
        vrr.push_back(st.top());
        st.pop();
    }
    reverse(vrr.begin(),vrr.end());
    return vrr;
}
