#include<iostream>
using namespace std;

int main(){
    int t,n,m,c;
    cin>>t;
    while(t--){
        cin>>n>>c>>m;
        int tot=0,wrap=0,carry=0;
        tot=n/c;
        wrap=tot;
        while(wrap>=m){
            carry=wrap/m;
            tot+=carry;
            wrap=wrap%m + carry;
        }
        cout<<tot<<"\n";
    }
    return 0;
}