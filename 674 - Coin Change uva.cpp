#include <iostream>

using namespace std;
int m[7500][7500],arr[5]={50,25,10,5,1};

int rec(int i,int n){
if(n==0) return 1;

int total=0;
if(m[n][i])return m[n][i];
for(int x=i; x<5; x++){
    if(arr[x]<=n) total+=rec(x,n-arr[x]);
}
return m[n][i]=total;

}

int main()
{
    int n;
    while(cin>>n)
    cout<<rec(0,n)<<endl;

    return 0;
}
