//
//  main.h
//  own_strtok
//
//  Created by Prudhvi Chandra Simhadri on 2/15/15.
//  Copyright (c) 2015 Prudhvi Chandra Simhadri. All rights reserved.
//
//#include "std_lib_facilities.h"
#include <iostream>
#include <fstream>
#include "string.h"
#include "vector"
using namespace std;

void error(string error_msg)
//function for taking the error msg and trowing the error with that msg
{
    throw runtime_error(error_msg);
}

vector<int> bullsNcows_count(string& input, string& string_vector)
//compare the input with the vector string
{
int i=0;
int bull=0;
int cow=0;
vector<int> bullsNcows;
bullsNcows.clear();

    
for(int k = 0; k<input.size(); ++k)
//k is the iterator for the input string
{
    i = 0;
    while(i < string_vector.size())
    {//i is the iterator for the vector string
        //cerr<<input[k]<<"=="<<string_vector[i]<<endl;
        if(input[k] == string_vector[i])
        {
            //cerr<<input[k]<<"=="<<string_vector[i]<<endl;
            if(k == i)
                bull++;
            else
                cow++;
            break;
        }
        i++;
    }
}
    bullsNcows.push_back(bull);
    //bullsNcows[0] = bull;
    //cerr<<"the value of bull is "<<bullsNcows[0]<<endl;
    bullsNcows.push_back(cow);
    return bullsNcows;
}

int main()
try
{
    cout<<"welcome to bulls and cows arena\n";
    vector<string>int_4;
    string vector_input;
    void error(string);
    string input;
    int test_count = 1;
    
    cout<<"please enter the 4 values into vector";
    while(test_count <= 4)
    //take the input integers for the vector of 4 ints
    {
        cin>>vector_input;
        //cerr<<"i'm in vector input loop\n";
        int_4.push_back(vector_input);
        vector_input.clear();
        test_count++;
    }
    
    if(int_4.size()!=4)
    //check for count of 4 and give error if else
    {
        cerr<<"i am in vector size match\n";
        error("error:please enter only 4 numbers");
    }
    
    string string_vector = int_4[0] + int_4[1] + int_4[2] + int_4[3]; //conatenate the vector
    
    //cerr<<"the size of string_vector is"<<string_vector.size()<<endl;
    cout << "pleas enter the number you want to play with" << endl;
    //getchar();
    cin >> input;
    
    if( input.size() != string_vector.size())
    //check for size match!
    //call error function with the msg "not matching size"
    {
        cerr<<"i am in string and vector_string size match\n";
        error("error:the size does not match");
    }
    
    vector<int> bullsNcows;
    bullsNcows = bullsNcows_count(input, string_vector);
    
    while(bullsNcows[0]<=4)
    {
    if(bullsNcows[0]==4)
    {
        cout<<bullsNcows[0]<<" bulls & "<<bullsNcows[1]<<" cows"<<endl;
        cout<<"congtarulations!! you got it right\n";
        break;
    }
    else if (bullsNcows[0] != 4)
    {
        cout<<bullsNcows[0]<<" bulls & "<<bullsNcows[1]<<" cows"<<endl;
        cout<<"try again!! with new number\n";
        input.clear();
        cin>>input;
        bullsNcows = bullsNcows_count(input, string_vector);
    }
    }
    bullsNcows.clear();
    return 0;
}

catch (exception& e)
    {
    cerr<<"error:"<<e.what()<<'\n';
    //keep_window_open();
    return 1;
}

catch (...)
    {
        cerr<<"Oops: unknown exception!"<<'\n';
        //keep_window_open();
        return 2;
    }
