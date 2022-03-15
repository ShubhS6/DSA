#include<iostream>
#include<climits>
using namespace std;
int main(){
	int n;
	int a[n];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int Cmin=INT_MAX;
	int Cmax=INT_MIN;
	for(int i=0;i<n;i++){
		Cmin=min(Cmin,a[i]);
		Cmax=max(Cmax,a[i]);
	}
	cout<<Cmin<<endl;
	cout<<Cmax<<endl;
	return 0;
}
