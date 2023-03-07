#include <iostream>
#include <type_traits>
using namespace std;

constexpr auto result = eval<list<while_,
    list<1, str<"">>, lambda<list<lt, arg<0>, 20>>,
    lambda<list<
    list<plus, arg<0>, 1>,
    list<plus, arg<1>,
        list<if_, list<eq, 0, list<modulus, arg<0>, 15>>, str<"FizzBuzz\n">,
        list<if_, list<eq, 0, list<modulus, arg<0>, 3>>, str<"Fizz\n">,
        list<if_, list<eq, 0, list<modulus, arg<0>, 5>>, str<"Buzz\n">,
            list<plus, list<to_string, arg<0>>, str<"\n">>
    >>>>
>>>>;

cout << car<cdr<result>> << endl;