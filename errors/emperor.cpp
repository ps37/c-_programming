#include <iostream>
#include <fstream>
#include "string.h"
#include "vector"
using namespace std;

int main()
{
    int present_number=2^2;
    cout<<"please enter the number of squares in the chess board\n";
    int number_of_squares=0;
    cin>>number_of_squares;
    double sum = 0;
    for(int i =1; i<=number_of_squares; i++)
    {
        sum = sum + present_number;
        present_number = present_number^2;
    }
    cout<<"so the total rice grains asked for is:"<<sum<<endl;
    return 0;
}
