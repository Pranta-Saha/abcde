
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,a,b,c,mn=INT_MAX,tmp,arr[20],j;

    cin>>n;

    for(i=0;i<n;i++)
        cin>>arr[i];

    for(i=(1<<(n-1))-1; i>=0 ;i--)
    {
        tmp=0;

        for(j=0;j<n;j++)
        {
            if((1<<j)&i) tmp+=arr[j];
            else tmp-=arr[j];
        }

        mn=min(mn,abs(tmp));
    }

    cout<<mn<<endl;
    return 0;
}
