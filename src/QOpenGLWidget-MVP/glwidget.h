#ifndef GLWIDGET_H
#define GLWIDGET_H

#include <QOpenGLWidget>
#include <QOpenGLFunctions>
#include <QOpenGLVertexArrayObject>
#include <QOpenGLBuffer>
#include <QMatrix4x4>
#include <QVector3D>
#include <QTime>
#include "grid.h"

QT_FORWARD_DECLARE_CLASS(QOpenGLShaderProgram)

class GLWidget : public QOpenGLWidget, protected QOpenGLFunctions
{
	Q_OBJECT

public:
	GLWidget(QWidget *parent = 0);
	~GLWidget();

	QSize minimumSizeHint() const Q_DECL_OVERRIDE;
	QSize sizeHint() const Q_DECL_OVERRIDE;

public slots:
		void setXRotation(int angle);
		void setYRotation(int angle);
		void setZRotation(int angle);
		void setPosX(double x);
		void setPosY(double y);
		void setPosZ(double z);
		void setRotateX(double x);
		void setRotateY(double y);
		void setRotateZ(double z);
		void setScaleX(double x);
		void setScaleY(double y);
		void setScaleZ(double z);
		void setCameraX(double x);
		void setCameraY(double y);
		void setCameraZ(double z);
		void cleanup();
		void slider(int t);
	
signals:
		void xRotationChanged(int angle);
		void yRotationChanged(int angle);
		void zRotationChanged(int angle);
		void zoomChanged(float zoom);
		void sliderChanged(double t);
		
protected:
	void initializeGL() Q_DECL_OVERRIDE;
	void paintGL() Q_DECL_OVERRIDE;
	void resizeGL(int width, int height) Q_DECL_OVERRIDE;
	void mousePressEvent(QMouseEvent *event) Q_DECL_OVERRIDE;
	void mouseMoveEvent(QMouseEvent *event) Q_DECL_OVERRIDE;
	void wheelEvent(QWheelEvent *event) Q_DECL_OVERRIDE;

private:
	void setupVertexAttribs();
    void drawAxis(float size);
	bool core;
	int xRot;
	int yRot;
	int zRot;
	QVector3D Pos;
	QVector3D Scale;
	QVector3D Rotate;
	QVector3D cameraPos;
	float Zoom;
	QPoint lastPos;
	QOpenGLVertexArrayObject vao, axis_vao;
	QOpenGLBuffer vbo, axis_vbo, color_vbo;
	QOpenGLBuffer ibo;
	QOpenGLShaderProgram *program, *axis_prog;
	int proj_loc;
	int view_loc;
	int model_loc;
	QMatrix4x4 proj;
	QMatrix4x4 camera;
	QMatrix4x4 world;
	QTime time;
	int frameCount;
	Grid grid;

};

#endif
