#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>vec;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            vec.push_back(x);
        }
        cout<<*max_element(vec.begin(), vec.end())<<endl;
    }
    return 0;
}