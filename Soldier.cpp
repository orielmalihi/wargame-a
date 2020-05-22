/**
 * cpp file for soldier in the game.
 * 
 * @author oriel malihi 
 * @since  2020-05
 */

#include <string>
#include <vector>
#include <stdexcept>
#include "Soldier.hpp"

namespace WarGame
{
    void Soldier::move(){


        activate();
    }

    double Soldier::distance()
    {
        return 0.0;
    }

} // namespace WarGame