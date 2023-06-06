/*
Consider  sorting  (arranging  in  an  increasing  order)nnumbersstored  in  an  array  A,  by  repeatedly  by  swapping  the  
adjacent elements that are not in an increasing order. IfA[i] andA[i+ 1]are  such  thatA[i]> A[i+ 1],  thenA[i]  andA[i+ 1]  shall  
beswapped. Based on the approach described above, write an algo-rithm for arranging the given n numbers in an increasing order of the 
numbers. Compute the best-case running time, worst-caserunning time and the average-case running time of the algorithm. 
Compare this algorithm with that of the insertion-sort algorithmand conclude which algorithm performs better for which type ofinputs etc.
*/
#include <iostream>
#include <limits>
using namespace std;
void bubbleSort(int arr[], int n)
{
	int i, j;
	bool swapped;
	for (i = 0; i < n - 1; i++) {
		swapped = false;
		for (j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
				swapped = true;
			}
		}
		if (swapped == false)
			break;
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
    bubbleSort(arr,n);
    printf("Sorted Array:  ");
    print(arr,n);
    return 0;
}
