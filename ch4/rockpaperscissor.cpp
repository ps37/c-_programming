#include <iostream>
#include <fstream>
#include "string.h"
#include "vector"
using namespace std;

int main()
{
    vector<int> machine_choice;
    string user_choice;
    cout<<"please give the option numbers between 1 and 3 in your desired order for choosing the randomness of the machine\n";
    int user_sequence=0;
    cin>>user_sequence;
    machine_choice.push_back(user_sequence);
    cin>>user_sequence; machine_choice.push_back(user_sequence);
    cin>>user_sequence; machine_choice.push_back(user_sequence);
    int i = 0;
    while(i<=2)
    {
        cout<<"please enter your choice\n";
        cin>>user_choice;
        int computer_choice = machine_choice[i];
        cout<<computer_choice<<endl;
    switch(machine_choice[i])
    {
    case 1: //rock
    //cout<<computer_choice<<endl;
        if(user_choice == "paper")
        {
            cout<<"rock:";
            cout<<"**YOU WIN!!** :( \n";
        }
        else  if (user_choice == "rock")
        {
            cout<<"rock:";
            cout<<"**DRAW!** :/ \n";
        }
        else  if (user_choice == "scissors")
        {
            cout<<"rock:";
            cout<<"**YOU LOOSE!!** :) \n";
        }
        break;
        
    case 2: //paper
    //cout<<computer_choice<<endl;
        if(user_choice == "scissors")
        {
            cout<<"paper:";
            cout<<"**YOU WIN!!** :( \n";
        }
        else  if (user_choice == "paper")
        {
            cout<<"paper:";
            cout<<"**DRAW!** :/ \n";
        }
        else  if (user_choice == "rock")
        {
            cout<<"paper:";
            cout<<"**YOU LOOSE!!** :) \n";
        }
        break;
        
    case 3: //scissors
    //cout<<computer_choice<<endl;
        if(user_choice == "rock")
        {
            cout<<"scissors:";
            cout<<"**YOU WIN!!** :( \n";
        }
        else  if (user_choice == "scissors")
        {
            cout<<"scissors:";
            cout<<"**DRAW!** :/ \n";
        }
        else  if (user_choice == "paper")
        {
            cout<<"scissors:";
            cout<<"**YOU LOOSE!!** :) \n";
        }
        break;
    }
    i++;
  }
    
}