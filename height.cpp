#include <bits/stdc++.h>
using namespace std;
int main()
{
 int t;
 cin>>t;
 while(t--)
 {
     string s;
     cin>>s;
      int flag=1;
      for(int i=0;i<s.size();i++)
      {
          if(s[i]!='a')
          {
              flag=0;
              break;
          }
      }
 if(flag==1)
 cout<<"NO\n";
 else
 {
     cout<<"YES\n";
     string s1=s+'a';
     string s1r=s1;
     reverse(s1r.begin(),s1r.end());
     if(s1==s1r)
     {
         cout<<'a'+s<<endl;
     }
     else
     {
         cout<<s+'a'<<endl;
     }
 }


 }
    return 0;
}