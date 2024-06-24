#include <iostream>
#include <string>

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

long long fact(int x)
{
    if (x <= 1) return 1LL;
    return x * fact(x - 1);
}

