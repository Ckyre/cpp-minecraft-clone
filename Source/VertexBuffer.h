#include <iostream>
#include <vector>
using namespace std;
#include <GL/glew.h>
#include "Vertex.h"
#include "VertexBufferLayout.h"

#pragma once
class VertexBuffer
{
	private:
		unsigned int id;
		unsigned int size;
		unsigned int count;
		VertexBufferLayout layout;

	public:
		VertexBuffer();
		void Fill(vector<Vertex> vertices);
		int GetSize();
		int GetCount();

		void Bind();
		void Unbind();
};

