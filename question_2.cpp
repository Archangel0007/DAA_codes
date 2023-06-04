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