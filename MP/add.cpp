#include <iostream>
using namespace  std;

template<int X, int Y>
struct Add{
    enum{
        result = X + Y
    };
};

int main(){
    cout << Add<2, 4>::result << endl;
}