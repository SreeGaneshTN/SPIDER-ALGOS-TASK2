#include <bits/stdc++.h> 
using namespace std; 



//Logic:
//Basically I traverse through the string,calculate the sum where 
// +1 if it is < and -1 if it is >.Once Sum<0,break the loop as there can't be further prefix
//if sum==0,find the longest prefix=iterator+1

void Longestpref(string s[],int t)
{
	int Longestpref[t]={0};
	for(int i=0;i<t;i++)
	{
		int charsum=0;
	for(int it=0;it<s[i].length();it++)
	{
		if(s[i][it]=='<')
		charsum++;
		else charsum--;
		if(charsum<0)
		break;
		else if(charsum==0)
		Longestpref[i]=it+1;
	}
}
for(int i=0;i<t;i++)
cout<<Longestpref[i]<<endl;
}

int main()
{
	int t;
	cin>>t;
	string s[t];
	for(int i=0;i<t;i++)
	{
		cin>>s[i];
	}
	Longestpref(s,t);
}
