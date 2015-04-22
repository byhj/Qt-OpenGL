#ifndef GRID_H
#define GRID_H

#include <QOpenGLVertexArrayObject>
#include <QOpenGLShaderProgram>
#include <QOpenGLBuffer>
#include <QMatrix4x4>
#include <QVector3D>

#include "mesh.h"

class Grid : public Mesh
{

public:
	Grid();
	~Grid();

public:
	void makeGrid(int size, int step);
	void init();
	void initBuffer();
	void initVertexArray();
	void render();
	void initShader();
	QOpenGLVertexArrayObject vao;
	QOpenGLBuffer vbo;
	QOpenGLShaderProgram *program;
	GLuint proj_loc;
	GLuint view_loc;
	GLuint model_loc;
	QMatrix4x4 proj;
	QMatrix4x4 camera;
	QMatrix4x4 world;
	std::vector<QVector3D> VertexData;
};
#endif