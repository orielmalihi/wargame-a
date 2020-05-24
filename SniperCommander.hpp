#pragma once
/**
 * hpp file for foot-Commander in the game.
 * 
 * @author oriel malihi 
 * @since  2020-05
 */

#include <string>
#include <vector>
#include <stdexcept>
#include "Sniper.hpp"

namespace WarGame
{
    class SniperCommander : public Sniper{

        public:
        SniperCommander(uint player): Sniper(player){
            fullHealth+= 20;
            currentHealth += 20;
            power += 50;
            }
        void activate(int x, int y, Board& board_f) override;
        void printSoldier() override;
    };

} // namespace WarGame