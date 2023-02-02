#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    long long n,k,l;
	    cin>>n>>k>>l;
		long long sol=0,h;
	    if(n<(k+l))
	    {
	       h=k+l-n;
			l=l-h;
			l=l-h;
			h=0;
			sol+=k*(h+l);
			sol+=h*l;
			sol+=h*(h+1)/2;
	    }
		else
		{
			 h=n-k-l;
			sol+=k*(h+l);
			sol+=h*l;
			sol+=h*(h-1)/2;
		}
		cout<<sol<<endl;
	}
	return 0;
}
