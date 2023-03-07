#include <iostream>
#include <vector>
#include <utility>
#include <iterator>
#include <initializer_list>
#include <memory>
#include <functional>
#include <algorithm>
#include <stack>
#include <queue>
#include <type_traits>
#include <cassert>
#include <thread>
#include <random>
#include <stdexcept>
#include <future>
#include <new>
#include <atomic>
#include <tuple>
#include <compare>
#include <set>
#include <stdio.h>
using namespace std;

#define stringer( x ) printf( #x "\n")
int main() {
    stringer( In quotes in the printf function call);
    stringer( "in quotes when printed to the screen" );
    stringer( "This: \" prints an escaped double quote" );
}