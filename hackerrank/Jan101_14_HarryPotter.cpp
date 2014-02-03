//To find the integral points between two points on a line segment
/*
Consider the points (x1, y1) and (x2, y2). Let a = |x1 - x2|, b = |y1 - y2|. 
Then the number of points with integer coordinates on the segment is gcd(a, b) + 1, 
including points (x1, y1) and (x2, y2).
*/

#include<iostream>
#include<cmath>
using namespace std;

long long gcd(long long a,long long b){
    if(a==0||b==0)
        return (a+b);
    if(a>b)
        return gcd(a%b,b);
    else
        return gcd(b%a,a);
}
int main(){
    
    int T;
    cin>>T;
    while(T--){
        long long x1,y1,x2,y2,m,n;
        cin>>x1>>y1>>x2>>y2;
        m=abs(y2-y1);
        n=abs(x2-x1);

        cout<<gcd(m,n)-1<<"\n";
    }
    
    return 0;
}
