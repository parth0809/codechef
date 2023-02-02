#include <iostream>
using namespace std;

#define mod 998244353;
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    long long unsigned int sum=0;
	    for(int i=0;i<n;i++)
	    {
	        int m;
	        cin>>m;
	        sum=(sum+m)%mod;
	    }
        sum=(sum*(sum-1))%mod;
        cout<<sum<<endl;
	}
	return 0;
}
