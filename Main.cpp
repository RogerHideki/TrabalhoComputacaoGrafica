#include"Mesh.h"

using namespace std;

const unsigned int WIDTH = 700;
const unsigned int HEIGHT = 700;

Vertex floorVertices[] = {
	//COORDINATES							NORMALS							COLORS							TEXTURE COORDINATES
	Vertex{glm::vec3(-1.0f, -1.0f, -1.0f),	glm::vec3(0.0f, -1.0f, 0.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(-1.0f, -1.0f,  1.0f),	glm::vec3(0.0f, -1.0f, 0.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(0.0f, 5.0f)},
	Vertex{glm::vec3(1.0f,  -1.0f,  1.0f),	glm::vec3(0.0f, -1.0f, 0.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(5.0f, 5.0f)},
	Vertex{glm::vec3(1.0f,  -1.0f, -1.0f),	glm::vec3(0.0f, -1.0f, 0.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(5.0f, 0.0f)},

	Vertex{glm::vec3(-1.0f, -1.0f, 1.0f),	glm::vec3(0.0f, 0.0f, 1.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(-1.0f, -0.6f, 1.0f),	glm::vec3(0.0f, 0.0f, 1.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(1.0f,  -0.6f, 1.0f),	glm::vec3(0.0f, 0.0f, 1.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(5.0f, 1.0f)},
	Vertex{glm::vec3(1.0f,  -1.0f, 1.0f),	glm::vec3(0.0f, 0.0f, 1.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(5.0f, 0.0f)},

	Vertex{glm::vec3(-1.0f, -1.0f, -1.0f),	glm::vec3(-1.0f, 0.0f, 0.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(-1.0f, -0.6f, -1.0f),	glm::vec3(-1.0f, 0.0f, 0.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(-1.0f, -0.6f,  1.0f),	glm::vec3(-1.0f, 0.0f, 0.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(5.0f, 1.0f)},
	Vertex{glm::vec3(-1.0f, -1.0f,  1.0f),	glm::vec3(-1.0f, 0.0f, 0.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(5.0f, 0.0f)},

	Vertex{glm::vec3(1.0f,  -1.0f, -1.0f),	glm::vec3(0.0f, 0.0f, -1.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(1.0f,  -0.6f, -1.0f),	glm::vec3(0.0f, 0.0f, -1.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(-1.0f, -0.6f, -1.0f),	glm::vec3(0.0f, 0.0f, -1.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(5.0f, 1.0f)},
	Vertex{glm::vec3(-1.0f, -1.0f, -1.0f),	glm::vec3(0.0f, 0.0f, -1.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(5.0f, 0.0f)},

	Vertex{glm::vec3(1.0f, -1.0f,  1.0f),	glm::vec3(1.0f, 0.0f, 0.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(1.0f, -0.6f,  1.0f),	glm::vec3(1.0f, 0.0f, 0.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(1.0f, -0.6f, -1.0f),	glm::vec3(1.0f, 0.0f, 0.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(5.0f, 1.0f)},
	Vertex{glm::vec3(1.0f, -1.0f, -1.0f),	glm::vec3(1.0f, 0.0f, 0.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(5.0f, 0.0f)},

	Vertex{glm::vec3(-1.0f, -0.6f,  1.0f),	glm::vec3(0.0f, 1.0f, 0.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(-1.0f, -0.6f, -1.0f),	glm::vec3(0.0f, 1.0f, 0.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(0.0f, 5.0f)},
	Vertex{glm::vec3(1.0f,  -0.6f, -1.0f),	glm::vec3(0.0f, 1.0f, 0.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(5.0f, 5.0f)},
	Vertex{glm::vec3(1.0f,  -0.6f,  1.0f),	glm::vec3(0.0f, 1.0f, 0.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(5.0f, 0.0f)},
};

GLuint floorIndices[] = {
	0, 1, 2,
	0, 2, 3,

	4, 5, 6,
	4, 6, 7,

	8, 9, 10,
	8, 10, 11,

	12, 13, 14,
	12, 14, 15,

	16, 17, 18,
	16, 18, 19,

	20, 21, 22,
	20, 22, 23
};

Vertex wallVertices[] = {
	//COORDINATES							NORMALS							COLORS							TEXTURE COORDINATES
	Vertex{glm::vec3(-1.0f, -0.6f, -0.6f),	glm::vec3(0.0f, 0.0f, 1.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(-1.0f,  1.0f, -0.6f),	glm::vec3(0.0f, 0.0f, 1.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(0.0f, 4.0f)},
	Vertex{glm::vec3(-0.2f,  1.0f, -0.6f),	glm::vec3(0.0f, 0.0f, 1.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(2.0f, 4.0f)},
	Vertex{glm::vec3(-0.2f, -0.6f, -0.6f),	glm::vec3(0.0f, 0.0f, 1.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(2.0f, 0.0f)},
	Vertex{glm::vec3(-0.2f, 0.2f, -0.6f),	glm::vec3(0.0f, 0.0f, 1.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(-0.2f, 1.0f, -0.6f),	glm::vec3(0.0f, 0.0f, 1.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(0.0f, 2.0f)},
	Vertex{glm::vec3(0.2f,  1.0f, -0.6f),	glm::vec3(0.0f, 0.0f, 1.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(1.0f, 2.0f)},
	Vertex{glm::vec3(0.2f,  0.2f, -0.6f),	glm::vec3(0.0f, 0.0f, 1.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(1.0f, 0.0f)},
	Vertex{glm::vec3(0.2f,  -0.6f, -0.6f),	glm::vec3(0.0f, 0.0f, 1.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(0.2f,   1.0f, -0.6f),	glm::vec3(0.0f, 0.0f, 1.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(0.0f, 4.0f)},
	Vertex{glm::vec3(1.0f,   1.0f, -0.6f),	glm::vec3(0.0f, 0.0f, 1.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(2.0f, 4.0f)},
	Vertex{glm::vec3(1.0f,  -0.6f, -0.6f),	glm::vec3(0.0f, 0.0f, 1.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(2.0f, 0.0f)},

	Vertex{glm::vec3(-1.0f, -0.6f, -1.0f),	glm::vec3(-1.0f, 0.0f, 0.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(-1.0f,  1.0f, -1.0f),	glm::vec3(-1.0f, 0.0f, 0.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(0.0f, 4.0f)},
	Vertex{glm::vec3(-1.0f,  1.0f, -0.6f),	glm::vec3(-1.0f, 0.0f, 0.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(1.0f, 4.0f)},
	Vertex{glm::vec3(-1.0f, -0.6f, -0.6f),	glm::vec3(-1.0f, 0.0f, 0.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(1.0f, 0.0f)},

	Vertex{glm::vec3(1.0f,  -0.6f, -1.0f),	glm::vec3(0.0f, 0.0f, -1.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(1.0f,   1.0f, -1.0f),	glm::vec3(0.0f, 0.0f, -1.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(0.0f, 4.0f)},
	Vertex{glm::vec3(0.2f,   1.0f, -1.0f),	glm::vec3(0.0f, 0.0f, -1.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(2.0f, 4.0f)},
	Vertex{glm::vec3(0.2f,  -0.6f, -1.0f),	glm::vec3(0.0f, 0.0f, -1.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(2.0f, 0.0f)},
	Vertex{glm::vec3(0.2f,   0.2f, -1.0f),	glm::vec3(0.0f, 0.0f, -1.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(0.2f,   1.0f, -1.0f),	glm::vec3(0.0f, 0.0f, -1.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(0.0f, 2.0f)},
	Vertex{glm::vec3(-0.2f,  1.0f, -1.0f),	glm::vec3(0.0f, 0.0f, -1.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(1.0f, 2.0f)},
	Vertex{glm::vec3(-0.2f,  0.2f, -1.0f),	glm::vec3(0.0f, 0.0f, -1.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(1.0f, 0.0f)},
	Vertex{glm::vec3(-0.2f, -0.6f, -1.0f),	glm::vec3(0.0f, 0.0f, -1.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(-0.2f,  1.0f, -1.0f),	glm::vec3(0.0f, 0.0f, -1.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(0.0f, 4.0f)},
	Vertex{glm::vec3(-1.0f,  1.0f, -1.0f),	glm::vec3(0.0f, 0.0f, -1.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(2.0f, 4.0f)},
	Vertex{glm::vec3(-1.0f, -0.6f, -1.0f),	glm::vec3(0.0f, 0.0f, -1.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(2.0f, 0.0f)},

	Vertex{glm::vec3(-0.2f, -0.6f, -0.6f),	glm::vec3(1.0f, 0.0f, 0.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(-0.2f,  0.2f, -0.6f),	glm::vec3(1.0f, 0.0f, 0.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(0.0f, 2.0f)},
	Vertex{glm::vec3(-0.2f,  0.2f, -1.0f),	glm::vec3(1.0f, 0.0f, 0.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(1.0f, 2.0f)},
	Vertex{glm::vec3(-0.2f, -0.6f, -1.0f),	glm::vec3(1.0f, 0.0f, 0.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(1.0f, 0.0f)},

	Vertex{glm::vec3(0.2f, -0.6f, -1.0f),	glm::vec3(-1.0f, 0.0f, 0.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(0.2f,  0.2f, -1.0f),	glm::vec3(-1.0f, 0.0f, 0.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(0.0f, 2.0f)},
	Vertex{glm::vec3(0.2f,  0.2f, -0.6f),	glm::vec3(-1.0f, 0.0f, 0.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(1.0f, 2.0f)},
	Vertex{glm::vec3(0.2f, -0.6f, -0.6f),	glm::vec3(-1.0f, 0.0f, 0.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(1.0f, 0.0f)},

	Vertex{glm::vec3(1.0f, -0.6f, -0.6f),	glm::vec3(1.0f, 0.0f, 0.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(1.0f,  1.0f, -0.6f),	glm::vec3(1.0f, 0.0f, 0.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(0.0f, 4.0f)},
	Vertex{glm::vec3(1.0f,  1.0f, -1.0f),	glm::vec3(1.0f, 0.0f, 0.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(1.0f, 4.0f)},
	Vertex{glm::vec3(1.0f, -0.6f, -1.0f),	glm::vec3(1.0f, 0.0f, 0.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(1.0f, 0.0f)},

	Vertex{glm::vec3(-1.0f, 1.0f, -0.6f),	glm::vec3(0.0f, 1.0f, 0.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(-1.0f, 1.0f, -1.0f),	glm::vec3(0.0f, 1.0f, 0.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(1.0f,  1.0f, -1.0f),	glm::vec3(0.0f, 1.0f, 0.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(5.0f, 1.0f)},
	Vertex{glm::vec3(1.0f,  1.0f, -0.6f),	glm::vec3(0.0f, 1.0f, 0.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(5.0f, 0.0f)},

	Vertex{glm::vec3(0.6f, -0.6f, -0.6f),	glm::vec3(-1.0f, 0.0f, 0.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(0.6f,  1.0f, -0.6f),	glm::vec3(-1.0f, 0.0f, 0.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(0.0f, 4.0f)},
	Vertex{glm::vec3(0.6f,  1.0f,  1.0f),	glm::vec3(-1.0f, 0.0f, 0.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(4.0f, 4.0f)},
	Vertex{glm::vec3(0.6f, -0.6f,  1.0f),	glm::vec3(-1.0f, 0.0f, 0.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(4.0f, 0.0f)},

	Vertex{glm::vec3(1.0f, -0.6f,  1.0f),	glm::vec3(1.0f, 0.0f, 0.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(1.0f,  1.0f,  1.0f),	glm::vec3(1.0f, 0.0f, 0.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(0.0f, 4.0f)},
	Vertex{glm::vec3(1.0f,  1.0f, -0.6f),	glm::vec3(1.0f, 0.0f, 0.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(4.0f, 4.0f)},
	Vertex{glm::vec3(1.0f, -0.6f, -0.6f),	glm::vec3(1.0f, 0.0f, 0.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(4.0f, 0.0f)},

	Vertex{glm::vec3(0.6f, -0.6f, 1.0f),	glm::vec3(0.0f, 0.0f, 1.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(0.6f,  1.0f, 1.0f),	glm::vec3(0.0f, 0.0f, 1.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(0.0f, 4.0f)},
	Vertex{glm::vec3(1.0f,  1.0f, 1.0f),	glm::vec3(0.0f, 0.0f, 1.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(1.0f, 4.0f)},
	Vertex{glm::vec3(1.0f, -0.6f, 1.0f),	glm::vec3(0.0f, 0.0f, 1.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(1.0f, 0.0f)},

	Vertex{glm::vec3(0.6f, 1.0f, -0.6f),	glm::vec3(0.0f, 1.0f, 0.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(1.0f, 1.0f, -0.6f),	glm::vec3(0.0f, 1.0f, 0.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(1.0f, 1.0f,  1.0f),	glm::vec3(0.0f, 1.0f, 0.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(4.0f, 1.0f)},
	Vertex{glm::vec3(0.6f, 1.0f,  1.0f),	glm::vec3(0.0f, 1.0f, 0.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(4.0f, 0.0f)},
};

GLuint wallIndices[] = {
	0, 1, 2,
	0, 2, 3,
	4, 5, 6,
	4, 6, 7,
	8, 9, 10,
	8, 10, 11,

	12, 13, 14,
	12, 14, 15,

	16, 17, 18,
	16, 18, 19,
	20, 21, 22,
	20, 22, 23,
	24, 25, 26,
	24, 26, 27,

	28, 29, 30,
	28, 30, 31,

	32, 33, 34,
	32, 34, 35,

	36, 37, 38,
	36, 38, 39,

	40, 41, 42,
	40, 42, 43,

	44, 45, 46,
	44, 46, 47,

	48, 49, 50,
	48, 50, 51,

	52, 53, 54,
	52, 54, 55,

	56, 57, 58,
	56, 58, 59
};

Vertex doorVertices[] = {
	//COORDINATES								NORMALS							COLORS							TEXTURE COORDINATES
	Vertex{glm::vec3(-0.2f, -0.6f, -0.6f),		glm::vec3(0.0f, 0.0f, 1.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(-0.2f,  0.2f, -0.6f),		glm::vec3(0.0f, 0.0f, 1.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(0.2f,   0.2f, -0.6f),		glm::vec3(0.0f, 0.0f, 1.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(1.0f, 1.0f)},
	Vertex{glm::vec3(0.2f,  -0.6f, -0.6f),		glm::vec3(0.0f, 0.0f, 1.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(1.0f, 0.0f)},

	Vertex{glm::vec3(-0.2f, -0.6f, -0.675f),	glm::vec3(0.0f, 0.0f, -1.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(-0.2f,  0.2f, -0.675f),	glm::vec3(0.0f, 0.0f, -1.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(0.2f,   0.2f, -0.675f),	glm::vec3(0.0f, 0.0f, -1.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(1.0f, 1.0f)},
	Vertex{glm::vec3(0.2f,  -0.6f, -0.675f),	glm::vec3(0.0f, 0.0f, -1.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(1.0f, 0.0f)},
};

GLuint doorIndices[] = {
	0, 1, 2,
	0, 2, 3,

	4, 5, 6,
	4, 6, 7,
};

Vertex skullAndRosesVertices[] = {
	//COORDINATES								NORMALS							COLORS							TEXTURE COORDINATES
	Vertex{glm::vec3(0.600f, -0.2f, -0.2f),		glm::vec3(0.0f, -1.0f, 0.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(0.575f, -0.2f, -0.2f),		glm::vec3(0.0f, -1.0f, 0.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(0.0f, 0.03125f)},
	Vertex{glm::vec3(0.575f, -0.2f,  0.6f),		glm::vec3(0.0f, -1.0f, 0.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(1.0f, 0.03125f)},
	Vertex{glm::vec3(0.600f, -0.2f,  0.6f),		glm::vec3(0.0f, -1.0f, 0.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(1.0f, 0.0f)},

	Vertex{glm::vec3(0.575f, -0.2f, -0.2f),		glm::vec3(-1.0f, 0.0f, 0.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(0.575f,  0.6f, -0.2f),		glm::vec3(-1.0f, 0.0f, 0.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(0.575f,  0.6f,  0.6f),		glm::vec3(-1.0f, 0.0f, 0.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(1.0f, 1.0f)},
	Vertex{glm::vec3(0.575f, -0.2f,  0.6f),		glm::vec3(-1.0f, 0.0f, 0.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(1.0f, 0.0f)},

	Vertex{glm::vec3(0.600f, -0.2f, -0.2f),		glm::vec3(0.0f, 0.0f, -1.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(0.600f,  0.6f, -0.2f),		glm::vec3(0.0f, 0.0f, -1.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(0.575f,  0.6f, -0.2f),		glm::vec3(0.0f, 0.0f, -1.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(0.03125f, 1.0f)},
	Vertex{glm::vec3(0.575f, -0.2f, -0.2f),		glm::vec3(0.0f, 0.0f, -1.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(0.03125f, 0.0f)},

	Vertex{glm::vec3(0.575f, -0.2f, 0.6f),		glm::vec3(0.0f, 0.0f, 1.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(0.575f,  0.6f, 0.6f),		glm::vec3(0.0f, 0.0f, 1.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(0.600f,  0.6f, 0.6f),		glm::vec3(0.0f, 0.0f, 1.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(0.03125f, 1.0f)},
	Vertex{glm::vec3(0.600f, -0.2f, 0.6f),		glm::vec3(0.0f, 0.0f, 1.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(0.03125f, 0.0f)},

	Vertex{glm::vec3(0.575f, 0.6f, -0.2f),		glm::vec3(0.0f, 1.0f, 0.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(0.600f, 0.6f, -0.2f),		glm::vec3(0.0f, 1.0f, 0.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(0.0f, 0.03125f)},
	Vertex{glm::vec3(0.600f, 0.6f,  0.6f),		glm::vec3(0.0f, 1.0f, 0.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(1.0f, 0.03125f)},
	Vertex{glm::vec3(0.575f, 0.6f,  0.6f),		glm::vec3(0.0f, 1.0f, 0.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(1.0f, 0.0f)},

};

GLuint skullAndRosesIndices[] = {
	0, 1, 2,
	0, 2, 3,

	4, 5, 6,
	4, 6, 7,

	8, 9, 10,
	8, 10, 11,

	12, 13, 14,
	12, 14, 15,

	16, 17, 18,
	16, 18, 19
};

Vertex seaLanternVertices[] = {
	//COORDINATES							NORMALS							COLORS							TEXTURE COORDINATES
	Vertex{glm::vec3(-0.2f, 0.6f, -0.2f),	glm::vec3(0.0f, 1.0f, 0.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(-0.2f, 0.6f,  0.2f),	glm::vec3(0.0f, 1.0f, 0.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(0.2f,  0.6f,  0.2f),	glm::vec3(0.0f, 1.0f, 0.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(1.0f, 1.0f)},
	Vertex{glm::vec3(0.2f,  0.6f, -0.2f),	glm::vec3(0.0f, 1.0f, 0.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(1.0f, 0.0f)},

	Vertex{glm::vec3(-0.2f, 0.6f, 0.2f),	glm::vec3(0.0f, 0.0f, -1.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(-0.2f, 1.0f, 0.2f),	glm::vec3(0.0f, 0.0f, -1.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(0.2f,  1.0f, 0.2f),	glm::vec3(0.0f, 0.0f, -1.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(1.0f, 1.0f)},
	Vertex{glm::vec3(0.2f,  0.6f, 0.2f),	glm::vec3(0.0f, 0.0f, -1.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(1.0f, 0.0f)},

	Vertex{glm::vec3(-0.2f, 0.6f, -0.2f),	glm::vec3(1.0f, 0.0f, 0.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(-0.2f, 1.0f, -0.2f),	glm::vec3(1.0f, 0.0f, 0.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(-0.2f, 1.0f,  0.2f),	glm::vec3(1.0f, 0.0f, 0.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(1.0f, 1.0f)},
	Vertex{glm::vec3(-0.2f, 0.6f,  0.2f),	glm::vec3(1.0f, 0.0f, 0.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(1.0f, 0.0f)},

	Vertex{glm::vec3(0.2f,  0.6f, -0.2f),	glm::vec3(0.0f, 0.0f, 1.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(0.2f,  1.0f, -0.2f),	glm::vec3(0.0f, 0.0f, 1.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(-0.2f, 1.0f, -0.2f),	glm::vec3(0.0f, 0.0f, 1.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(1.0f, 1.0f)},
	Vertex{glm::vec3(-0.2f, 0.6f, -0.2f),	glm::vec3(0.0f, 0.0f, 1.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(1.0f, 0.0f)},

	Vertex{glm::vec3(0.2f, 0.6f,  0.2f),	glm::vec3(-1.0f, 0.0f, 0.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(0.2f, 1.0f,  0.2f),	glm::vec3(-1.0f, 0.0f, 0.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(0.2f, 1.0f, -0.2f),	glm::vec3(-1.0f, 0.0f, 0.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(1.0f, 1.0f)},
	Vertex{glm::vec3(0.2f, 0.6f, -0.2f),	glm::vec3(-1.0f, 0.0f, 0.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(1.0f, 0.0f)},

	Vertex{glm::vec3(-0.2f, 1.0f,  0.2f),	glm::vec3(0.0f, -1.0f, 0.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(0.0f, 0.0f)},
	Vertex{glm::vec3(-0.2f, 1.0f, -0.2f),	glm::vec3(0.0f, -1.0f, 0.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(0.0f, 1.0f)},
	Vertex{glm::vec3(0.2f,  1.0f, -0.2f),	glm::vec3(0.0f, -1.0f, 0.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(1.0f, 1.0f)},
	Vertex{glm::vec3(0.2f,  1.0f,  0.2f),	glm::vec3(0.0f, -1.0f, 0.0f),	glm::vec3(1.0f, 1.0f, 1.0f),	glm::vec2(1.0f, 0.0f)},
};

GLuint seaLanternIndices[] = {
	0, 1, 2,
	0, 2, 3,

	4, 5, 6,
	4, 6, 7,

	8, 9, 10,
	8, 10, 11,

	12, 13, 14,
	12, 14, 15,

	16, 17, 18,
	16, 18, 19,

	20, 21, 22,
	20, 22, 23
};

int main() {
	glfwInit();

	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

	GLFWwindow* window = glfwCreateWindow(WIDTH, HEIGHT, "Trabalho de Computacao Grafica", NULL, NULL);
	if (window == NULL) {
		cout << "Falha ao criar GLFW window" << endl;
		glfwTerminate();
		return -1;
	}
	glfwMakeContextCurrent(window);

	gladLoadGL();
	glViewport(0, 0, WIDTH, HEIGHT);

	Texture floorTextures[]{
		Texture("darkOakPlanks.png", "diffuse", 0, GL_RGBA, GL_UNSIGNED_BYTE),
		Texture("defaultSpec.png", "specular", 1, GL_RED, GL_UNSIGNED_BYTE)
	};

	Texture wallTextures[]{
		Texture("cyanTerracotta.png", "diffuse", 0, GL_RGBA, GL_UNSIGNED_BYTE),
		Texture("defaultSpec.png", "specular", 1, GL_RED, GL_UNSIGNED_BYTE)
	};

	Texture doorTextures[]{
		Texture("door.png", "diffuse", 0, GL_RGBA, GL_UNSIGNED_BYTE),
		Texture("defaultSpec.png", "specular", 1, GL_RED, GL_UNSIGNED_BYTE)
	};

	Texture skullAndRosesTextures[]{
		Texture("skullAndRoses.png", "diffuse", 0, GL_RGBA, GL_UNSIGNED_BYTE),
		Texture("defaultSpec.png", "specular", 1, GL_RED, GL_UNSIGNED_BYTE)
	};

	Texture seaLanternTextures[]{
		Texture("seaLantern.png", "diffuse", 0, GL_RGBA, GL_UNSIGNED_BYTE),
		Texture("defaultSpec.png", "specular", 1, GL_RED, GL_UNSIGNED_BYTE)
	};

	Shader floorShader("default.vert", "default.frag");
	vector <Vertex> floorVerts(floorVertices, floorVertices + sizeof(floorVertices) / sizeof(Vertex));
	vector <GLuint> floorInd(floorIndices, floorIndices + sizeof(floorIndices) / sizeof(GLuint));
	vector <Texture> floorTex(floorTextures, floorTextures + sizeof(floorTextures) / sizeof(Texture));
	Mesh floor(floorVerts, floorInd, floorTex);

	Shader wallShader("default.vert", "default.frag");
	vector <Vertex> wallVerts(wallVertices, wallVertices + sizeof(wallVertices) / sizeof(Vertex));
	vector <GLuint> wallInd(wallIndices, wallIndices + sizeof(wallIndices) / sizeof(GLuint));
	vector <Texture> wallTex(wallTextures, wallTextures + sizeof(wallTextures) / sizeof(Texture));
	Mesh wall(wallVerts, wallInd, wallTex);

	Shader doorShader("default.vert", "default.frag");
	vector <Vertex> doorVerts(doorVertices, doorVertices + sizeof(doorVertices) / sizeof(Vertex));
	vector <GLuint> doorInd(doorIndices, doorIndices + sizeof(doorIndices) / sizeof(GLuint));
	vector <Texture> doorTex(doorTextures, doorTextures + sizeof(doorTextures) / sizeof(Texture));
	Mesh door(doorVerts, doorInd, doorTex);

	Shader skullAndRosesShader("default.vert", "default.frag");
	vector <Vertex> skullAndRosesVerts(skullAndRosesVertices, skullAndRosesVertices + sizeof(skullAndRosesVertices) / sizeof(Vertex));
	vector <GLuint> skullAndRosesInd(skullAndRosesIndices, skullAndRosesIndices + sizeof(skullAndRosesIndices) / sizeof(GLuint));
	vector <Texture> skullAndRosesTex(skullAndRosesTextures, skullAndRosesTextures + sizeof(skullAndRosesTextures) / sizeof(Texture));
	Mesh skullAndRoses(skullAndRosesVerts, skullAndRosesInd, skullAndRosesTex);

	Shader seaLanternShader("default.vert", "default.frag");
	vector <Vertex> seaLanternVerts(seaLanternVertices, seaLanternVertices + sizeof(seaLanternVertices) / sizeof(Vertex));
	vector <GLuint> seaLanternInd(seaLanternIndices, seaLanternIndices + sizeof(seaLanternIndices) / sizeof(GLuint));
	vector <Texture> seaLanternTex(seaLanternTextures, seaLanternTextures + sizeof(seaLanternTextures) / sizeof(Texture));
	Mesh seaLantern(seaLanternVerts, seaLanternInd, seaLanternTex);

	glm::vec3 floorPos = glm::vec3(0.0f, 0.0f, 0.0f);
	glm::mat4 floorModel = glm::mat4(1.0f);
	floorModel = glm::translate(floorModel, floorPos);

	glm::vec3 wallPos = glm::vec3(0.0f, 0.0f, 0.0f);
	glm::mat4 wallModel = glm::mat4(1.0f);
	wallModel = glm::translate(wallModel, wallPos);

	glm::vec3 doorPos = glm::vec3(0.0f, 0.0f, 0.0f);
	glm::mat4 doorModel = glm::mat4(1.0f);
	doorModel = glm::translate(doorModel, doorPos);

	glm::vec3 skullAndRosesPos = glm::vec3(0.0f, 0.0f, 0.0f);
	glm::mat4 skullAndRosesModel = glm::mat4(1.0f);
	skullAndRosesModel = glm::translate(skullAndRosesModel, skullAndRosesPos);

	glm::vec3 seaLanternPos = glm::vec3(0.0f, 0.0f, 0.0f);
	glm::mat4 seaLanternModel = glm::mat4(1.0f);
	seaLanternModel = glm::translate(seaLanternModel, seaLanternPos);

	glm::vec4 lightColor = glm::vec4(1.0f, 1.0f, 1.0f, 1.0f);
	glm::vec3 lightPos = glm::vec3(0.0f, 0.8f, 0.0f);
	glm::mat4 lightModel = glm::mat4(1.0f);
	lightModel = glm::translate(lightModel, lightPos);

	floorShader.Activate();
	glUniformMatrix4fv(glGetUniformLocation(floorShader.ID, "model"), 1, GL_FALSE, glm::value_ptr(floorModel));
	glUniform4f(glGetUniformLocation(floorShader.ID, "lightColor"), lightColor.x, lightColor.y, lightColor.z, lightColor.w);
	glUniform3f(glGetUniformLocation(floorShader.ID, "lightPos"), lightPos.x, lightPos.y, lightPos.z);

	wallShader.Activate();
	glUniformMatrix4fv(glGetUniformLocation(wallShader.ID, "model"), 1, GL_FALSE, glm::value_ptr(wallModel));
	glUniform4f(glGetUniformLocation(wallShader.ID, "lightColor"), lightColor.x, lightColor.y, lightColor.z, lightColor.w);
	glUniform3f(glGetUniformLocation(wallShader.ID, "lightPos"), lightPos.x, lightPos.y, lightPos.z);

	doorShader.Activate();
	glUniformMatrix4fv(glGetUniformLocation(doorShader.ID, "model"), 1, GL_FALSE, glm::value_ptr(doorModel));
	glUniform4f(glGetUniformLocation(doorShader.ID, "lightColor"), lightColor.x, lightColor.y, lightColor.z, lightColor.w);
	glUniform3f(glGetUniformLocation(doorShader.ID, "lightPos"), lightPos.x, lightPos.y, lightPos.z);

	skullAndRosesShader.Activate();
	glUniformMatrix4fv(glGetUniformLocation(skullAndRosesShader.ID, "model"), 1, GL_FALSE, glm::value_ptr(skullAndRosesModel));
	glUniform4f(glGetUniformLocation(skullAndRosesShader.ID, "lightColor"), lightColor.x, lightColor.y, lightColor.z, lightColor.w);
	glUniform3f(glGetUniformLocation(skullAndRosesShader.ID, "lightPos"), lightPos.x, lightPos.y, lightPos.z);

	seaLanternShader.Activate();
	glUniformMatrix4fv(glGetUniformLocation(seaLanternShader.ID, "model"), 1, GL_FALSE, glm::value_ptr(seaLanternModel));
	glUniform4f(glGetUniformLocation(seaLanternShader.ID, "lightColor"), lightColor.x, lightColor.y, lightColor.z, lightColor.w);
	glUniform3f(glGetUniformLocation(seaLanternShader.ID, "lightPos"), lightPos.x, lightPos.y, lightPos.z);

	glEnable(GL_DEPTH_TEST);

	Camera camera(WIDTH, HEIGHT, glm::vec3(0.0f, 0.0f, 2.0f));

	while (!glfwWindowShouldClose(window)) {
		glClearColor(0.07f, 0.13f, 0.17f, 1.0f);
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

		camera.Inputs(window);
		camera.updateMatrix(45.0f, 0.1f, 100.0f);

		floor.Draw(floorShader, camera);
		wall.Draw(wallShader, camera);
		door.Draw(doorShader, camera);
		skullAndRoses.Draw(skullAndRosesShader, camera);
		seaLantern.Draw(seaLanternShader, camera);

		glfwSwapBuffers(window);
		glfwPollEvents();
	}

	floorShader.Delete();
	wallShader.Delete();
	doorShader.Delete();
	skullAndRosesShader.Delete();
	seaLanternShader.Delete();

	glfwDestroyWindow(window);
	glfwTerminate();
	return 0;
}
