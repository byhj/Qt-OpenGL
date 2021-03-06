#include "glwidget.h"
#include <QMouseEvent>
#include <QOpenGLShaderProgram>
#include <QCoreApplication>
#include <math.h>
#include <iostream>
#include <vector>
#include <glm/glm.hpp>
#include <QPainter>

static const GLfloat VertexData[] = {
	-1.0f, -1.0f, -1.0f,
	-1.0f,  1.0f, -1.0f,
	1.0f, -1.0f, -1.0f,
	1.0f,  1.0f, -1.0f,
	1.0f, -1.0f,  1.0f,
	1.0f,  1.0f,  1.0f,
	-1.0f, -1.0f,  1.0f,
	-1.0f,  1.0f,  1.0f,
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

GLWidget::GLWidget(QWidget *parent)
	: QOpenGLWidget(parent),
	xRot(0),
	yRot(0),
	zRot(0),
	Pos(0.0, 0.0, 0.0),
	Scale(1.0, 1.0, 1.0),
	Rotate(0.0, 0.0, 0.0),
	cameraPos(0.0, -3.0, -30.0),
	Zoom(-30.0),
	program(0),
	axis_prog(0)
{
    frameCount = 0;

}

GLWidget::~GLWidget()
{
	cleanup();
}
void GLWidget::slider(int t)
{
     float x = (float)t;
     Pos.setX(x);
	 double a = double(x);
	 emit sliderChanged(a);
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

void GLWidget::setXRotation(int angle)
{
	qNormalizeAngle(angle);
	if (angle != xRot) {
		xRot = angle;
		emit xRotationChanged(angle);
		update();
	}
}

void GLWidget::setYRotation(int angle)
{
	qNormalizeAngle(angle);
	if (angle != yRot) 
	{
		yRot = angle;
		emit yRotationChanged(angle);
		update();
	}
}

void GLWidget::setZRotation(int angle)
{
	qNormalizeAngle(angle);
	if (angle != zRot) 
	{
		zRot = angle;
		emit zRotationChanged(angle);
		update();
	}
}


void GLWidget::setPosX(double x)
{
  Pos.setX(x);
}

void GLWidget::setPosY(double y)
{
   Pos.setY(y);
}

void GLWidget::setPosZ(double z)
{
   Pos.setZ(z);
}

void GLWidget::setRotateX(double x)
{
	Rotate.setX(x);
}

void GLWidget::setRotateY(double y)
{
	Rotate.setY(y);
}

void GLWidget::setRotateZ(double z)
{
	Rotate.setZ(z);
}

void GLWidget::setScaleX(double x)
{
   Scale.setX(x);
}

void GLWidget::setScaleY(double y)
{
	Scale.setY(y);
}
void GLWidget::setScaleZ(double z)
{
	Scale.setZ(z);
}

void GLWidget::setCameraX(double x)
{
	cameraPos.setX(x);
}
void GLWidget::setCameraY(double y)
{
   cameraPos.setY(y);
}
void GLWidget::setCameraZ(double z)
{
	cameraPos.setZ(z);
}
void GLWidget::cleanup()
{
	makeCurrent();
	vbo.destroy();
	delete program;
	program = 0;
	doneCurrent();
}
GLfloat size = 3.0f;


static const GLfloat AxisData[] ={
	0.0f, 0.0f, 0.0f,  
	size, 0.0f, 0.0f,  
	0.0f, 0.0f, 0.0f,  
	0.0f, size, 0.0f,  
	0.0f, 0.0f, 0.0f,
	0.0f, 0.0f, size
};

GLfloat color[] = {
	1.0f, 0.0f, 0.0f,
	1.0f, 0.0f, 0.0f,
	0.0f, 1.0f, 0.0f,
	0.0f, 1.0f, 0.0f,
	0.0f, 0.0f, 1.0f,
	0.0f, 0.0f, 1.0f
};

struct Vertex {
	float x, y, z;
	Vertex(){};
	Vertex(float xa, float ya, float za):x(xa), y(ya), z(za){}
};

void GLWidget::initializeGL()
{

  //  connect(context(), &QOpenGLContext::aboutToBeDestroyed, this, &GLWidget::cleanup);

	initializeOpenGLFunctions();

	grid.init();
	program = new QOpenGLShaderProgram;
	program->addShaderFromSourceFile(QOpenGLShader::Vertex,  "triangle.vert" );
	program->addShaderFromSourceFile(QOpenGLShader::Fragment, "triangle.frag");
	program->bindAttributeLocation("vertex", 0);
	program->link();
	program->bind();
	proj_loc = program->uniformLocation("proj");
	view_loc = program->uniformLocation("view");
	model_loc = program->uniformLocation("model");
	vao.create();
	vao.bind();

	// Setup our vertex bufer object.
	vbo = QOpenGLBuffer(QOpenGLBuffer::VertexBuffer);
	vbo.create();
	vbo.bind();
	vbo.allocate(VertexData, sizeof(VertexData));

	ibo = QOpenGLBuffer(QOpenGLBuffer::IndexBuffer);
	ibo.create();
	ibo.bind();
	ibo.allocate(ElementData, sizeof(ElementData));
	QOpenGLFunctions *f = QOpenGLContext::currentContext()->functions();
	f->glEnableVertexAttribArray(0);
	f->glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 0, 0);
	vao.release();
	program->release();

	axis_prog = new QOpenGLShaderProgram;
	axis_prog->addShaderFromSourceFile(QOpenGLShader::Vertex,  "axis.vert" );
	axis_prog->addShaderFromSourceFile(QOpenGLShader::Fragment, "axis.frag");
	axis_prog->bindAttributeLocation("position", 0);
	axis_prog->bindAttributeLocation("color", 1);
	axis_prog->link();
	axis_prog->bind();

	axis_vao.create();
	axis_vao.bind();
	// Setup our vertex bufer object.
	axis_vbo = QOpenGLBuffer(QOpenGLBuffer::VertexBuffer);
	axis_vbo.create();
	axis_vbo.bind();
	axis_vbo.allocate(AxisData, sizeof(AxisData));

	f->glEnableVertexAttribArray(0);
	f->glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 0, 0);
	axis_vbo.release();

	color_vbo = QOpenGLBuffer(QOpenGLBuffer::VertexBuffer);
	color_vbo.create();
	color_vbo.bind();
	color_vbo.allocate(color, sizeof(color));
	f->glEnableVertexAttribArray(1);
	f->glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 0, 0);
	axis_vao.release();
	axis_prog->release();

}


