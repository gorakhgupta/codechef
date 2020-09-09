/*
algorithm
1.create a new array of size contraint+1 and initialise it to 0;
2.now ,store i in b at index a[i];
a.for loop [i=0-i=n) 
b[a[i]]=i
3.now store inside a var last_index =b[a[i]];
a.and print (n-1-last_index); 









*/




#include <iostream>
using namespace std;
int main()
{
    int T; cin>>T;
    while(T--)
    {
        int n; cin>>n;
        int a[n];
        int b[1000001]={0};
        // in b[]  we store last index of elements
        for(int i=0;i<n;i++)  // i->index
        {
            int x; cin>>x;
            a[i]=x;
            b[x]=i;
            
//            cin>>a[i];
//            b[a[i]]=i;
        }
        for(int i=0;i<n;i++)
        {
            //cout<<n-1-b[a[i]]<<endl;
            int x = a[i];
            int last_index = b[x];
            cout<<n-1-last_index<<" ";
        }
        cout<<endl;
        
    }
}
