#include<iostream>
using namespace std;
int main() {
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
        int a,b,c;
        cin>>a>>b>>c;
        int x=0;
        while(a!=b){
            if(abs(a-b)>c){
                if(a>b){
                    a-=c;
                    b+=c;
                }
                else{
                    a+=c;
                    b-=c;
                }
                x++;
            }
            else{
                x++;
                break;
            }
           
        }
        cout<<x<<endl;
        }
    return 0;
}
