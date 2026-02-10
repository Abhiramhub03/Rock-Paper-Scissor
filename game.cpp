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


int main(){
    char player;
    char computer;
    
    player = getPlayersChoice();
    computer = getComputersChoice();

}