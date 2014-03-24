//
//  Mario.h
//  donkeykong
//
//  Created by Jacob Gavin on 3/20/14.
//  Copyright (c) 2014 Jacob Gavin. All rights reserved.
//  Class for mario object

#ifndef MARIO_H
#define MARIO_H

#include <SDL/SDL.h>
#include <string>
using namespace std;

class Mario{
    
public:
    Mario();//Constructor
    
    void display(SDL_Surface*, SDL_Surface*, int, int, int, int, int, int);//Displays mario
    void updateAnimation();//Increments frame
    void move();
    
    //Get functions
    SDL_Surface* getMarioSurface();
    int getspritesheetx();
    int getspritesheety();
    int getheight();
    int getwidth();
    int getxpos();
    int getypos();
    int getcurrentframe();
    
    void setAnimation();//Sets animation parameters according to animation state
    
    void Transparent(SDL_Surface* Surf_Dest, int R, int G, int B);//Makes pink background of mario image transparent
    
private:
    int spritesheetx;
    int spritesheety;
    int height;
    int width;
    double xpos;
    double ypos;
    double vx;
    double vy;
    double ay;
    int currentState;
    int currentFrame;
    int maxFrames;
    SDL_Surface* marioSurface;
    
};

#endif