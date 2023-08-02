/*
  The code below solves the 204th problem on leetcode "Count Primes"
*/
using namespace std;
class Solution {
public:
    void func(int arr[],int x,int n){
        int i=2;
        while(x*i<n){
            arr[x*i]=0;
            i++;
        }
    }
    int countPrimes(int n) {
        if(n==0){return 0;}
        int arr[n];
        for(int i=0;i<n;i++){
            arr[i]=1;
        }
        for(int i=2;i<n;i++){
            if(arr[i]==1){
                func(arr,i,n);
            }
        }
        int counter=0;
        for(int i=2;i<n;i++){
            
            if(arr[i]==1){
                counter++;
            }
        }
        return(counter);
    }
};
