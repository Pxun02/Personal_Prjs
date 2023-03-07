#include <iostream>
using namespace std;

template<unsigned n>
struct Factorial{
    enum{ value = n * Factorial<n-1>::value };
};

template<>
struct Factorial<0>{
    enum{ value = 1 };
};

auto main() -> int{
    cout << Factorial<6>::value << endl;
}