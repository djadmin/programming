//MATRIX TRACING

#include<iostream>
using namespace std;

const int size=2e6;
const int mod=1e9+7;
long long fact[size];

long long power(int a,int b){
	long long x=1,y=a;
	while(b>0){
		if(b%2==1){
			x=(x*y);
			if(x>mod) x%=mod;
		}
		y=(y*y);
		if(y>mod) y%=mod;
		b/=2;
	}
	return x;
}
// inverse of a (mod m)= a^m-2 where, a and m are coprimes;

long long modInverse(int a){
	a=a%mod;
	return power(a,mod-2);
}


int main(){
	fact[0]=1;
	for(int i=1;i<(int)size-1;i++){
		fact[i]=(fact[i-1]*i)%mod;
	}

	int T,N,M;
	long long ans;
	cin>>T;
	while(T--){
		cin>>N>>M;
		ans=fact[N+M-2];
		ans*=modInverse(fact[N-1])%mod;
		ans*=modInverse(fact[M-1])%mod;

		cout<<ans<<"\n";
	}
}
