#include <iostream>

using namespace std;

bool game = true;
int money, card1, card2, dec, dcard1, dcard2, call, bet;
char one, two, three, four, five, six, seven, eight, nine, ten, jack, queen, king, ace;
int printData(){
  cout<<"Money: "<<money<<"\n";
  cout<<"Card 1: "<<card1<<"\nCard 2: "<<card2<<"\n";
}

int getCards(){
 return rand() % 13 + 1; 
}

int game(){
  cout<<"Call(1) Bet(2) or Fold(3)\n";
  switch(){
    case 1:  money -= call;break;
    case 2: cout<<"How much\n";cin >> bet; money -=bet; call = bet;break;
    case 3: exit; 
  }
}
int main() {
  srand(time(0));
  card1 = getCards();
  card2 = getCards();
  printData();
  cout<<"Dealer Draws\n";
  dcard1 = getCards();
  dcard2 = getCards();
  while(game = true){
    
  }
  
  
}
