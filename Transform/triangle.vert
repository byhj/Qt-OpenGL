#version 430 core

layout (location = 0) in vec4 vertex;

out vec4 color;

uniform mat4 proj;
uniform mat4 view;
uniform mat4 model;

void main(void)
{
   mat4 mvp = proj * view * model;
   color = vertex / 2.0 + vec4(0.5, 0.5, 0.5, 0.0);
   gl_Position = mvp * vertex;
} 