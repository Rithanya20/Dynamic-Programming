#include<bits/stdc++.h>
using namespace std;
    int main() {
        int n;
        int c;
      cin>>n,c;
      int m[n][c];
      for(int i=0; i<n; i++){
      for(int j=0; j<c;j++){
             cin>>m[i][j];
      }
      }
        int dp[n][c];
        for(int i = 0; i<n ; i++){
            for(int j=0; j<c; j++){
                if(i== 0 && j == 0){
                    dp[i][j] = m[i][j];
                }
                else if(i == 0 && j!=0){
                    dp[i][j] = dp[i][j-1] + m[i][j];
                }
                else if(j == 0 && i!=0){
                    dp[i][j] = dp[i-1][j]+m[i][j];
                }
                else{
                    dp[i][j] = min(dp[i][j-1], dp[i-1][j]) + m[i][j];  
                }
            }
        }
        return dp[n-1][c-1];
    }
