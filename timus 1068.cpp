#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cin>>n;



    if(n>0)
        cout<<(n*(n+1))/2<<endl;
    else
    {
        n=abs(n);
        n=((n*(n+1))/2)-1;
        cout<<(n*(-1))<<endl;
    }

    return 0;
}
