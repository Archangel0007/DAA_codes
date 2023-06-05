#include <iostream>
using namespace std;
int comp(int a){
    return(a%10);
}
void selectionSort(int arr[], int n){
	int i, j, min_idx;
	for (i = 0; i < n - 1; i++) {
		min_idx = i;
		for (j = i + 1; j < n; j++) {
			if (comp(arr[j]) > comp(arr[min_idx]))
				min_idx = j;
		}
		if (min_idx != i)
			swap(arr[min_idx], arr[i]);
	}
}
void print(int arr[], int size){
	int i;
	for (i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
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
    selectionSort(arr,n); 
    printf("Sorted Array:  "); 
    print(arr,n); 
    return 0; 
}  