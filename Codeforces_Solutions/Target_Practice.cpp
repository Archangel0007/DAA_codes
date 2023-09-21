#include <iostream>
using namespace std;
void solve(){
    int ans=0;
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            char c;
            cin>>c;
            if((i==0 || i==9) && c=='X'){
                ans+=1;
            }
            else if((i==1 || i==8) && c=='X'){
                if(j==0 || j==9){
                    ans+=1;
                }
                else{
                    ans+=2;
                }
            }
            else if((i==2 || i==7) && c=='X'){
                if(j==0 || j==9){
                    ans+=1;
                }
                else if(j==1 || j==8){
                    ans+=2;
                }
                else{
                    ans+=3;
                }
            }
            else if((i==3 || i==6) && c=='X'){
                if(j==0 || j==9){
                    ans+=1;
                }
                else if(j==1 || j==8){
                    ans+=2;
                }
                else if(j==2 || j==7){
                    ans+=3;
                }
                else{
                    ans+=4;
                }
            }
            else if((i==4 || i==5) && c=='X'){
                if(j==0 || j==9){
                    ans+=1;
                }
                else if(j==1 || j==8){
                    ans+=2;
                }
                else if(j==2 || j==7){
                    ans+=3;
                }
                else if(j==3 || j==6){
                    ans+=4;
                }
                else{
                    ans+=5;
                }
            }
        }
    }
    cout<<ans<<endl;
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        solve();
    }
    return 0;
}
