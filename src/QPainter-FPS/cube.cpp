#include "Cube.h"

static const GLfloat VertexData[] = 
{  
	-0.90, -0.90,
	0.85, -0.90,
	-0.90,  0.85,

	0.90, -0.85,
	0.90,  0.90,
	-0.85,  0.90,
};	

static const GLsizei VertexSize = sizeof(VertexData);


Cube::Cube()
{
}

Cube::~Cube()
{
}

void Cube::init()
{
	init_buffer();
	init_vertexArray();
	init_shader();
}


void Cube::init_buffer()
{
	glGenBuffers(1, &vbo);
	glBindBuffer(GL_ARRAY_BUFFER, vbo);
	glBufferData(GL_ARRAY_BUFFER, sizeof(VertexData), VertexData, GL_STATIC_DRAW);
	glBindBuffer(GL_ARRAY_BUFFER, 0);
}

void Cube::init_vertexArray()
{
	glGenVertexArrays(1, &vao);
	glBindVertexArray(vao);

	glBindBuffer(GL_ARRAY_BUFFER, vbo);
	glEnableVertexAttribArray(0);
	glVertexAttribPointer(0, 2, GL_FLOAT, GL_FALSE, 0, 0);
    
	glBindVertexArray(0);
	glBindBuffer(GL_ARRAY_BUFFER, 0);
	glDisableVertexAttribArray(0);
}

void Cube::init_shader()
{
	cubeShader.init();
	cubeShader.attach(GL_VERTEX_SHADER, "cube.vert");
	cubeShader.attach(GL_FRAGMENT_SHADER, "cube.frag");
	cubeShader.link();
	program = cubeShader.GetProgram();
}

void Cube::render()
{
	glUseProgram(program);
	glBindVertexArray(vao);  

    glDrawArrays(GL_TRIANGLES, 0, 6);

	glUseProgram(0);
	glBindVertexArray(0);
}
