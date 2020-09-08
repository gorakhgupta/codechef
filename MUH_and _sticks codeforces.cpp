Skip to content
Search or jump to…

Pull requests
Issues
Marketplace
Explore
 
@gorakhgupta 
Learn Git and GitHub without any code!
Using the Hello World guide, you’ll start a branch, write comments, and open a pull request.


Prince-1501
/
Hello_world-Competiitve-Programming
2
1419
Code
Issues
Pull requests
Actions
Projects
1
Wiki
Security
Insights
Hello_world-Competiitve-Programming/53_codeforces_MUH_and_sticks.cpp
@Prince-1501
Prince-1501 Create 53_codeforces_MUH_and_sticks.cpp
Latest commit d829b59 on Sep 7, 2019
 History
 1 contributor
80 lines (69 sloc)  1.6 KB
  
//
//  main.cpp
//  code
//
//  Created by Prince  Kumar on 07/09/19.
//  Copyright © 2019 Prince  Kumar. All rights reserved.
//
//  codeforces --> MUH and Sticks

#include <iostream>
using namespace std;
int main()
{
    int a[10]={0};
    for(int i=1;i<=6;i++)
    {
        int x; cin>>x;
        a[x]++;
    }
    
    int leg =0;
    int leg_value=0;
    for(int i=1;i<=9;i++)
    {
        if(a[i]>=4)
        {
            leg=1;
            leg_value=i;
            a[i]=a[i]-4;
            break;
        }
        
    }
    
    int body=0;
    int body_value=0;
    
    for(int i=1;i<=9;i++)
    {
        if(a[i]>=1)
        {
            body=1;
            body_value=i;
            a[i]=a[i]-1;
            break;
        }
        
    }
    
    int head=0;
    int head_value=0;
    
    for(int i=1;i<=9;i++)
    {
        if(a[i]>=1)
        {
            head=1;
            head_value=i;
            a[i]=a[i]-1;
            break;
        }
        
    }
    
    // we got leg leg_value / body body_value / head head_value
    
    if(leg==1 && body==1 && head==1)
    {
        if(leg_value!=head_value && leg_value!=body_value && head_value!=body_value)
            cout<<"Bear"<<endl;
        else if(body_value!=head_value && (leg_value!=head_value || leg_value!=body_value))
            cout<<"Bear"<<endl;
        else if(leg_value!=head_value && leg_value!=body_value && head_value==body_value)
            cout<<"Elephant"<<endl;
        else if(leg_value==head_value && leg_value==body_value && head_value==body_value)
            cout<<"Elephant"<<endl;
    }
    else
        cout<<"Alien"<<endl;
}
© 2020 GitHub, Inc.
Terms
Privacy
Security
Status
Help
Contact GitHub
Pricing
API
Training
Blog
About
