#include <iostream>
#include <vector>
using namespace std;

int main()
{

  vector<int> v1;
   int temp =0,s,n;

  while (cin>>n){
        v1.push_back(1);
for(int x=1; x<=n; x++){
        for(int z=0; z<v1.size(); z++){
            s=v1[z]*x+temp;
            v1[z]=s%10;
            temp=s/10;
            }

while(temp>0){
    v1.push_back(temp%10);
    temp/=10;

}
}
cout<<n<<"!\n";
while(!v1.empty()){
    cout<<v1.back();
   v1.pop_back();
}
cout<<endl;
  }
    return 0;
}
