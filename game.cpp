#include <iostream>
#include <ctime>
using namespace std;

char getPlayersChoice(){
    char choice;
    cout<<"********* Rock - Paper - Scissors *********"<<endl;
    cout<<"Let's begin the game"<<endl;
    
    do{
        cout<<"Choose your input from the following"<<endl;
        cout<<"r for Rock"<<endl;
        cout<<"p for paper"<<endl;
        cout<<"s for Scissor"<<endl;
        cin>>choice;
    }while(choice != 'r' && choice != 'p' && choice!= 's');

    return choice;
}

char getComputersChoice(){
    srand(time(0));
    int num = rand()%3+1;
    switch(num){
        case 1:
            return 'r';
        case 2:
            return 'p';
        case 3:
            return 's';
    }
    return 0;
}

string showPlayersChoice(char player){
    switch(player){
        case 'r':
            return "Rock";
        case 'p':
            return "Paper";
        case 's':
            return "Scissor";
    }
    return 0;
}

string showComputersChoice(char computer){
    switch(computer){
        case 'r':
            return "Rock";
        case 'p':
            return "Paper";
        case 's':
            return "Scissor";
    }
    return 0;
}

void showResults(char player, char computer){
    cout<<"Yours Choice : " <<showPlayersChoice(player)<<endl;
    cout<<"Computers Choice : " <<showComputersChoice(computer)<<endl;
    cout<<"Try again"<<endl;
}

int main(){
    char player;
    char computer;
    
    player = getPlayersChoice();
    computer = getComputersChoice();
    showResults(player, computer);
}