#include "grid.h"
#include <QOpenGLFunctions>

Grid::Grid(): program(0), proj_loc(0), model_loc(0), view_loc(0)
{
}

Grid::~Grid()
{
}

void Grid::init()
{
    initShader();
    initBuffer();
	initVertexArray();
}

void Grid::makeGrid(int size, int step)
{
   for(int i=step; i <= size; i+= step)
   {

	   VertexData.push_back(QVector3D(-size, 0,  i));   // lines parallel to X-axis
	   VertexData.push_back(QVector3D( size, 0,  i));
	   VertexData.push_back(QVector3D(-size, 0, -i));   // lines parallel to X-axis
	   VertexData.push_back(QVector3D( size, 0, -i));

	   VertexData.push_back(QVector3D( i, 0, -size));   // lines parallel to Z-axis
	   VertexData.push_back(QVector3D( i, 0,  size));
	   VertexData.push_back(QVector3D(-i, 0, -size));   // lines parallel to Z-axis
	   VertexData.push_back(QVector3D(-i, 0,  size));
   }
   VertexData.push_back(QVector3D(-size, 0, 0));
   VertexData.push_back(QVector3D( size, 0, 0));
   VertexData.push_back(QVector3D(0, 0, -size));
   VertexData.push_back(QVector3D(0, 0,  size));

}


void Grid::initBuffer()
{
    makeGrid(10, 1);
	vbo = QOpenGLBuffer(QOpenGLBuffer::VertexBuffer);
	vbo.create();
	vbo.bind();
	vbo.allocate(&VertexData[0], 84 * sizeof(QVector3D));
    vbo.release();
}

void Grid::initVertexArray()
{
    vao.create();
    vao.bind();
	vbo.bind();
	QOpenGLFunctions *f = QOpenGLContext::currentContext()->functions();
	f->glEnableVertexAttribArray(0);
	f->glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 0, 0);
	vbo.release();
	vao.release();
}

void Grid::render()
{
    program->bind();
    vao.bind();
	program->setUniformValue(proj_loc, proj);
	program->setUniformValue(view_loc, camera);
	program->setUniformValue(model_loc, world);
    glDrawArrays(GL_LINES, 0, 84);
    vao.release();
    program->release();
}

void Grid::initShader()
{
	program = new QOpenGLShaderProgram;
	program->addShaderFromSourceFile(QOpenGLShader::Vertex,  "grid.vert" );
	program->addShaderFromSourceFile(QOpenGLShader::Fragment, "grid.frag");
	program->bindAttributeLocation("position", 0);
	program->link();
	program->bind();
	proj_loc = program->uniformLocation("proj");
	view_loc = program->uniformLocation("view");
	model_loc = program->uniformLocation("model");
}