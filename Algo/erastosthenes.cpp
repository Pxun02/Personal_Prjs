#include <iostream>
#include <vector>
using namespace std;

vector<bool> Erastosthenes(int N){
    vector<bool> isprime(N+1, true);
    isprime[1] = false;

    for(int p = 2; p <= N; ++p){
        if(!isprime[p]) continue;

        for(int q = p * 2; q <= N; q += p){
            isprime[q] = false;
        }
    }
    return isprime;
}

int main(){
    vector<bool> isprime = Erastosthenes(1e7);

    for(int v = 2; v <= 1e7; ++v){
        cout << v << ": " 
            << (isprime[v] ? "prime" : "not") << endl;
    }
}