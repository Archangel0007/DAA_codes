#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for (int i=0;i<n;i++){
        int a=0,b=0;
        for(int i=0;i<5;i++){
            char x;
            cin>>x;
            if(x=='A'){a++;}
            else{b++;}
        }
        if(a>b){
            cout<<"A\n";
        }
        else{
            cout<<"B\n";
        }
    }
    return 0;
}
