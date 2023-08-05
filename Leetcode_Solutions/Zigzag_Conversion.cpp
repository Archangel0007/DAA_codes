/*
  this code solves the 6th problem of leet code "Zig Zag Conversion"
*/
class Solution {
    public: string convert(string s, int n) {
        if (n == 1) {
            return (s);
        }
        string ans = "";
        int x = (n - 1) * 2;
        int counter = 0;
        int pointer;
        for (int i = 0; i < n; i++) {
            pointer = i;
            if (i == 0 || i == n - 1) {
                while (pointer < s.length()){
                    ans += s[pointer];
                    pointer += x;
                }
            } 
            else {
                int temp = pointer + x - i * 2;
                ans+=s[pointer];
                while (pointer < s.length() && temp<s.length()) {
                    ans += s[temp];
                    ans += s[pointer+x];
                    pointer += x;
                    temp = pointer + x - i * 2;
                }
            }
            //cout << ans << endl;
        }
        return (ans);
    }
};
