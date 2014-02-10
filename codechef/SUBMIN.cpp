#include<iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    int num[n];
    int DP[n][n];
    for(int i=0;i<n;i++)
        cin>>num[i];
    int min;
    for(int i=0;i<n;i++){
        min=num[i];
        for(int j=i;j<n;j++){
            if(num[j]<min)
                min=num[j];
            DP[i][j]=min;
        }
    }
    int q,k;
    cin>>q;
    while(q--){
        cin>>k;
        int sum=0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(DP[i][j]==k)
                    sum++;
            }
        
        }
        cout<<sum<<"\n";

    }
    
    
}