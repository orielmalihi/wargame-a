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
#include <cmath>
#include "Soldier.hpp"
using namespace std;



    double Soldier::distance(int x1, int y1, int x2, int y2)
    {
        return sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
    }

    void Soldier::printSoldier()
    {
        cout << player << "," << currentHealth;
    }
    
    // returns true if the soldier is healed
    bool Soldier::heal()
    {
        if (currentHealth != 0 && currentHealth!=fullHealth)
        {
            currentHealth = fullHealth;
            return true;
        }
        return false;
    }
    void Soldier::hurm(uint i)
    {
        currentHealth -= i;
        if (currentHealth < 0)
        {
            currentHealth = 0;
        }
    }

