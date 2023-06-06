/*
Consider arrangingnnumbers stored in an array A, by first find-ing  the  smallest  element  of  A  and  exchanging  it  with  the  
ele-ment  inA[1].  Then  find  the  second  smallest  element  ofAandexchange it withA[2] continue in this manner for the first (n−1)
2 elements. Based on the approach described above, write an algo-rithm for arranging the givennnumbers in an increasing orderof the 
numbers. Compute the best-case running time, worst-caserunning time and the average-case running time of the algorithm.
Compare this algorithm with that of the insertion-sort algortim,based on the respectiveT(n). 
Based on your analysis, concludewhich algorithm performs better for which type of inputs etc.
*/
#include <iostream>
#include <limits>
using namespace std;
void selection_sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[min]>arr[j]){
                min=j;
            }
        }
        if(min!=i){
            int temp=arr[i];
            arr[i]=arr[min];
            arr[min]=temp;
        }
    }
}
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int main() {
    cout<<"S.Navaneetha Krishnan 21BCE1351\n";
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    printf("Original Array:");
    print(arr,n);
    selection_sort(arr,n);
    printf("Sorted Array:  ");
    print(arr,n);
    return 0;
}
