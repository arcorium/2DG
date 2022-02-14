#ifndef INC_2DG_GAME_H
#define INC_2DG_GAME_H

//#include "Window.h"
#include <GLFW/glfw3.h>

class Game
{
//    Window m_window;
    float m_dt;

    // Function Callback
    GLFWframebuffersizefun m_frameBufferCallback;

public:
    Game();

    void Start();
private:
    void Cleanup();

    void Run();

    bool Init();
    void Clear();
    void Render();
    void Draw();
    void Update(float dt);
};


#endif //INC_2DG_GAME_H
