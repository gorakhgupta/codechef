//Gorakh Kumar Gupta


#include<iostream>
#include<math.h>
using namespace std;
#define ll long long
int main()
{
ll int n;
cin>>n;
ll int a[13]={0};
for(int i=1;i<13;i++)
{

    a[i]=pow(10,i) -1;
}
for(int i=2;i<13;i++)
{

    for(int j=1;j<=i-1;j++)
    a[i]=a[i]-a[j];

}
ll int count=0;
for(int i=1;i<13;i++)
{

    if(n-a[i]>=0)
    {

    count=count+i*a[i];
    n=n-a[i];}
    else
        {count=count+n*i;
        break;}
}
cout<<count<<endl;
}

