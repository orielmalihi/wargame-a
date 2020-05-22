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
#include "Soldier.hpp"

namespace WarGame
{
    class FootCommander : public Soldier{
        protected:

        public:
        FootCommander(uint player): Soldier(player, 150, 20){}
        void activate() override;
    };

} // namespace WarGame