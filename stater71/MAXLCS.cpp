#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    string s,s1,s2;
	    cin>>n;
	    cin>>s;
	    for (int i=0;i<n/2;i++)
	    s1[i]=s[i];
	    for (int i=n-1;i>=n/2;i--)
	    s2[n-1-i]=s[i];
	    int l=0;
	    for(int i=0;i<n/2;i++)
	    {
	        if(s1[i]==s2[i])
	        l++;
	    }
	    cout<<l<<endl;
	}
	return 0;
}
