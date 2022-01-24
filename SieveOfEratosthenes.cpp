// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    vector<int> sieveOfEratosthenes(int n)
    {
        // Write Your Code here
        vector <int> v;
        int res = 0;
        bool p[n+1];
        for(int i=0; i<=n; i++){
            p[i] = true;
        }
        for(int i=2; i*i <= n ; i++){
            if(p[i]){
                for(int j = i*i; j<=n; j=j+i){
                    p[j] = false;
                }
            }
        }
        for(int i=2; i<=n; i++){
            if(p[i]){
                v.push_back(i);
            }
        }
        return v;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        Solution ob;
        vector<int> primes  = ob.sieveOfEratosthenes(N);
        for(auto prime : primes) {
            cout<< prime <<" ";
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends
