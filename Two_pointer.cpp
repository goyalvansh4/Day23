#include<iostream>
#include<vector>
using namespace std;

 void print(vector<int> ans){
  
  for(int i=0;i<ans.size();i++){
  cout<<ans[i]<<" ";
  }
  
 }

 
 void Sorted_square(vector<int> v){
 int i=0;
 int n=v.size();
 int j=n-1;
 vector<int>ans(n,-1);
 for(int k=j;k>=0;k--){
 if((v[i]*v[i])>=(v[j]*v[j])){
   ans[k]=v[i]*v[i];
   i++;
   }
   else{
   ans[k]=v[j]*v[j];
   j--;
    }
   }
   print(ans);
 }
  
  
int main(){

vector<int>v={-4,-1,0,3,10};
int n =v.size();

  Sorted_square(v);
  
  }
