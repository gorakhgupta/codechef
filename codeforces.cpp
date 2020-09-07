#include<iostream>
#include<conio.h>
using namespace std;
int main()
{

int a,b;
cin>>a>>b;
int ans=a;
int x=b;
while(b>=x)
{

    ans=ans+a/b;
    b=a/b;
}
cout<<ans<<endl;
getch();
return 0;
}
