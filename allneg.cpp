#include<bits/stdc++.h>
using namesppace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
for(int i=0;i<n;i++)
cin>>a[i];
int j=0;
for(int i=0;i<n;i++)
{
    if(a[i]<0)
    {
        if(i!=j)swap(a[i],a[j]);
        j++;
    }
}
for(int i=0;i<n;i++)
cout<<a[i]<<" ";
cout<<endl;


return 0;
}