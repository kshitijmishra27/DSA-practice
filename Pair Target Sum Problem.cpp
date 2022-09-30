//C++ program to demonstrate the two pointer approach

/*Pair Target Sum Problem

Find whether there exist 2 numbers that sum to K.
Important: The Array should be sorted for two pointer approach.

Idea: keep a low and high pointer, decide which pointer to move on the basis of
arr[low] + arr[high].

Time Complexity: O(N)
Space Complexity: O(1)*/


#include <bits/stdc++.h>
using namespace std;

//function
bool pairsum(int arr[], int n, int reqsum)
{
    int low=0;
    int high = n-1;
    
    while(low<high)
    {
        if(arr[low]+arr[high] == reqsum)
        {
            cout<<"Index of the Elements eligible :  ";  //prinitng the indexes eligible
            cout<<low<<"  "<<high<<endl;
            return true;
        }
        else if(arr[low] + arr[high]> reqsum) // checking the desired condition
        {
            high--;
        }
        else
        {
            low++;
        }
    }
    return false;
}

// Driver Code
int main()
{
    int n,reqsum;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i]; //entering the array
    }
    cin>>reqsum; //required sum to be checked
    cout<<"1 if True & 0 if False:  ";
    cout<<pairsum(arr,n,reqsum)<<endl; //prinitng the desired result

    return 0;
}
