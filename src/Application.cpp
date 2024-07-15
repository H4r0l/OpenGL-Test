#include <GLFW/glfw3.h> // This line includes a library for creating windows

int main(void) {
  GLFWwindow *window; // This line declares a variable to store a window pointer

  /* Initialize the library  */
  if (!glfwInit()) {
    // If initialization fails, exit the program with an error code
    return -1;
  }

  /*
      Create a window with dimensions 640x480 and the title "Hello World"
      The last two parameters specify monitor and OpenGL context (which we'll
     learn about later)
  */
  window = glfwCreateWindow(640, 480, "Hello World", NULL, NULL);
  if (!window) {
    // If window creation fails, terminate GLFW and exit with an error code
    glfwTerminate();
    return -1;
  }

  /* Make the window's context current. This is like telling GLFW to use this
   * window */
  glfwMakeContextCurrent(window);

  /* This loop runs until the user closes the window  */
  while (!glfwWindowShouldClose(window)) {
    /* Clear the screen with a specific color (we'll learn more about colors
     * later) */
    glClear(GL_COLOR_BUFFER_BIT);

    /* Swap the front and back buffers. This essentially shows the rendered
     * image on screen */
    glfwSwapBuffers(window);

    /* Check for and process events like key presses or mouse clicks  */
    glfwPollEvents();
  }

  /* Close GLFW after the window is closed */
  glfwTerminate();

  return 0; // Indicate successful program termination
}

