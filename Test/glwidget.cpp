#include "glwidget.h"
#include <QMouseEvent>
#include <QOpenGLShaderProgram>
#include <QCoreApplication>
#include <QPainter>
#include <math.h>
#include <Qtime>

GLWidget::GLWidget(QWidget *parent)
    : QOpenGLWidget(parent)
{
frameCount = 0;
}

GLWidget::~GLWidget()
{
}


static const GLfloat VertexData[] =
    {
    -0.5f, -0.5f, 0.0f,
    0.5f, -0.5f, 0.0f,
    0.0f,  0.5f, 0.0f,
    };

void GLWidget::initializeGL()
{
    initializeOpenGLFunctions();
    glClearColor(0.0, 0.0, 0.0, 1.0);
    m_program = new QOpenGLShaderProgram;
    m_program->addShaderFromSourceFile(QOpenGLShader::Vertex, "test.vert");
    m_program->addShaderFromSourceFile(QOpenGLShader::Fragment, "test.frag");
    m_program->bindAttributeLocation("position", 0);
    m_program->link();

    m_vao.create();
    m_vao.bind();
    m_logoVbo.create();
    m_logoVbo.bind();
    m_logoVbo.allocate(VertexData, 9 * sizeof(GLfloat));
    glEnableVertexAttribArray(0);
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 0, 0);
    m_vao.release();

}


void GLWidget::paintGL()
{

    glClear(GL_COLOR_BUFFER_BIT);

    m_program->bind();
    m_vao.bind(); //注意状态的清除和保存
    glDrawArrays(GL_TRIANGLES, 0, 3);
    m_vao.release();
    m_program->release();
	float f; 
	if (frameCount == 0) 
		time.start();
	 else 
	   f = time.elapsed() / float(frameCount);
	frameCount++;
	QString fps  = QString::number(f);
    QPainter painter(this);
    painter.setPen(Qt::red);
    painter.drawText(50.0, 50.0, QString("FPS:" + fps));
    painter.drawLine(0.0, 0.0, 50, 50);
	update();
}

void GLWidget::resizeGL(int w, int h)
{
    glViewport(0.0, 0.0, w, h);
}

