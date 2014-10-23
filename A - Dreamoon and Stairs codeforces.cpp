#include <iostream>
using namespace std;

int main()
{
    int m,n,i;
    cin>>n>>m;
    if(m>n) cout<<-1;
    else{
    i=n/2+n%2;
    while(i%m) i++;
    cout<<i;}

    return 0;
}