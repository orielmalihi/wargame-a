/**
 * cpp file for foot-soldier in the game.
 * 
 * @author oriel malihi 
 * @since  2020-05
 */

#include <string>
#include <vector>
#include <stdexcept>
#include <iostream>
#include "FootSoldier.hpp"
using namespace std;


namespace WarGame
{
    void FootSoldier::activate() 
    {

    }

    void FootSoldier::printSoldier(){
        cout << "(" << "FS:" ;
        Soldier::printSoldier();
        cout << ")";

    }

} // namespace WarGame