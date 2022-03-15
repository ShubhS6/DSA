#include<iostream>
using namespace std;
int bTod(int n){
	int ans=0;
	int y;
	int x=1;
	while(n>0){
		y=n%10;
		ans=ans+x*y;
		x=x*2;
		n=n/10;
	}
	return ans;
}
int main(){
	int n;
	cin>>n;
	cout<<bTod(n)<<endl;
	return 0;
}
