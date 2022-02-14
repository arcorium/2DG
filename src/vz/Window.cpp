#include "vzpch.h"
#include "Window.h"

namespace vz {

    Window::Window(const std::string &title, const Vec2& dimension, const Vec2 &position)
            : m_title(title), m_dimension(dimension), m_position(position) {
        Init();
    }

    Window::~Window() {
        glfwDestroyWindow(m_window);
    }

    void Window::Show() {
        glfwShowWindow(m_window);
    }

    GLFWwindow *Window::Get() const {
        return m_window;
    }

    bool Window::Init() {

        VZ_ASSERT(glfwInit(), "Failed to init GLFW");

        glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
        glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 6);
        glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
        glfwWindowHint(GLFW_VISIBLE, 0);

        m_window = glfwCreateWindow(m_dimension.x, m_dimension.y, m_title.c_str(), nullptr, nullptr);

        glfwMakeContextCurrent(m_window);

        VZ_ASSERT(gladLoadGLLoader(reinterpret_cast<GLADloadproc>(glfwGetProcAddress)), "Failed to instantiate GLAD");

        // Init GLFW Callback
        InitCallback();

        return true;
    }

    void Window::InitCallback() {

    glfwSetWindowUserPointer(m_window, this);

    glfwSetWindowSizeCallback(m_window, [](GLFWwindow *window, int width, int height) -> void {
        auto& data = *reinterpret_cast<decltype(this)>(glfwGetWindowUserPointer(window));
        data.m_dimension.x = width;
        data.m_dimension.y = height;
        glViewport(0, 0, width, height);
        });

    }

    void Window::SetCallback() {
        glfwSetFramebufferSizeCallback(m_window, m_frameBufferCallback);
    }
}