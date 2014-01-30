//Program to find power and inverse of large number
// (a^b) mod m

int power(int a,int b,int M){
	int x=1,y=a;
	while(b>0){
		if(b%2==1){
			x=(x*y);
			if(x>M) x%=M;
		}
		y=(y*y);
		if(y>M) y%=M;
		b/=2;
	}
	return x;
}
// inverse of a (mod m)= a^m-2 where, a and m are coprimes;

int modInverse(int a,int m){
	return power(a,m-2,m);
}

