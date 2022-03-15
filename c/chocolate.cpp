// You have 'N' chocolates and 'K' empty bags. 
// Your task is to pack all the chocolates in these bags such that any bag can have any number of chocolates,
// but no bag remains empty. Please note that all the chocolates are different, 
// they can be numbered from 1 to 'N', but all bags are identical.

#include<iostream>
using namespace std;

int countPack(int N, int K)
{
    
    if(N == 0 or K == 0 or K > N)
    	return 0;
    if(K == 1 or K == N)
    	return 1;

    long long ans = K * countPack(N - 1, K) + countPack(N - 1, K - 1);
    return ans;
}
int main(){
    int n,k;
    cin>>n>>k;
    cout<<countPack(n,k);
    return 0;
}