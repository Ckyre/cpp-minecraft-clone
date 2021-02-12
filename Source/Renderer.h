#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>
using namespace std;
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <glm.hpp>
#include <ext/matrix_transform.hpp> // glm::translate, glm::rotate, glm::scale
#include <ext/matrix_clip_space.hpp> // glm::perspective
using namespace glm;
#include "Buffer.h";
#include "BufferLayout.h";
#include "Texture.h";
#pragma once

class Renderer
{
	public:
		enum ShaderType { VERTEX, FRAGMENT };

		static GLFWwindow* window;
		static GLuint program;
		static int windowWidth, windowHeight;

		static void CreateWindow(int width, int height, const char* title);
		static void Start();
		static void Update();
		static void End();
		static void DrawCube(vec3 position);
		static GLuint LoadShaders(const char* vertexShaderPath, const char* fragmentShaderPath);
		static mat4 CalculateMVP(vec3 modelPosition);
	private:
		static int drawBufferSize;
		static GLuint CreateShader(ShaderType type, const char* path);
};

