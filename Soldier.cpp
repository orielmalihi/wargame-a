/**
 * cpp file for soldier in the game.
 * 
 * @author oriel malihi 
 * @since  2020-05
 */

#include <string>
#include <iostream>
#include <vector>
#include <stdexcept>
#include "Soldier.hpp"
using namespace std;

namespace WarGame
{
    void Soldier::move(){


        activate();
    }

    double Soldier::distance()
    {
        return 0.0;
    }

    void Soldier::printSoldier(){
        cout <<  player << "," << health ;
    }

} // namespace WarGame