#include <iostream>
#include <fstream>
#include "string.h"
#include "vector"
using namespace std;

int main(int argc, char const *argv[])
{
    string test;
    vector<string>name;
    vector<string>score;
    int name_index = 0;
    //int score_index = 0;
    int i=1;
    cout<<"please enter the players and their scores\n";
    while (cin>>test)
    { 
        if(test!="more") // to check if en of input("more") is enterd by the user
        {
            if(i%2 != 0) //to check if it it is an odd input(or name)
            {
                name.push_back(test);
                if (name_index >= 1) //to check atleat 1 value is entered
                {
                    if(name[name_index-1]==name[name_index]) //to check if previous = current name
                    {cout<<"repetition of name:"<<name[name_index]<<endl;
                        break;}
                }
                name_index++;
            }
            
            else if(i%2 == 0) //to check if it is even number input(or score)
            {
                score.push_back(test);
            }
            i++;
        }
        else if (test == "more")
            break;
        
    }
    cout<<"please enter the name of the player for his score\n";
    cin>>test;
    int j = 0;
    int check_flag = -1;
    while(j < score.size())
    {
        if(test == score[j])
        {check_flag = j;}
        j++;
    }
    if (check_flag != -1)
    {
        cout<<name[check_flag]<<endl;
    }
    else if (check_flag == -1)
    {
        cout<<"the entered name is not in the list\n";
    }
    return 0;
}
