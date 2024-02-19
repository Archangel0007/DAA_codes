#include <iostream>
#include <vector>
using namespace std;
int main() {
    int q;
    cin>>q;
    for(int w=0;w<q;w++){
        int n;
        cin>>n;
        vector<vector<int>> mat;
        vector<int>checker;
        checker.clear();
        for(int i=0;i<n;i++){
            vector<int>temp;
            int count=0;
            for(int i=0;i<n;i++){
                int x;
                cin>>x;
                if(x==1){count++;}
                temp.push_back(x);
            }    
            checker.push_back(count);
        }
        int flag=0;
        for(int i=0;i<checker.size()-1;i++){
            if(checker[i]==checker[i+1] && checker[i]!=0){
                cout<<"SQUARE\n";
                flag++;
                break;
            }
        }
        if(flag==0){cout<<"TRIANGLE\n";}
        
    }
    return 0;
}