void GLWidget::paintGL()
{


	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glEnable(GL_DEPTH_TEST);
	glEnable(GL_CULL_FACE);

	camera.setToIdentity();
	camera.translate(cameraPos.x(), cameraPos.y(), cameraPos.z());

	world.setToIdentity();
	world.rotate(180.0f - (xRot / 16.0f), 1, 0, 0);
	world.rotate(yRot / 16.0f, 0, 1, 0);
	world.rotate(zRot / 16.0f, 0, 0, 1);
	world.translate(Pos.x(), Pos.y(), Pos.z());
	world.rotate(Rotate.x(), Rotate.y(), Rotate.z());
	world.scale(Scale.x(), Scale.y(), Scale.z());

	glLineWidth(1.0f);
	program->bind();
	vao.bind();
	program->setUniformValue(proj_loc, proj);
	program->setUniformValue(view_loc, camera);
	program->setUniformValue(model_loc, world);
	glDrawElements(GL_TRIANGLES, 36, GL_UNSIGNED_SHORT, 0);
	vao.release();
	program->release();

	glLineWidth(3.0f);
	axis_prog->bind();
	axis_vao.bind();
	axis_prog->setUniformValue(axis_prog->uniformLocation("proj"), proj);
	axis_prog->setUniformValue(axis_prog->uniformLocation("view"), camera);
	axis_prog->setUniformValue(axis_prog->uniformLocation("model"), world);
	glDrawArrays(GL_LINES, 0, 6);
	axis_vao.release();
	axis_prog->release();

	grid.proj = proj;
	grid.camera = camera;
	grid.world = world;

	grid.render();

	float f; 
	if (frameCount == 0) 
		time.start();
	else 
		f = time.elapsed() / float(frameCount);

	QPainter painter(this);
	frameCount++;
	QString fps  = QString::number(f);
	painter.setPen(Qt::red);
	painter.drawText(50.0, 50.0, QString("FPS:" + fps));

	update();
}

void GLWidget::resizeGL(int w, int h)
{
	proj.setToIdentity();
	proj.perspective(45.0f, GLfloat(w) / h, 0.01f, 100.0f);
}

void GLWidget::mousePressEvent(QMouseEvent *event)
{
	lastPos = event->pos();
}

void GLWidget::mouseMoveEvent(QMouseEvent *event)
{
	int dx = event->x() - lastPos.x();
	int dy = event->y() - lastPos.y();

	if (event->buttons() & Qt::LeftButton) {
		setXRotation(xRot + 8 * dy);
		setYRotation(yRot + 8 * dx);
	} else if (event->buttons() & Qt::RightButton) {
		setXRotation(xRot + 8 * dy);
		setZRotation(zRot + 8 * dx);
	}
	lastPos = event->pos();
}

void GLWidget::wheelEvent(QWheelEvent *event)
{	

	QPoint numDegreesA = event->angleDelta() / 8;

	if (!numDegreesA.isNull())
	{
		int numDegrees = event->delta() / 8;
		int numSteps = numDegrees / 15;
		Zoom = Zoom + Zoom * numSteps * 0.1f;
		setCameraZ(Zoom);
		update();
	}
	event->accept();
}