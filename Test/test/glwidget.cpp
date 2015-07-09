#include "cube.h"


#include <QMouseEvent>
#include <math.h>
#include <iostream>
#include <vector>
#include <glm/glm.hpp>
#include <QPainter>
#include <QOpenGLShaderProgram>
#include <QCoreApplication>
#include "glwidget.h"


GLWidget::GLWidget(QWidget *parent)
	: QOpenGLWidget(parent)
{
}

GLWidget::~GLWidget()
{
	makeCurrent();
    doneCurrent();
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

static const GLfloat VertexData[] = {
	-0.1f, -0.1f, -0.1f,
	-0.1f,  0.1f, -0.1f,
	0.1f, -0.1f, -0.1f,
	0.1f,  0.1f, -0.1f,
	0.1f, -0.1f,  0.1f,
	0.1f,  0.1f,  0.1f,
	-0.1f, -0.1f,  0.1f,
	-0.1f,  0.1f,  0.1f,
};

static const GLushort ElementData[] =
{
	0, 1, 2,
	2, 1, 3,
	2, 3, 4,
	4, 3, 5,

	4, 5, 6,
	6, 5, 7,
	6, 7, 0,
	0, 7, 1,

	6, 0, 2,
	2, 4, 6,
	7, 5, 3,
	7, 3, 1
};

Cube cube;

void GLWidget::initializeGL()
{ 
	glewInit();

	cube.init();
}


void GLWidget::paintGL()
{
	glClearColor(0.2, 0.3, 0.4, 1.0);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	
	cube.render();

	static bool startFlag = true;
	if (startFlag)
	{
		time.start();
		startFlag = false;
	}
	static int frame = 0;
	static float lastTime = 0.0f;
	float currentTime = time.elapsed()/ 1000.0f;
	static int cnt = 0;
	std::cout << currentTime << std::endl;

	if (currentTime - lastTime > 1.0f )
	{
		lastTime = currentTime;
		cnt = frame;
		frame = 0;
	}
	else
	{
		++frame;
	}

	QPainter painter(this);
	QString fps  = QString::number(cnt);
	painter.setPen(Qt::red);
	painter.drawText(50.0, 50.0, QString("FPS:" + fps));

	update();
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