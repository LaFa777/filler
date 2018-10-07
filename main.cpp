#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cctype>
#include <unordered_set>
#include <stdio.h>

#include "include/range.hpp"
#include "include/randomtimestamp.hpp"

#include "utils/timer.hpp"

using namespace std;


int main()
{
    try
      {

    Timer t;

    Range r = Range(2000000, 9000000);
    long long summ = 0;
    t.start();
    for (int i=0; i<80; i++)
        summ += r.next();
    t.stop();
    cout << "range           " << t.passed() << endl;

    auto rt = RandomTimestamp("2014-01-01", "2015-01-01 00:00:01");
    t.start();
    for(int i=0;i<2000000;i++)
        rt.next();
    t.stop();
    cout << "random_timestamp           " << t.passed() << endl;

    cout << "size is " << summ << endl;
    //getchar();
    return 0;

    }
    catch (char const *str)
    {
        cout << str << '\n';
    }
}
