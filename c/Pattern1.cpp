#include<iostream>
using namespace std;
int main(){
	int n,m,i,j;
	cout<<"Enter the row and col";
	cin>>n>>m;
	for(i=1;i<=n;i++){
		for (j=1;j<=m;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	
	
	return 0;
}
