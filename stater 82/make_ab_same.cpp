#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    vector<int>a(n);
	    vector<int>b(n);
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	     for(int i=0;i<n;i++)
	    {
	        cin>>b[i];
	    }
	   if(a[0]!=b[0] || a[n-1]!=b[n-1])
       cout<<"NO";
       else
       {
        bool flag=false;
        for(int i=1;i<n-1 ;i++)
        {
            if(a[i]==1 and b[i]==0)
            flag=true;
        }
        if(flag==true)
        cout<<"NO";
        else
        cout<<"YES";
       }
       cout<<endl;
	}
	return 0;
}
