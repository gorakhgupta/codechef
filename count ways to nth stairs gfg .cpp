// { Driver Code Starts
//Gorakh Kumar Gupta
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends



class Solution{
	public:
		int nthStair(int n){
		    if(n%2==0)
		    return((n)/2 +1);
		    else if(n%2!=0)
		    return ((n-1)/2 +1);
		    //  Code here
		}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		int ans  = ob.nthStair(n);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends