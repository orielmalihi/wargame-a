#pragma once

/**
 * Header file for soldier in the game.
 * 
 * @author oriel malihi 
 * @since  2020-05
 */

#include <string>
#include <vector>
#include <stdexcept>

namespace WarGame
{

  class Soldier
  {
  protected:
    uint player;
    uint health;
    uint power;
 

  public:
    Soldier(uint playerID, uint h, uint p = 0) : player(playerID), health(h), power(p) {}
    double distance();
    int getPlayerNum(){ return player;}
    virtual void activate() = 0;
    void move();
  };

} // namespace WarGame