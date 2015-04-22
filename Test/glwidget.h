#ifndef GLWIDGET_H
#define GLWIDGET_H

#include <QOpenGLWidget>
#include <QOpenGLFunctions_4_3_Core>
#include <QOpenGLVertexArrayObject>
#include <QOpenGLBuffer>
#include <QMatrix4x4>
#include <QTime>

QT_FORWARD_DECLARE_CLASS(QOpenGLShaderProgram)

class GLWidget : public QOpenGLWidget, protected QOpenGLFunctions_4_3_Core
{
	Q_OBJECT

public:
	GLWidget(QWidget *parent = 0);
	~GLWidget();

protected:
	void initializeGL() Q_DECL_OVERRIDE;
	void paintGL() Q_DECL_OVERRIDE;
	void resizeGL(int width, int height) Q_DECL_OVERRIDE;
private:
	QOpenGLVertexArrayObject m_vao;
	QOpenGLBuffer m_logoVbo;
	QOpenGLShaderProgram *m_program;
	int proj_loc;
	int view_loc;
	int model_loc;
	QMatrix4x4 proj;
	QMatrix4x4 camera;
	QMatrix4x4 world;
	QTime time;
	int frameCount;
};

#endif
