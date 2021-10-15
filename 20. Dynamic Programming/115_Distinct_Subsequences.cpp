class Solution {
public:
    int numDistinct(string s, string t){
        #define MOD (long) 1e10
        int n = s.length(), m = t.length();
         vector<long> dp(m+1, 0);
         dp[0] = 1;
         for (int j = 1; j <= n; j++){
             for (int i = m; i >= 1; i--){
                 if(s[j-1] == t[i-1]){
                    dp[i] = (dp[i]+dp[i-1])%MOD;   
                 }
             }
         }
        return dp[m];
    }
};
