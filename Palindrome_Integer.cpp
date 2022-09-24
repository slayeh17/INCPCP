#include<bits/stdc++.h>
using namespace std;
#define ll long long
string solve(int n)
{
    int a=n,s=0;
    while(a>0)
    {
        int d=a%10;
        s=s*10+d;
        a=a/10;
    }
    return (s==n)?"true":"false";
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    cout<<solve(n);
}