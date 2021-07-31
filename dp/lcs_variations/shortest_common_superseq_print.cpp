class Solution {
public:
    string shortestCommonSupersequence(string str1, string str2) {
        int m = str1.size();
        int n = str2.size();
        int t[m+1][n+1];
        for(int i=0; i< m+1; ++i) {
            for(int j=0; j< n+1; ++j) {
                if(i == 0 || j == 0) {
                    t[i][j] = 0;
                }
            }
        }
        
        for(int i=1; i<m+1; ++i){
            for(int j=1; j<n+1; ++j){
                if(str1[i-1] == str2[j-1]) {
                    t[i][j] = 1+t[i-1][j-1];
                }
                else {
                    t[i][j] = max(t[i-1][j], t[i][j-1]);
                }
            }
        }
  
        int i=m;
        int j=n;
        string ls = "";
        while(i>0 && j>0) {
            if(str1[i-1] == str2[j-1]) {
                ls.push_back(str1[i-1]);
                --i; --j;
            }
            else if(t[i-1][j] > t[i][j-1] ){
                ls.push_back(str1[i-1]);
                --i;
            }
            else{
                ls.push_back(str2[j-1]);
                --j;
            } 
        }
        while(i>0){
            ls.push_back(str1[--i]);
        }
        while(j>0){
            ls.push_back(str2[--j]);
        }
        reverse(ls.begin(), ls.end());
        return ls;
    }
    
};
