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
#include "FootSoldier.hpp"

namespace WarGame
{
    class FootCommander : public FootSoldier{

        public:
        FootCommander(uint player): FootSoldier(player){
            fullHealth+= 50;
            currentHealth += 50;
            power += 10;
            }
        void activate(int x, int y, Board& board_f) override;
        void printSoldier() override;
    };

} // namespace WarGame