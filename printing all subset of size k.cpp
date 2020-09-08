//Vs code 
//Gorakh kumar gupta

#include<iostream>
#include<math.h>
#include<vector>
#include<algorithm>
#include<conio.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];
for(int i=0;i< pow(2,n);i++)
{vector<int>v;
    int x=i;
while(x>0)
{
    int z=x%2;
    v.push_back(z);
    x=x/2;
}
int p=n-v.size();
for(int j=1;j<=p;j++)
v.push_back(0);
reverse(v.begin(),v.end());
int cnt=0;
for(int i=0;i<v.size();i++)
{
    if(v[i]==1)
    cnt++;
}
if(cnt==k)
{
    for(int i=0;i<v.size();i++)
    {
        if(v[i]==1)
        cout<<a[i]<<" ";
    }
    cout<<endl;
}



}
getch();
return 0;
}