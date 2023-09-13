/*
  The given code solves the 412th problem on leetcode "FizzBuzz"
*/
class Solution {
public:
    vector<string> fizzBuzz(int n) {
        string fizz="Fizz";
        string buzz="Buzz";
        string fizzbuzz="FizzBuzz";
        vector<string>ans;
        for(int i=0;i<n;i++){
            if((i+1)%3==0 && (i+1)%5==0){
                ans.push_back(fizzbuzz);
            }
            else if((i+1)%3==0){
                ans.push_back(fizz);
            }
            else if((i+1)%5==0){
                ans.push_back(buzz);
            }
            else{
                ans.push_back(to_string(i+1));
            }   
        }
        return(ans);
    }
};
