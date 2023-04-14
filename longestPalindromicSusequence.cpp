class Solution {
public:
// int solve(string &s, int start, int end){
//     if(start == end){
//         return 1;
//     }

//     if(start> end){
//         return 0;
//     }

//     if(s[start] == s[end]){
//         return 2+ solve(s, start+1, end-1);
//     }
//     int leaveleft= solve(s, start+1, end);
//     int leaveright= solve(s, start, end-1);
//     return max(leaveleft, leaveright);

// }

int solveDP(string &s, vector<vector<int>> &dp, int start, int end){
    if(start == end){
        return 1;
    }

    if(start> end){
        return 0;
    }
    if(dp[start][end] != -1){
        return dp[start][end];
    }

    if(s[start] == s[end]){
        return (2+ solveDP(s,dp, start+1, end-1));
    }
    int leaveleft= solveDP(s,dp, start+1, end);
    int leaveright= solveDP(s, dp,start, end-1);
    return dp[start][end]= max(leaveleft, leaveright);

}

    int longestPalindromeSubseq(string s) {

        //recursion- TLE
        // return solve(s,0, s.size()-1);

        //top-down dp
        int n= s.size();
        vector<vector<int>> dp(n, vector<int>(n, -1));
        return solveDP(s,dp,0, s.size()-1);
    }
};