/*
  This code solves the 8th problem on the leetcode website "String to Integer (atoi)"
*/

class Solution {
public:

    int myAtoi(string s) {
        long long ans = 0;
        int is_letter = 0;
        int counter = 0;
        bool neg = false;
        int read = 0;
        int flag = 0;
        for (int i=0;i<s.size();i++){
            if(s[i]==' ' && read == 0){
                
            }
            else if(neg == false && read == 0 && (s[i]== '-' || s[i] == '+')){
                if(s[i] == '-'){
                    neg = true;
                }
                else if(s[i] == '+'){
                    
                }
                read = 1; 
            }
            else if(isdigit(s[i])){
                if(is_letter == 0){
                    ans = ans*10+(long long)s[i]-48;
                    if(!neg && ans>pow(2,31)-1){
                        return(pow(2,31)-1);
                    }
                    else if(neg && -1 * ans<-1 * pow(2,31)){
                        return(-1 * pow(2,31));
                    }
                    read = 1;
                }
            }
            else{
                is_letter+=1;
                read = 1;
                break;
            }
        }
        if(!neg && ans>pow(2,31)-1){
            return(pow(2,31));
        }
        else if(neg && -1 * ans<-1 * pow(2,31)){
            return(-1 * pow(2,31));
        }
        else if(neg){
            return(-1*ans);
        }
        return(ans);
    }
};
