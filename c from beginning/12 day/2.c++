#include<bits/stdc++.h>
using namespace std;

int main(){
   int cnt=0;
   vector<int>v={11,10,10,9};
   int x=10;
   int y=1;
   for(int i=0;i<v.size();i++){
       while(v[i]>0){
           if(v[i]<=x){
    cnt++;
    v[i]=v[i]-x;
           }
           else{
               int t=x-y;
               v[i]=v[i]-t;
               cnt++;
               

           }
       }
   }
   cout<<cnt<<endl;
}
