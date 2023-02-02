#include <bits/stdc++.h>
using namespace std;
int a[100001],b[100001],ans[100001];
int main() {
	// your code goes here
	int t;
	cin>>t;
    while (t--)
    {
        /* code */
        int n;
        cin>>n;
       for(int i=0;i<n;i++)
       {
        cin>>a[i];
        b[i]=a[i];
       }
       int cnt=1;
       for(int i=0;i<n;i++)
       {
        ans[i]=cnt;
        b[i]--;
        if(b[i]!=0)
        {
        for(int j=i+1;j<n;j++)
        {
            if(b[i]==0)
            break;
            else
            {
                if(a[j]==a[i])
                {
                    b[i]--;
                    ans[j]=cnt;
                }
            }
            cnt++;
        }
        }
        for(int i=0;i<n;i++)
        cout<<ans[i];
        for(int i=0;i<n;i++)
        {
            a[i]=0;b[i]=0;ans[i]=0;
        }
       }
    }
    
	return 0;
}
