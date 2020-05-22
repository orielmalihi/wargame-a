#pragma once
/**
 * hpp file for foot-soldier in the game.
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
    class FootSoldier : public Soldier{
        protected:

        public:
        FootSoldier(uint player): Soldier(player, warrior, 100, 10){}
        void attack() override;
    };

} // namespace WarGame