#include <iostream>
using namespace std;

char getPlayersChoice(){
    char choice;
    cout<<"********* Rock - Paper - Scisors *********"<<endl;
    cout<<"Let's begin the game"<<endl;
    
    do{
        cout<<"Choose your input from the following"<<endl;
        cout<<"r for Rock"<<endl;
        cout<<"p for paper"<<endl;
        cout<<"s for Scisor"<<endl;
        cin>>choice;
    }while(choice != 'r' && choice != 'p' && choice!= 's');

    return choice;
}



int main(){
    char player;
    char computer;
    
    player = getPlayersChoice();

}