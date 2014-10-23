#include <iostream>
#include <string>
#include <vector>
using namespace std;
string str;
vector <string> v;
bool eq(string s){
int n1=0,n2=0;
for(int x=0; x<s.size(); x++){
    if(s[x]=='4') n1++;
else n2++;}
    if(n1==n2) return 1;
return 0;
}

void rec(string s1){
if(s1.size()==str.size()){
if(eq(s1) && s1>=str)
 v.push_back(s1);
return;
}
 rec(s1+"4");
 rec(s1+"7");
}


int main(){
string f="";
cin>>str;
int n=str.size();

 if(n%2==1){
    for(int x=0; x<(n+1)/2; x++)
        f+="4";
   for(int x=0; x<(n+1)/2; x++)
        f+="7";
        cout<<f<<endl;
        return 0;
}
 rec("");
if(v.size()!=0) cout<<v[0]<<endl;

else{
    for(int x=0; x<(n+1)/2 +1; x++)
        f+="4";
   for(int x=0; x<(n+1)/2 +1; x++)
        f+="7";
        cout<<f<<endl;

}


return 0;
}
