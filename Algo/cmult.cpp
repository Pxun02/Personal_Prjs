#include <iostream>
#include <vector>
using namespace std;

long long GCD(long long x, long long y){
    if(y == 0)  return x;
    else return GCD(y, x % y);
}

long long solve(int N, long long M, vector<long long> &a){
    bool same = true;
    while(a[0] % 2 == 0){
        for(int i = 0; i< N; ++i){
            if(a[i] % 2 != 0)   return 0;
            a[i] /= 2;
        }
        M /= 2;
    }
    for(int i = 0; i < N; ++i)  if(a[i] % 2 == 0)   return 0;

    long long lcm = 1;
    for(int i = 0; i < N; ++i){
        long long g = GCD(lcm, a[i]);
        lcm = lcm / g * a[i];
        if(lcm > M) return 0;
    }
    return (M / lcm + 1) / 2;
}

int main(){
    int N;  long long M;
    cin >> N >> M;
    vector<long long> a(N);

    for(int i = 0; i < N; ++i){
        cin >> a[i], a[i] /= 2;
        cout << solve(N, M, a) << endl;
    }
}