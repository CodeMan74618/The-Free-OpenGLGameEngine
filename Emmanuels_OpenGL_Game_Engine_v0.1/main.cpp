#include<iostream>
#include<glad/glad.h>
#include<GLFW/glfw3.h>

using namespace std;


int main()
{
    /****************************************************************/
    /* The glfw function picks and finds OpenGL version for the user*/
    /*USE VERSION 3.3                                               */
    /****************************************************************/
    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);


    /***********************************************************************************/
    /*This glfw function creates a window functions that holds all the glfw window data*/
    /*like window size and  name                                                       */
    /***********************************************************************************/
    GLFWwindow* window = glfwCreateWindow(800, 600, "Emmanuel JB's OpenGL Game Engine v0.1", NULL ,NULL);
    if (window == NULL)
    {
        cout<< "Failed to create glfw window" <<endl;
        glfwTerminate();
        return -1;
    }
    glfwMakeContextCurrent(window);


    /*************************************************************************/
    /*initialize glad before we can call any OpenGL functions                */
    /*AKA loads OpenGL correct function based on which OS we're compiling for*/
    /*************************************************************************/
    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
    {
        cout<< "Failed to initialize GLAD" <<endl;
        return -1;
    }


    /********************************************************/
    /*Tels OpenGL where in the view port we want to render  */
    /*(Top left corner X, Top left corner y, size x, size y)*/
    /********************************************************/
    glViewport(0, 0, 800, 600);


    /********************************************************************************/
    /*Whenever the window changes in size,                                          */
    /* this function is called by glfw to fill the proper argument for you process  */
    /********************************************************************************/
void framebuffer_size_callback(GLFWwindow* window, int width, int height);


    /*****************************************************/
    /*                                                   */
    /*                                                   */
    /*****************************************************/
    glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);


    /*****************************************************/
    /*                                                   */
    /*                                                   */
    /*****************************************************/
    while(!glfwWindowShouldClose(window))
    {
    glfwSwapBuffers(window);
    glfwPollEvents();
    }


    /*****************************************************/
    /*                                                   */
    /*                                                   */
    /*****************************************************/
    glfwTerminate();

    return 0;
}


    /******************************************************************************/
    /*Whenever the window changes in size,                                        */
    /* this function is called by glfw to fill the proper argument for you process*/
    /******************************************************************************/
void framebuffer_size_callback(GLFWwindow* window, int width, int height)
{
   glViewport(0, 0, 800, 600);
}


