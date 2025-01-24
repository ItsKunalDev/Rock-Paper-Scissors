#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

class body
{
public:
    string computer_choices;
    body()
    {
        string choices[] = {"R", "P", "S"};
        int index = rand() % 3;
        computer_choices = choices[index];
        // cout <<" Computer choice :"<< computer_choices<<endl;
       
    }
    void function()
    {
        string human_choices;
        cout << "Choose one: Rock(R), Paper(P), or Scissors(S) :";
        cin >> human_choices;
        if (human_choices == computer_choices)
        {
            cout << "It's a tie!" << endl;
        }
        else if (human_choices == "R" && computer_choices == "S")
        {
            cout << "You win!" << endl;
        }
        else if (human_choices == "P" && computer_choices == "R")
        {
            cout << "You win!" << endl;
        }
        else if (human_choices == "S" && computer_choices == "P")
        {
            cout << "You win!" << endl;
        }
        else
        {
            cout << "Computer wins" << endl;
        }
    }
};

int main()
{
    srand(static_cast<unsigned int>(time(0)));
    cout << "Welcome to Rock Paper Scissors!" << endl;
    cout <<" Some Basic Symbole"<<endl;
    cout <<"S Stand  For Scissor"<<endl;
    cout <<"R Stand  For Rock"<<endl;
    cout <<"P Stand  For Paper"<<endl;
    char play;
    do
    {
        body b;
        b.function();
        cout << "Do you want to play again? (y/n) : ";
        cin >> play;
    } while (play == 'y' || play == 'Y');
    cout << "Thanks for playing!" << endl;
    return 0;
}
