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
        string choices[] = {"Rock", "Paper", "Scissor"};
        int index = rand() % 3;
        computer_choices = choices[index];
        cout << computer_choices << endl;
    }
    void function()
    {
        string human_choices;
        cout << "Choose one: Rock, Paper, or Scissors :";
        cin >> human_choices;
        if (human_choices == computer_choices)
        {
            cout << "It's a tie!" << endl;
        }
        else if (human_choices == "Rock" && computer_choices == "Scissors")
        {
            cout << "You win!" << endl;
        }
        else if (human_choices == "Paper" && computer_choices == "Rock")
        {
            cout << "You win!" << endl;
        }
        else if (human_choices == "Scissors" && computer_choices == "Paper")
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
    // srand(static_cast<unsigned int>(time(0)));
    cout << "Welcome to Rock-Paper-Scissors!" << endl;
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
