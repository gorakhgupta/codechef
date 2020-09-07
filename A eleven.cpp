#include<iostream>
#include<math.h>
using namespace std;
int f(int n)
{
    int x=(5*n*n+4);
int y=(5*n*n-4);
int k1=sqrt(x);
int k2=sqrt(y);
if(k1*k1==x || k2*k2==y)
    return 1;

    return 0;
}

int main()
{
int n;
cin>>n;
string s;
for(int i=1;i<=n;i++)
{

    if(f(i))
        s=s+'O';
    else
        s=s+'o';

}
cout<<s<<endl;
}

