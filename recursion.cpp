#include <iostream>
#include <string>
#include <boost/multiprecision/cpp_int.hpp>

using std::cout;
using std::string;
using std::endl;


void countdown(int i)
{
    cout << i << '\t';
    if (i <= 1)
        return;
    countdown(i - 1);
}

void greet2(string name)
{
    cout << "how are you, " << name << "?" << endl;
}

void bye()
{
    cout << "ok bye!" << endl;
}


void greet(string name)
{
    cout << "hello, " << name << "!" << endl;;
    greet2(name);
    cout << "getting ready to say bye..." << endl;
    bye();
}

boost::multiprecision::int1024_t fact(int x)
{
    if (x <= 1) return 1ull;
    return x * fact(x - 1);
}

