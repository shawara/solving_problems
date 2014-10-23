#include <iostream>
#include <string>
#include <map>
#include <cstdlib>
using namespace std;

int main()
{
    int i;
    while(cin>>i && i){
            bool fz=0;
            map<int,char> m;
              map<int,char>:: iterator it,is,f,en;

        string s;
        int dist=i+10,a=i,b=i;
        cin>>s;

        for(int x=0; x<i; x++){
            if(s[x]=='Z'){ cout<<0<<endl; fz=1; break;}
            else if(s[x]=='R' ) {if(x-b>0) if(x-b<dist) dist=x-b; a=x;}
        else if(s[x]=='D' ) {if(x-a>0) if(x-a<dist) dist=x-a; b=x;}
        }
 if(!fz)cout<<dist<<endl;

    }
    return 0;
}
