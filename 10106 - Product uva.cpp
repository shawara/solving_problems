#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    string n1,n2,f;
int h=0;int m[5000];
   while( cin>>n1>>n2){

    vector <int> v1,v2,v3;
     h=0;
    for(int n=0; n<1000; n++)
        m[n]=0;

    int num1, num2;


    for(int x=n1.size()-1; x>-1; x--){
f=n1[x];
istringstream ( f ) >> num1;
  v1.push_back(num1);}

    for(int x=n2.size()-1; x>-1; x--){
f=n2[x];
istringstream ( f ) >> num2;
  v2.push_back(num2);}

int temp=0,s;



for(int i=0; i<v1.size(); i++){
    if(i){v2.insert(v2.begin(),0); v3.clear();}
    temp=0;
    for(int z=0; z<v2.size(); z++){
        s=v1[i]*v2[z]+temp;

        v3.push_back(s%10);

        temp=s/10;

         }
if(temp) v3.push_back(temp);

int s2,temp2=0;

    for(int a=0; a<v3.size(); a++){
        s2=v3[a]+m[a]+temp2;
        m[a]=s2%10;
        temp2=s2/10;

    }
    h=v3.size();
if(temp2) {m[v3.size()]=temp2; h++;}


}

if(n1=="0" || n2=="0") h=1;



   for(int n=h-1; n>=0; n--)
    cout<<m[n];
    cout<<endl;
}

    return 0;
}
