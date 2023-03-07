#include <iostream>
using namespace std;

long long GCD(long long a, long long b){
    if(b==0)    return a;
    else return GCD(b, a % b);
}

long long extGCD(long long a, long long b, long long &x, long long &y){
    if(b==0){
        x = 1;
        y = 0;
        return a;
    }
    long long d = extGCD(b, a % b, y, x);
    y -= a / b * x;
    return d;
}

int main(){
    long long N; cin >> N;
    long long g = 0;
    for(int i=0;i<N;++i){
        long long a; cin >> a;
        g = GCD(g, a);
    }
    cout << g << endl;
}