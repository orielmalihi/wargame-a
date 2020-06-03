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



    class Paramedic : public Soldier{
        protected:

        public:
        Paramedic(uint player): Soldier(player, 100){}
        void activate(int x, int y, WarGame:: Board& board_f) override;
        void printSoldier() override;
    };

