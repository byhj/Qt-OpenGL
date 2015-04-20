#version 430 core

layout (location = 0) in vec4 position;
layout (location = 1) in vec3 color;

flat out vec4 vColor;

uniform mat4 proj;
uniform mat4 view;
uniform mat4 model;

void main(void)
{
   mat4 mvp = proj * view * model;
   vColor = vec4(color, 1.0f);
   gl_Position = mvp * position;
} 