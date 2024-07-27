#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cout<<"Enter Number of Integers"<<'\n';
    cin>>n;

    vector<int> v(n);

    for(int i =0;i<n;i++)
    {
        cin>>v[i];
    }
    int sum = accumulate(v.begin(),v.end(),0LL);

    float avg = sum/n;

    cout<<"Average of all inserted numbers is "<<avg<<'\n';
}
