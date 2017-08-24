#include <iostream>

using namespace std;

int money, card1, card2, dec, dcard1, dcard2;
char one, two, three, four, five, six, seven, eight, nine, ten, jack, queen, king, ace;
int printData(){
  cout<<"Money: "<<money<<"\n";
  cout<<"Card 1: "<<card1<<"\nCard 2: "<<card2<<"\n";
}

int getCards(){
 return rand() % 13 + 1; 
}
int main() {
  game = true;
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
