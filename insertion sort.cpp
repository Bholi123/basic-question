// insertion sort
#include<iostream>
using namespace std;
 -
int main(){
	int size;
	cout<<"Enter the  size of array:"<<endl;
	cin>>size;
	int arr[size];
	cout<<"Enter the element of array:"<<endl;
	for(int index=0;index<size;index++){
		cin>>arr[index];
	}
	int key,currIndex;

	for(int index=1;index<size;index++){
		currIndex=index;
		key=arr[currIndex];
		while(currIndex>0 && arr[currIndex-1]>key){
			arr[currIndex]=arr[currIndex-1];
			currIndex--;
		}
		arr[currIndex]=key;
		
	}
	
	
	cout<<"ELEMENTS OF THE ARRAY AFTER SORTING THROUGH INSERTION SORT:"<<endl;
	//displaying the element of the sported array 
	for(int index=0;index<size;index++){
		
		cout<<arr[index]<<endl;
	}
	return 0;
    }