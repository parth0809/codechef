#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int first=1,second=2;
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<n;j++)
	        {
	            if(first<=n*n)
	            {
	                cout<<first<<" ";
	                first=first+2;
	            }
	            else
	            {
	                cout<<second<<" ";
	                second+=2;
	            }
	        }
	        cout<<endl;
	    }
	}
	return 0;
}
