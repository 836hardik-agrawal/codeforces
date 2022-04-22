#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int
#define iseven % 2 == 0

 void solve(){
 int n,m;
 cin>>n>>m;
 stack<char>st;
 char arr[n][m];
 for(int i=0;i<n;i++){
   for(int j=0;j<m;j++){
     cin>>arr[i][j];
   }
 }
 for(int i=0;i<m;i++){
   for(int j=0;j<n;j++){
     if(j!=n-1){
       if(arr[j][i]=='*'){
          st.push('*');
          arr[j][i]='.';
       }
       if(arr[j][i]=='.') continue;
       if(arr[j][i]=='o') {
         int k=j;
         while(!st.empty()){
           char ch=st.top();
           arr[k-1][i]=ch;
           st.pop();
           k--;
         }
       }
     }
     else{
       
     }

     }
   }
 }
 

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin>>t;
  while(t--){
  solve();
  }
}