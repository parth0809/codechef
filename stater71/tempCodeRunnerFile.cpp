#include <bits/stdc++.h>
using namespace std;
int a[101];
void reset()
{
    for(int i=1;i<101;i++)
    a[i]=0;
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int x;
	    reset();
	    for(int i=0;i<n;i++)
	    {
	        cin>>x;
	        a[x]++;
	    }
	    int flag=0;
	    for(int i=1;i<101;i++)
	    {
	        if(a[i]%2==1)
	        flag=1;
	    }
	    if(flag==0)
	    cout<<"YES";
	    else
	    cout<<"NO";
	    cout<<endl;
	}
	return 0;
}
