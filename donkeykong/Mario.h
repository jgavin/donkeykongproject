//
//  Mario.h
//  donkeykong
//
//  Created by Jacob Gavin on 3/20/14.
//  Copyright (c) 2014 Jacob Gavin. All rights reserved.
//  Class for mario object

#ifndef MARIO_H
#define MARIO_H

#include "Object.h"
#include <SDL/SDL.h>
#include <string>
using namespace std;

class Mario : public Object{
    
public:
    Mario();//Default Constructor
    
    void move();
    
    
    virtual void setAnimation();//Sets animation parameters according to animation state
    
    void handle_input(SDL_Event);
    
    int onLadder;//1 if onLadder, zero if not
    int rdirection;//0 if running left, 1 if right
    int hasHammer;//1 if has the hammer, 0 if not
    int hadHammer;//1 if he has already had the hammer, 0 if not
    int hammerStartTime;//variable used to set time when hammer is obtained


    int checkForHammer();//Function to check to see if mario is in front of hammer
    void determineAnimation();//Function to determine animation based on mario's variables
    
private:
    
    
    
};

#endif
