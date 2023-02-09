#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    vector<int>vec;
	    int n;
	    cin>>n;
		int x=n;
	    while(x--)
	    {
	        int temp;
	        cin>>temp;
			vec.push_back(temp);
	    }
		sort(vec.begin(),vec.end());
		bool flag=true;
		int curr=n-2;
		int temp=vec[n-1];
		int count=0;
		for(int i=n-1;i>=0;i--)
		{
			if(vec[i]==temp)
			{
				count++;
			}
			else
			{
				if(count%2==1)
				{
					flag=false;
					break;
				}
				else
				{
					temp=vec[i];
					count=1;
				}
			}
			
		}
		cout<<count;
		if(flag==false)
		{
			cout<<"Marichka"<<endl;
		}
		else
		cout<<"Zenyk"<<endl;
	}
	return 0;
}
