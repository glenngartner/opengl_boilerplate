//
// Created by g on 10/2/17.
//
#include "GLFW/glfw3.h"

#ifndef STARTER01_GL_RENDERER_H
#define STARTER01_GL_RENDERER_H


class GL_Renderer {
public:
    GLFWwindow *window;

    void setup();
    void draw();
    static void framebufferSizeCallback(GLFWwindow *window, int width, int height);
};


#endif //STARTER01_GL_RENDERER_H
