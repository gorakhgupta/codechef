#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<conio.h>

using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v;
    v[0]=0;
    v[1]=1;
    for(int i=2;i<n;i++)
    {
        v.push_back(v[i-1]+v[i-2]);

    }
    for(int i=0;i<n;i++)
    {
        v[i]=v[i]%10;
    }
    while(v.size()!=1)
    {
        for(auto i=v.begin();i!=v.end();i=i+2)
        {
            v.erase(i);
        }
    }
    cout<<v[0]<<endl;
    getch();
    return 0;
}