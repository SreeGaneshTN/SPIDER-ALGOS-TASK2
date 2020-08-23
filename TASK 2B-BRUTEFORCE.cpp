#include <bits/stdc++.h> 
#include<vector>
using namespace std; 
#define ll long long

//Logic:BruteForce



int main()
{
	ll n,q;
	cin>>n;
	cin>>q;
	long long a[n+1];
	for(int i=1;i<=n;i++)
	a[i]=i;
	// Run a loop for q times, inputting left and right
	for(int i=0;i<q;i++)
	{
		ll left,right,val;
		cin>>left>>right>>val;
		for(int i=left;i<=right;i++)
		{
			a[i]+=val;
		}
	}
	ll mx=0;
	for(int i=1;i<=n;i++)
	{
		mx=max(mx,a[i]);
	}
cout<<mx;
	
}
