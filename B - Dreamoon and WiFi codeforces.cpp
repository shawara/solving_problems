#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;
int coun=0;

void rec(string s,int i,int n,int b){

if(s.size()==n){
        int g=i;
    for(int x=0; x<n; x++){
        if(s[x]=='+') g++;
    else g--;
   }
if(g==b) coun++;
return;
}
rec(s+"+",i,n,b);
rec(s+"-",i,n,b);
}


int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int n=0,b=0;

     for(int x=0; x<s1.size(); x++){
        if(s1[x]=='+') b++;
    else b--;
    }

    int i=0;
         for(int x=0; x<s2.size(); x++){
        if(s2[x]=='+') i++;
        else if(s2[x]=='-') i--;
    else n++;
    }

    rec("",i,n,b);
cout<<fixed<<setprecision(12)<<float(coun)/float(pow(2,n));
    return 0;
}