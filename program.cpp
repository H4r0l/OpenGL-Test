#include <GLFW/glfw3.h>
#include <iostream>
#include <vulkan/vulkan.h>

#define WIDTH 640
#define HEIGHT 480

int main() {
  // Initialize GLFW
  glfwInit();
  if (!glfwInit()) {
    std::cerr << "Failed to initialize GLFW!" << std::endl;
    return -1;
  }
  // Check for Vulkan Support
  if (!glfwVulkanSupported()) {
    std::cout << "Vulkan is not supported on this system " << std::endl;
    glfwTerminate();
    return -1;
  }

  glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
  // This will create a GLFW window
  GLFWwindow *window =
      glfwCreateWindow(WIDTH, HEIGHT, "Vulkan window", nullptr, nullptr);
  if (window == nullptr) {
    std::cout << "Failed to create GLFW window!" << std::endl;
    glfwTerminate();
    return -1;
  }
  // Vulkan Initialization (Placeholder for future steps)
  // ... ( Code to initialize vulkan instance, device...etc)

  // Main app Loop:
  while (!glfwWindowShouldClose(window)) {
    glfwPollEvents();
    // Update and render

    glfwSwapBuffers(window);
  }
  // Cleanup:

  glfwDestroyWindow(window);
  glfwTerminate();

  return 0;
}
