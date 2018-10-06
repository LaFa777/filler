#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cctype>
#include <unordered_set>
#include <stdio.h>

using namespace std;


int main()
{
    unordered_set<time_t> s;
    for (int i=2000000000; i<2010000000; i++)
        s.insert(i);
    cout << "size is " << s.size() << endl;
    getchar();
    cout << "Hello World!" << endl;
    return 0;
}
