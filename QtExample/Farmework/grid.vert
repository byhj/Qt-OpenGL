#version 430 core

layout (location = 0) in vec4 position;

uniform mat4 proj;
uniform mat4 view;
uniform mat4 model;

void main(void)
{
   mat4 mvp = proj * view * model;
   gl_Position = mvp * position;
} 