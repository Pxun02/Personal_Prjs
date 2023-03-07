#include <iostream>
#include <string>
using namespace std;

int r[100];

int factorisation(int n){
    r[0] = 1;
    for(int i=1;i<=n;i++){
        r[i] = i * r[i-1];
    }
    return r[n];
}

int main(){
    int m;
    cin >> m;
    cout << factorisation(m) << endl;
}

