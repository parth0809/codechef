#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int m;
	    cin>>m;
	    vector<int>vec;
	    for(int i=0;i<m;i++)
	    {
	        int x;
	        cin>>x;
	        vec.push_back(x);
	    }
	    int min=INT_MAX;
	    for(auto it:vec)
	    {
	        if(it<min)
	        min=it;
	    }
	    int count=0;
	    for(int i=0;i<vec.size();i++)
	    {
	        if(vec[i]>min)
	        count++;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
