//
// Created by AICDG on 2017/8/8.
//

#include "BulletOpenGLApplication.h"
#include "FreeGLUTCallbacks.h"

int main(int argc, char** argv) {
    BulletOpenGLApplication demo;
    return glutmain(argc, argv, 800, 600, "bullet and opengl", &demo);
}