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
    uint fullHealth;
    int currentHealth;
    uint power;
 

  public:
    Soldier(uint playerID, uint h, uint p = 0) : player(playerID), fullHealth(h), currentHealth(h), power(p) {}
    double distance();
    void heal(uint i);
    void hurm(uint i);
    int getPlayerNum(){ return player;}
    virtual void activate() = 0;
    virtual void printSoldier();
    void move();
  };

} // namespace WarGame