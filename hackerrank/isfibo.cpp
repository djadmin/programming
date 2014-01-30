/*Program to find whether a number is fibonacci number or not
  Constraints : N<=10^10
*/

//Alternate solution is to check whether 5N^2+4 or 5N^2-4 is a perfect square or not. If it is then N is fibo

#include<iostream>
#include<vector>
#include<map>
using namespace std;

map<long long,int> isfibo;

int main(){
    int T;
    cin>>T;
    
    long long a=0;
    long long b=1;
    long long c;
    while(true){
        c=a+b;
        if(c>10000000000LL) break;
        isfibo[c]=1;
        a=b;
        b=c;
    }
    long long n;
    while(T--){
        cin>>n;
        if(isfibo[n])
            cout<<"IsFibo"<<"\n";
        else
            cout<<"IsNotFibo"<<"\n";
    }
}
