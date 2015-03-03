#include <iostream>
//#include <ExceptionHandling/ExceptionHandling.h>
#include <err.h>
#include <errno.h>
//#include <std_lib_facilities.h>
#include <fstream>
#include "string.h"
#include "vector"
using namespace std;

void error1(string s)
{
    throw out_of_range(s);
}

int main()
try
{
    std::vector<int> v(3);
    int x,i;
    while(cin>>x)v.push_back(x);
    for(i = 0; i<=v.size(); ++i)
        cout<<"v["<<i<<"]=="<<v[i]<<endl;
    //x = v[10];
    char c1 = narrowcast<char>(1066);
    return 0;
}

catch (exception)
{
    cerr<<"exception:out_of_range"<<endl;
    //keep_window_open();
    return 1;
}
