#include <iostream> 
#include <string> 
using namespace std;

string player_RPS(int choice) {
  
string RPS_player; 

  if (choice == 1){ 
    RPS_player = "paper";
  } else if (choice == 2) {
       RPS_player = "scissors";
  } else if (choice == 3) {
       RPS_player = "rock"; 
  } else {
       RPS_player = "That is not an option!!!";
  }

return RPS_player; 
}

void RPS_comparison(string a, string b){

  if (a == "rock" && b == "scissors"){ 
    cout << "You win!" << endl; 
  } else if (a == "scissors" && b == "paper") {
     cout << "You win!" << endl; 
  } else if (a == "paper" && b == "rock") {
     cout << "You win!" << endl; 
  } else if (a == b){
     cout << "It's a tie!" << endl; 
  } else {
    cout << "You lose chump!" << endl; 
  }

}

int main() {

  int player_choice;
  string choice; 

  cout << "Player 1 choose a number between 1 and 3" << endl; 
  cin >> player_choice;
  
  cout << "Player 1 chose " <<  player_RPS(player_choice) << endl;
  
  string computer_selection;
  srand(time(0));
  int comp_selection = rand() % 3 + 1;
  if (comp_selection == 1){
    choice = "paper";
  } else if (comp_selection == 2){
    choice = "scissors";
  } else if (comp_selection == 3){
    choice = "rock";
  }
  computer_selection = choice; 

  cout << "The computer chose " << computer_selection << endl; 

  RPS_comparison(player_RPS(player_choice), computer_selection);
  
return 0; 

}
