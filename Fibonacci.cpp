/*Real world : tiles arrangement
Given a “2 x n” board and tiles of size “2 x 1”, count the number of ways to tile the given board using the 2 x 1 tiles. A tile can either be placed horizontally i.e., as a 1 x 2 tile or vertically i.e., as 2 x 1 tile. 

Examples: 

Input: n = 4

Output: 5

Explanation:

For a 2 x 4 board, there are 5 ways

All 4 vertical (1 way)
All 4 horizontal (1 way)
2 vertical and 2 horizontal (3 ways)
Input: n = 3

Output: 3

Explanation:

We need 3 tiles to tile the board of size  2 x 3.

We can tile the board using following ways

Place all 3 tiles vertically.
Place 1 tile vertically and remaining 2 tiles horizontally (2 ways)
Implementation – 

Let “count(n)” be the count of ways to place tiles on a “2 x n” grid, we have following two ways to place first tile. 
1) If we place first tile vertically, the problem reduces to “count(n-1)” 
2) If we place first tile horizontally, we have to place second tile also horizontally. So the problem reduces to “count(n-2)” 
Therefore, count(n) can be written as below. 

   count(n) = n if n = 1 or n = 2
   count(n) = count(n-1) + count(n-2)
   */

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int dp[n+1];
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 2;
    if(n>2){
       for(int i=3; i<=n; i++){
           dp[i] = dp[i-1] + dp[i-2];
       } 
    }
    cout<<dp[n];
}

4
3
