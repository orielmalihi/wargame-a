/**
 * cpp file for foot-Commander in the game.
 * 
 * @author oriel malihi 
 * @since  2020-05
 */

#include <string>
#include <iostream>
#include <vector>
#include <stdexcept>
#include "FootCommander.hpp"
using namespace std;

namespace WarGame
{
    void FootCommander::activate()
    {
        FootSoldier::activate();

        // more..

    }

    void FootCommander::printSoldier()
    {
        cout << "(" << "FC:";
        Soldier::printSoldier();
        cout << ")";
    }

} // namespace WarGame