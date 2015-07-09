#ifndef CUBE_H
#define CUBE_H

#include "shader.h"
#include <gl/glew.h>

class Cube
{

public:
	Cube();
	~Cube();

public:

	void init_buffer();
	void init();
	void init_shader();
	void init_vertexArray();
	void render();

private:
	GLuint program;
	GLuint vao, vbo, ibo;
	Shader cubeShader;
};

#endif