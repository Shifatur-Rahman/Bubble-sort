#include <iostream>
using namespace std;
int main(){

int arr[5] = {9,8,6,1,7};
int i,j,temp,result;

for(i=0; i<5; i++){
	for(j=i+1; j<5; j++){
	 if(arr[i]>arr[j]){
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}
}
}

for(i=0; i<5; i++){
	cout<<arr[i]<<" ";
}




}
