import java.util.*;
import java.lang.*;
public class ClimbStairsWithVariableLength
{
	public static void main(String[] args) throws Exception {
		Scanner scn = new Scanner(System.in);
		int n = scn.nextInt();
		int a[] = new int[n];
		for(int i=0; i<n; i++){
		    a[i] = scn.nextInt();
		}
		int dp[] = new int[n+1];
		dp[n] = 1;
		for(int i = n-1; i>=0; i--){
		    for(int j = 1; j<=a[i] && i+j < dp.length; j++){
		        dp[i] += dp[i+j];
		    }
		}
		
		System.out.println(dp[0]);
		
	}

}
/**
10
3
3
0
2
1
2
4
2
0
0
5    <- answer

**/
