#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    unsigned seed = time(0);
    srand(seed);
    int computer = rand()%3;
    
    int user;
    cout << "\t Enter your choice of rock or paper or scissor: \t\n\n";
    cout << "\t LEGEND \t\t\n\n";
    cout << "\t Paper beats Rock \n\t Rock beats Scissor \n\t Scissor beats Paper \n\t\n\n";
    cout << "\n Rock: \t\t Enter 1 \n Paper: \t Enter 2 \n Scissor: \t Enter 0 \n\n\n";
    cin >> user;
    cout << "\n\n";
    switch(computer)
          {
              case 0: if (user == 0)
              {
                  cout << "Computer chooses Scissor. \n";
                  cout << "Game drawn. \n";
                  break;
              }
              else if (user == 1)
              {
                cout << "Computer chooses Scissor. \n";
                cout << "Scissor beats Paper. \n";
                cout << "You lost. \n";
                break;
              }
              case 1: if (user == 0)
              {
                cout << "Computer chooses Rock. \n";
                cout << "You lost. \n";
                break;
              }
              else if (user == 1)
              {
                cout << "Computer chooses Rock. \n";
                cout << "Draw. \n";
                cout << "! \n";
                break;
              }
              else if (user == 2)
              {
                cout << "Computer chooses Rock. \n";
                cout << "Paper beats Rock. \n";
                cout << "You won! \n";
                break;
              }
              case 2: if (user == 0)
              {
                cout << "Computer chooses Paper. \n";
                cout << "You won! \n";
                break;
              }
              else if (user == 1)
              {
                cout << "Computer chooses Paper. \n";
                cout << "Paper beats Rock. \n";
                cout << "You lost. \n";
                break;
              }
              else if (user == 2)
              {
                cout << "Computer chooses Paper. \n";
                cout << "Draw. \n";
                break;
              }
              default : cout << "Invalid input. Please choose again from the options. \n";
              
          } 
    return 0;
}












