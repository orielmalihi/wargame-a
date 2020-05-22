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
    void Soldier::move()
    {

        activate();
    }

    double Soldier::distance()
    {
        return 0.0;
    }

    void Soldier::printSoldier()
    {
        cout << player << "," << currentHealth;
    }

    void Soldier::heal(uint i)
    {
        currentHealth += i;
        if (currentHealth > fullHealth)
        {
            currentHealth = fullHealth;
        }
    }
    void Soldier::hurm(uint i)
    {
        currentHealth -= i;
        if (currentHealth < 0)
        {
            currentHealth = 0;
        }
    }

} // namespace WarGame