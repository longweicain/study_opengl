#ifndef HELLO_TRIANGLE_H
#define HELLO_TRIANGLE_H

#include "study_opengles.h"
#include "gles.h"

namespace study_gles
{
	typedef struct
	{
		GLuint programObject;
	} UserData;

	GLuint LoadShader(GLenum etype, const char* pshaderSrc);

	int Init(ESContext *pesContext);

	void Draw(ESContext *pesContext);

	void Shutdown(ESContext *pesContext);
};

#endif //HELLO_TRIANGLE_H