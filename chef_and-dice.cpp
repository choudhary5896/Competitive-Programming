#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	long long int  t;
	
cin>>t;

while(t--)
{
    long long int n;
    cin>>n; 
    long long int a1,a2,a3,a4;
    if(n==1)
    {
        a1=20;
        cout<<a1<<endl;
    }
    else if(n==2)
    {
        a2=36;
        cout<<a2<<endl;
    }
      else  if(n==3)
    {
        a3=51;
        cout<<a3<<endl;
    }
    else if(n==4)
    {
        a4=60;
        cout<<a4<<endl;
    }
    
    else
    {
        long long int r=n%4;
        long long int s=60*(n/4)-4*(n-4);
        if(r==1)
        s+=a1;
        if(r==2)
        s+=a2;
        if(r==3)
        s+=a3;
        if(r==4)
        s+=a4;
        
        cout<<s<<endl;
    }
    

}
	return 0;
    
}
