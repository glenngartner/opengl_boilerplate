#include "GL_Renderer.h"


int main() {
    // launch the openGL visuals
//    std::shared_ptr<GL_Renderer> renderer = std::make_shared<GL_Renderer>();
    GL_Renderer *renderer = new GL_Renderer();
    renderer->setup();
    renderer->render();

    return 0;
}

