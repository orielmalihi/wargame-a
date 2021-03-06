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
#include "Paramedic.hpp"


    class ParamedicCommander : public Paramedic{

        public:
        ParamedicCommander(uint player): Paramedic(player){
            fullHealth+= 100;
            currentHealth += 100;
            }
        void activate(int x, int y, WarGame:: Board& board_f) override;
        void printSoldier() override;
    };

