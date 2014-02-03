#include<iostream>
using namespace std;

int isLeap(int year){
	int ans=0;
	if((year%4==0 && year%100!=0) || (year%400==0))
		ans=1;
	return ans;
}


int main(){
	cout<<isLeap(1900);
	return 0;
}