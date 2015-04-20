#ifndef GLWIDGET_H
#define GLWIDGET_H

#include <QOpenGLWidget>
#include <QOpenGLFunctions_4_3_Core>
#include <QOpenGLVertexArrayObject>
#include <QOpenGLBuffer>
#include <QMatrix4x4>

QT_FORWARD_DECLARE_CLASS(QOpenGLShaderProgram)

class GLWidget : public QOpenGLWidget, protected QOpenGLFunctions_4_3_Core
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
		void setZoom(float zoom);
		void cleanup();

signals:
		void xRotationChanged(int angle);
		void yRotationChanged(int angle);
		void zRotationChanged(int angle);
		void zoomChanged(float zoom);

protected:
	void initializeGL() Q_DECL_OVERRIDE;
	void paintGL() Q_DECL_OVERRIDE;
	void resizeGL(int width, int height) Q_DECL_OVERRIDE;
	void mousePressEvent(QMouseEvent *event) Q_DECL_OVERRIDE;
	void mouseMoveEvent(QMouseEvent *event) Q_DECL_OVERRIDE;
	void wheelEvent(QWheelEvent *event) Q_DECL_OVERRIDE;

private:
	void setupVertexAttribs();
	void drawGrid(int size, int step);
    void drawAxis(float size);
	bool core;
	int xRot;
	int yRot;
	int zRot;
	float Zoom;
	QPoint lastPos;
	QOpenGLVertexArrayObject vao, axis_vao, grid_vao;
	QOpenGLBuffer vbo, axis_vbo, color_vbo, grid_vbo;
	QOpenGLBuffer ibo;
	QOpenGLShaderProgram *program, *axis_prog, *grid_prog;
	int proj_loc;
	int view_loc;
	int model_loc;
	QMatrix4x4 proj;
	QMatrix4x4 camera;
	QMatrix4x4 world;
};

#endif
