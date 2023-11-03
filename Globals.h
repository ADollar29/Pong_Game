#ifndef GLOBALS_H
#define GLOBALS_H

namespace globals
{
    const int SCREEN_WIDTH = 1280;
    const int SCREEN_HEIGHT = 720;

    const int PLAYER_WIDTH = 10;
    const int PLAYER_HEIGHT = 80;
    const float PLAYER_SPEED = 0.08;

    const int BALL_SIZE = 20;
    const float BALL_SPEED = 0.05;
    const float BALL_ACCELERATION = 1.05;

    const float PLAYER_GAP_PERCENT = 0.05;

    const int FPS = 60;


}

struct Vector2
{
    float x, y;
    Vector2()
    {
        this->x = 0;
        this->y = 0;
    }
};

#endif