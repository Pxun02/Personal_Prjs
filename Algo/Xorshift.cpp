#include <iostream>
using namespace std;

unsigned int randInt() {
    static unsigned int tx = 123456789, ty = 362436069, tz = 521288629, tw = 88675123;
    unsigned int tt = (tx^(tx<<11));
    tx = ty; ty = tz; tz = tw;
    return ( tw=(tw^(tw>>19))^(tt^(tt>>8)) );
}

int main() {
    int count[6] = {0};

    for(int i=0;i<100000;++i){
        int rng = randInt() % 6;
        count[rng]++;
    }

    for(int i=0;i<6;++i){
        cout << i+1 << ": " << count[i] <<" times" << endl;
    }
    return 0;
}