#ifndef MESH_H
#define MESH_H


class Mesh
{
public:
	Mesh(){};
	virtual ~Mesh(){};
public:
	virtual void init() = 0;
	virtual void initBuffer() = 0;
	virtual void initVertexArray() = 0;
	virtual void render() = 0;
	virtual void initShader() = 0;
};


#endif
