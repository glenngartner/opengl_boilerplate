//
// Created by g on 10/2/17.
//

#include <iostream>
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include "GL_Renderer.h"

void GL_Renderer::setup() {

    std::cout << "Hello, World!" << std::endl;

    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 1);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
//    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);

    this->window = glfwCreateWindow(800, 600, "Learn OpenGL", NULL, NULL);

    if (this->window == nullptr){
        std::cout << "Failed to create GLFW window" << std::endl;
        glfwTerminate();
    }

    glfwMakeContextCurrent(this->window);

    if(!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)){
        std::cout << "Failed to initialize GLAD" << std::endl;
    }
    glViewport(0, 0, 800 ,600);
    glfwSetFramebufferSizeCallback(this->window, GL_Renderer::framebufferSizeCallback);
}

void GL_Renderer::draw() {
    while(!glfwWindowShouldClose(this->window)){
        glfwSwapBuffers(this->window);
        glfwPollEvents();
    }
}

void GL_Renderer::framebufferSizeCallback(GLFWwindow *window, int width, int height) {
    glViewport(0, 0, width, height);
}
