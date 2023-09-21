#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
    int x;
    cin>>x;
    for(int i=0;i<x;i++){
        int n;
        cin>>n;
        vector<int> arr;
        for(int j=0;j<n;j++){
            int temp;
            cin>>temp;
            arr.push_back(temp);
        }
        int min=0;
        for(int j=0;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        arr[min]++;
        int ans=1;
        for(int j=0;j<n;j++){
            ans*=arr[j];
        }
        cout<<ans<<endl;
    }
    return 0;
}
