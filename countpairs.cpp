#include <iostream>
using namespace std;

//HELLO

int main() {
int t;
cin>>t;
while(t--){
int n,sum,count=0;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
{ 
    cin>>a[i];
}
for(int i=0;i<n;i++)
{ 
    for(int j=i+1;j<n;j++)
    {
         sum=(a[i]+a[j]);
        if(sum%4==0) 
        count++;
    
        
    }
    
}
cout<<count<<endl;
}
    
}