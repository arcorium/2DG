#ifndef INC_2DG_WINDOW_H
#define INC_2DG_WINDOW_H

#include <glad/glad.h>
#include <GLFW/glfw3.h>

namespace vz {
    class Window {
    public:
        Window(const std::string &title, const Vec2& dimension, const Vec2 &position);
        ~Window();

        void Show();
        void SetCallback();
        [[nodiscard]] GLFWwindow *Get() const;

    private:
        bool Init();
        void InitCallback();

    private:
        GLFWwindow *m_window;
        std::string m_title;
        Vec2 m_dimension;
        Vec2 m_position;
    };
}

#endif //INC_2DG_WINDOW_H
