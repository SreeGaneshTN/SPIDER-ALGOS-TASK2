#include <bits/stdc++.h> 
#include<vector>
using namespace std; 
#define ll long long

//Logic:Using PrefixSumArray



int main()
{
	ll n,q;
	cin>>n;
	cin>>q;
	long long a[n+1]={0};
	// Run a loop for q times, inputting left and right
	for(int i=0;i<q;i++)
	{
		ll left,right,val;
		cin>>left>>right>>val;
		//add val to a[left] and subtract val from a[right+1] so as to update 
		//in the range of left to right.
		//Then resultant array can be found by 
		//calculating prefix sum array where a[i]=0 for all i.But in the qn,it is a[i]=i
		//So answer can be found by taking prefix sum along with adding i to array value
		a[left]+=val;
		a[right+1]-=val;
	}
	ll mx=0;
	for(int i=1;i<=n;i++)
	{
		a[i]+=a[i-1];
		mx=max(mx,a[i]+i);
	}
cout<<mx;
	
}
