#version 430 core

out vec4 fragColor;
flat in vec4 vColor;

void main(void)
{
   fragColor = vColor;
}