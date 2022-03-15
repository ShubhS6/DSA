/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    } 
    int limit;
    cin>>limit;
    int max=a[0];
    int i=0;
    while(i<=limit){
        if(a[i]>max){
            max=a[i];
        }
        i++;
    }
    cout<<max;
    return 0;
}
*/
#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int mx=INT_MIN;
    int limit;
    for(int i=0;i<=limit;i++){
        mx=max(a[i],mx);
    }
    cout<<mx;
    return 0;
}