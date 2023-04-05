//ds 1.1
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int linear_search(ll a[], ll n, ll key)
{
    for (ll i = 0; i < n; i++)
    {
        if(key == a[i])
            return i;
    }
    return -1;
}

int binary_search(ll a[], ll n, ll key)
{
    ll start = 0; 
    ll end = n-1;
    ll mid = start + (end-start)/2;

    while (start<=end)
    {
        if(a[mid] == key)
            return mid;
        if(a[mid]<key)
            start = mid+1;
        else
            end = mid-1;
        mid = start + (end-start)/2;
    }
    return -1;
}

int main()
{
    cout<<"Enter the size of the array: ";
    ll n; cin>>n;
    ll a[n], key; 
    cout<<"Enter the elements of the array:\n";
    for(ll i = 0; i<n; i++) cin>>a[i];
    cout<<"Enter the element whose index you want to find: ";
    cin>>key;
    cout<<"Index of "<<key<<" using linear search is: "<<linear_search(a, n, key);
    cout<<"\nIndex of "<<key<<" using binary search is: "<<binary_search(a, n, key);
    return 0;
}
