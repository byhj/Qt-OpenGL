#include "glwidget.h"
#include <QMouseEvent>
#include <math.h>
#include <iostream>
#include <vector>
#include <glm/glm.hpp>
#include <QPainter>
#include <gl/glew.h>

GLWidget::GLWidget(QWidget *parent)
	: QOpenGLWidget(parent)
{

}

GLWidget::~GLWidget()
{

}


QSize GLWidget::minimumSizeHint() const
{
	return QSize(50, 50);
}

QSize GLWidget::sizeHint() const
{
	return QSize(400, 400);
}

static void qNormalizeAngle(int &angle)
{
	while (angle < 0)
		angle += 360 * 16;
	while (angle > 360 * 16)
		angle -= 360 * 16;
}

void GLWidget::initializeGL()
{
	GLenum result = glewInit();
	if (result != GLEW_OK)
		std::cout << "Init glew error" << std::endl;

	cube.init();
	glClearColor(0.2, 0.3, 0.4, 1.0);

}


void GLWidget::paintGL()
{
	glClear(GL_COLOR_BUFFER_BIT);

	cube.render();

}

void GLWidget::resizeGL(int w, int h)
{
   glViewport(0, 0, w, h);
}

void GLWidget::mousePressEvent(QMouseEvent *event)
{

}

void GLWidget::mouseMoveEvent(QMouseEvent *event)
{

}

void GLWidget::wheelEvent(QWheelEvent *event)
{	


}