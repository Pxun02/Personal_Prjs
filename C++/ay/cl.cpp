#include <iostream>
#include <algorithm>
#include <thread>
#include <future>
using namespace std;

int foo(){ cout << "exectutes foo()\n"; return 3; }

int main(){
    {
        cout << "invokes async(launch::async, foo)" << endl;
        future<int> f = async(launch::async, foo);
        this_thread::sleep_for(chrono::milliseconds(10));
        cout << "mini thread: slept for 10 msec\n";
        int result = f.get();
        cout << "foo() = " << result << endl;
    }
    cout << endl;
    {
        cout << "invokes async(launch::deferred, foo)" << endl;
        future<int> f = async(launch::deferred, foo);
        this_thread::sleep_for(chrono::milliseconds(10));
        cout << "main thread: slept for 10 msec\n";
        int result = f.get();
        cout << "foo() = " << result << endl;
    }
    return 0;
}