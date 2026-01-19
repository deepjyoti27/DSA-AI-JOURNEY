//find largest element in array
#include <iostream>
using namespace std;
int main(){
	int n;
	cout << "enter number of element:";
	cin >> n;
	int arr[n];
	cout << "enter element of array:\n";
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	int largest = arr[0];
	for(int i =1;i<n;i++){
		if(arr[i]>largest){
			largest=arr[i];
			
		}
	}
	cout << "larget element is:"<<largest;
	return 0;
}

