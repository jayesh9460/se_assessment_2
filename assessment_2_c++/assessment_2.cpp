#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void displayMenu()
{
  cout << "**************************************" << endl;
  cout << "           Rock Paper Scissors       " << endl;
  cout << "**************************************" << endl;
  cout << "Enter 1 for Rock" << endl;
  cout << "Enter 2 for Paper" << endl;
  cout << "Enter 3 for Scissors" << endl;
  cout << "Enter 4 to Exit the Game" << endl;
}

int computerChoice()
{
  return (rand() % 3) + 1;
}

void determineWinner(int userChoice, int compChoice)
{
  cout << "You chose: ";
  if (userChoice == 1)
    cout << "Rock" << endl;
  else if (userChoice == 2)
    cout << "Paper" << endl;
  else
    cout << "Scissors" << endl;

  cout << "Computer chose: ";
  if (compChoice == 1)
    cout << "Rock" << endl;
  else if (compChoice == 2)
    cout << "Paper" << endl;
  else
    cout << "Scissors" << endl;

  if (userChoice == compChoice)
  {
    cout << "It's a tie!" << endl;
  }
  else if ((userChoice == 1 && compChoice == 3) || (userChoice == 2 && compChoice == 1) || (userChoice == 3 && compChoice == 2))
  {
    cout << "You win!" << endl;
  }
  else
  {
    cout << "Computer wins!" << endl;
  }
}

int main()
{
  srand(time(0));

  int userChoice, compChoice;
  bool gameRunning = true;

  while (gameRunning)
  {
    displayMenu();

    cout << "Enter your choice: ";
    cin >> userChoice;
    if (userChoice == 4)
    {
      cout << "Exiting the game. Goodbye!" << endl;
      gameRunning = false;
    }
    else if (userChoice >= 1 && userChoice <= 3)
    {
      compChoice = computerChoice();
      determineWinner(userChoice, compChoice);
    }
    else
    {
      cout << "Invalid choice. Please try again." << endl;
    }

    cout << endl;
  }

  return 0;
}
