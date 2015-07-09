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

    void init();
	void render();

	void init_buffer();
	void init_shader();
	void init_vertexArray();

private:
	GLuint program;
	GLuint vao, vbo, ibo;
	Shader cubeShader;
};

#endif