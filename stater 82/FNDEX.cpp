#include <bits/stdc++.h>
using namespace std;

long long gcd(long a,long b)
{
    if(b==0)
    return a;
    else
    return gcd(b,a%b);
}
long long lcm(long a,long b)
{
    return (a*b)/gcd(a,b);
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    long long a,b,c,d;
	    cin>>a>>b>>c>>d;
	    if((a+1)%b==(c+1)%d)
	    cout<<1;
	    else
	    {
	        long long val=lcm(b,d);
            cout<<val-(a%b);
	    }
        cout<<endl;
	}
	return 0;
}
