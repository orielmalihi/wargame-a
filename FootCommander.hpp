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
        protected:

        public:
        FootCommander(uint player): FootSoldier(player){
            fullHealth+= 50;
            currentHealth += 50;
            power += 10;
            }
        void activate() override;
        void printSoldier() override;
    };

} // namespace WarGame