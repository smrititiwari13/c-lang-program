#include<bits/stdc++.h>
using namespace std;
vector<int> maximum(vector<int>&ar,int k)
{
    vector<int>result;
    for(int i=0;i<=ar.size()-k;i++)
    {
        int maxi=ar[i];
        for(int j=i;j<i+k;j++)
        {
          maxi=max(maxi,ar[j]);  
        }
        result.push_back(maxi);
    }
    return result;
}
int main()
{
    int n;
    cin>>n;
    vector<int>arr(n,0);
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int k;
    cin>>k;
    vector<int>ans = maximum(arr,k);
    for(auto x: ans) cout<<x<<" ";
}
