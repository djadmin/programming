#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    
    int N,K;
    cin>>N>>K;
    long long candies[N];
    for(int i=0;i<N;i++)
        cin>>candies[i];
    sort(candies,candies+N);
    long long min=1000000000,diff=0;
    for(int i=0,j=K-1;j<N;i++,j++){
        diff=candies[j]-candies[i];
        if(diff<min)
            min=diff;
    }
    cout<<min;
    return 0;
}