#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<=n-1;i++){
        int sum=0;
        for(int j=i;j<=n-1;j++){
            sum=sum+a[j];
            cout<<sum;
        }
    }
    return 0;
}