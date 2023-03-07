#include <iostream>
#include <type_traits>
#include <tuple>
#include <utility>
#include <initializer_list>
using namespace std;

template<typename T>
typename enable_if<is_integral<T>::value>::type
func(T t){
    cout << t << " is an integer" << endl;
}

template<typename T>
typename enable_if<is_integral<T>::value, int>::type
plus10(T t){
    return t + 10;
}

template<typename T>
enable_if_t<is_integral<T>::value, T>
twice(T t){
    return t + t;
}

int main(){
    cout << plus10(10) << endl;
    cout << twice(15) << endl;
}