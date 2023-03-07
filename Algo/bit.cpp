#include <iostream>
#include <vector>
using namespace std;

/* bit全探索
int main(){
    int n = 5;
    for(int bit=0;bit<(1<<n);++bit){
        vector<int> S;
        for(int i=0;i<n;++i){
            if(bit&(1<<i)){
                S.push_back(i);
            }
        }

        cout << bit << ": {";
        for(int i=0;i<(int)S.size();++i){
            cout << S[i] << " ";
        }
        cout << "}" << endl;
    }
}
*/

/* next_combination */
int next_combination(int sub){
    int x = sub & -sub, y = sub + x;
    return (((sub & ~y) / x) >> 1) | y;
}

int main(){
    int n = 5;
    int k = 3;

    int bit = (1<<k)-1;
    for(;bit<(1<<n);bit=next_combination(bit)){
        vector<int> S;
        for(int i=0;i<n;++i){
            if(bit & (1<<i)){
                S.push_back(i);
            }
        }
        cout << bit << ": {";
        for(int i=0;i<(int)S.size();++i){
            cout << S[i] << " ";
        }
        cout << "}" << endl;
    }
}