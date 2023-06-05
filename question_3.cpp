#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"21BCE1351 S.Navaneetha Krishnan\n";
    cin>>n;
    int i=0;
    while(i*i<n){
        int k=0;
        while(i*i+k*k<n){
            cout<<"("<<i<<","<<k<<")\n";
            k++; 
        }
        i++;
    }
    return 0;
}