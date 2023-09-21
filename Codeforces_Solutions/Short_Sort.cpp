#include <iostream>
#include <string>
using namespace std;
int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string S = "abc";
    string S1= "979899";
    string s,s1,s2,s3;

    cin >> s;

    s1 = to_string(s[1]) + to_string(s[0]) + to_string(s[2]);  
    s2 = to_string(s[0]) + to_string(s[2]) + to_string(s[1]);  
    s3 = to_string(s[2]) + to_string(s[1]) + to_string(s[0]);  
    if (S.compare(s) == 0 || S1.compare(s1) == 0 || S1.compare(s2) == 0 || S1.compare(s3) == 0) {
        cout << "yes"<<endl;
    }
    else {
        cout << "no"<<endl;
    }
    }
    

    return 0;
}
