#include<iostream>
#include<String>
using namespace std;

int main(){
    
    int t,answer;
    string a,b;
    cin>>t;
    //t=1;
    while(t--){
        int acount[256]={0};
        int bcount[256]={0};
        cin>>a>>b;
        int asize=(int)a.size();
        int bsize=(int)b.size();
        for(int i=0;i<asize;i++)
            acount[a[i]]++;
        for(int i=0;i<bsize;i++)
            bcount[b[i]]++;
        answer=0;
        //comparing
        for(int i=0;i<256;i++){
            if(acount[i]<bcount[i])
                answer+=acount[i];
            else
                answer+=bcount[i];
        }
        cout<<answer<<"\n";
    }
    
    
    return 0;
}
