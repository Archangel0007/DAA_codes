/*
A nonnegative integer n is given. Design an algorithm to countall  the  solutions  of  the  inequalityx2+y2< n,  wherexandyare  non-negative
integers.  The  pseudocode  should  not  use  anyoperations  with  real  numbers  (square  roots,  etc.).  Analyse  thepseudocode designed 
by you.
*/
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
