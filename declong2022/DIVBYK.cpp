#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int x;
        int flag=0;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            if(x%k==0)
            {
                flag=1;
                break;
            }
            else if(k==1)
            {
                flag=1;
                break;
            }
            else if(k%x==0)
            {
                k=k/x;
            }
            else
            {}
        }
        if(k==1)
        flag=1;
        if(flag==1)
        cout<<"YES";
        else
        cout<<"NO";
        cout<<endl;
    }
    return 0;
}