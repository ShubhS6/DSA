/*#include<iostream>
using namespace std;
int bsearch(int arr[],int n,int key){
	int start=0;
	int end=n;
	while(start<=end){
		int mid=(start+end)/2;
		if(arr[mid]==key){
			return mid;
		}
		else if(arr[mid]>key){
			end=mid-1;
		}
		else{
			end=mid+1;
		}
	}
	return -1;
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int key;
	cin>>key;
	cout<<bsearch(arr,n,key)<<endl;
	return 0;
}
*/








/*
#include<iostream>
using namespace std;
int linearsearch(int a[],int n ,int key){
	for(int i=0;i<n;i++){
		if(a[i]==key){
			return i;
		}
	}
	return -1;
}
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int key;
	cin>>key;
	cout<<linearsearch(a,n,key)<<endl;
	return 0;
}
*/

#include<iostream>
using namespace std;
int binarysearch(int a[], int n,int key){
	int start=0;
	int end=n;
	while(start<=end){
		int mid=(start+end)/2;
		if(a[mid]==key){
			return mid;
		}
		else if(a[mid]>key){
			end=mid-1;
		}
		else{
			start=mid+1;
		}
	}
	return -1;
}
int main(){
	int n;
	cin>>n;
	int a[n];
	for (int i=0;i<n;i++){
		cin>>a[i];
	}
	int key;
	cin>>key;
	cout<<binarysearch(a,n,key)<<endl;
	return 0;
}