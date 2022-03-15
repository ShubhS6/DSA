//get bit at the position
/*
#include<iostream>
using namespace std;
int getbit(int num,int index){
	return ((num&(1<<index))!=0);
}
int main(){
	cout<<getbit(2,2)<<endl;
	return 0;
}
*/

//set the bit
/*
#include<iostream>
using namespace std;
int setbit(int num,int index){
	return (num|(1<<index));
}

int main(){
	cout<<setbit(5,1)<<endl;
	return 0;
}
*/

//clear bit
/*
#include<iostream>
using namespace std;
int clearbit(int num,int index){
	int comp=(~(1<<index));
	return(num&comp);
}
int main(){
	cout<<clearbit(5,2)<<endl;
	return 0;
}
*/

//update bit
/*
#include<iostream>
using namespace std;
int updatebit(int num,int position,int value){
	int mask=(~(1<<position));
	num=num&mask;
	return(num|(value<<position));
}
int main(){
	cout<<updatebit(5,1,1);
	return 0;
}
*/