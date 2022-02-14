//
// Created by vizharc on 03/02/22.
//

#include <vzpch.h>
#include <glad/glad.h>
#include <GLFW/glfw3.h>

int main()
{

    if (!glfwInit())
        std::cout << "Failed to Init GLFW" << std::endl;

    GLFWwindow* win = glfwCreateWindow(1024, 728, "TEST", nullptr, nullptr);

    glfwMakeContextCurrent(win);

    if (!gladLoadGLLoader(reinterpret_cast<GLADloadproc>(glfwGetProcAddress)))
        std::cout << "Failed to Init GLAD" << std::endl;

    std::cout << "TEST" << std::endl;
    return 0;
}