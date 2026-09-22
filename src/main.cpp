#include "../include/include.h"

int main()
{
    string name;

    cout << "Welcome to Blackjack!" << endl;

    cout << "Enter your name: ";
    getline(cin, name);

    Player player(name, 0);

    cout << "Hi, " << name << endl;
    
    Card card(Suit::Hearts, Rank::Ace);

    cout << card.getValue();
    
    system("pause"); 
    
    return 0;
}