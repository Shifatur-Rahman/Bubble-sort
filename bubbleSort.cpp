#include <iostream>
using namespace std;
int main(){
int arr[] = {22,14,12,18,9};
int i, j;

for(i=0; i<5-1; i++){
	for(j=1; j<5-i; j++){
		if(arr[j-1]>arr[j]){
			swap(arr[j-1], arr[j]);
		}
	}
}

 for(j=0; j<5; j++){
	cout<<arr[j]<<" ";
 }
}
