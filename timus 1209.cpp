#include<bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long n,k,tmp,j,i,prevN;

    cin>>n;

    while(n--)
    {
        cin>>k;

        if(k==1) {cout<<1<<endl; continue;}

        prevN=sqrt(1+(8*k));
        prevN-=1;
        prevN/=2;

        tmp=k-((prevN*(prevN+1))/2);

        if(tmp==1) cout<<1<<endl;
        else cout<<0<<endl;

    }


    return 0;
}
