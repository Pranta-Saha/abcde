#include<bits/stdc++.h>
using namespace std;

int fexd;

void An(int n,int fxd)
{
    if(n==1)
    {
        if(fxd==1)
            cout<<"sin(1)";
        else
            cout<<"sin(1-";
    }
    else
    {
        An(n-1,fxd);

        cout<<"sin("<<n;
        if(n!=fxd)
            cout<<((n%2)?"-":"+");
        else
        {
            while(n--) cout<<")";
        }
    }
}

void Sn(int n)
{
    if(n!=1)
    {
        An(fexd-n+1,fexd-n+1);
        cout<<"+"<<n<<")";
        Sn(n-1);
    }
}


int main()
{
    int n,i,a,b,c,mx,tmp;
    cin>>n; fexd=n;

    for(i=1;i<n;i++) cout<<"(";
    Sn(n);
    An(n,n);
    cout<<"+1";

    return 0;
}
