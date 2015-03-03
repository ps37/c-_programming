#include <iostream>
#include <fstream>
#include "string.h"
#include "vector"
using namespace std;

int main(int argc, char const *argv[])
{
    std::vector<int> primes(4);
    std::vector<int> vector_of_primes;
    int prime_num;
    int devisor, devident; 
    int remaind;
    primes[0] = 2; primes[1] = 3; primes[2] = 5; primes[3] = 7;
    //start choosing the numbers and devide them with the entired primes
    for (int i = 2; i <=200; ++i)
    {
        int j = 0;
        int prime_flag = 0;
        while(primes[j] < i)
        {
            remaind = i % primes[j];
            if(remaind == 0)
                {prime_flag++;} //cout<<"**"<<prime_flag<<"**"<<endl;}
            j++;
            if(j==primes.size()) break;
        }
        
        if (prime_flag == 0)
        {
            vector_of_primes.push_back(i);
        }
        
    }
    cout<<"the prime numbers between 1 and 100 are:\n";
    int k = 0;
    while(k<vector_of_primes.size())
    {
        cout<<vector_of_primes[k]<<"  ";
        k++;
    }
    return 0;
}