/**
  Demo for the war-game exercise.

  @author Oz Levi
  @since  2020-05
**/

#include <iostream>
#include "DemoGame.hpp"
#include "Soldier.hpp"
#include "FootCommander.hpp"  

using namespace std;
using namespace WarGame;

int main() {
	WarGame::DemoGame demoGame;
  Soldier*  sp = new FootCommander(1);
  if(dynamic_cast<FootSoldier*>(sp)){
    cout << "can be cast to FS" << endl;
  }

  if(dynamic_cast<FootCommander*>(sp)){
    cout << "can be cast to FC" << endl;
  }
	cout << "The winner is:\n " << demoGame.play() << endl;
    return 0;
}
