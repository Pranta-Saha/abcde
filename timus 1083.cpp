#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,i,j,res=0,tmp;

    cin>>n;

    string str;

    cin>>str;

    k=str.size();

    res=n;

    for(i=1;i<22;i++)
    {
        tmp=n-(i*k);

        if(tmp<=0) break;

        res=res*tmp;
    }

    cout<<res<<endl;

}
