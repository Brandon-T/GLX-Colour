#include "Exports.h"

void* module = NULL;

void (__stdcall *ptr_glAccum) (GLenum op, GLfloat value);
void (__stdcall *ptr_glAlphaFunc) (GLenum func, GLclampf ref);
GLboolean (__stdcall *ptr_glAreTexturesResident) (GLsizei n, const GLuint* textures, GLboolean* residences);
void (__stdcall *ptr_glArrayElement) (GLint index);
void (__stdcall *ptr_glBegin) (GLenum mode);
void (__stdcall *ptr_glBindTexture) (GLenum target, GLuint texture);
void (__stdcall *ptr_glBitmap) (GLsizei width, GLsizei height, GLfloat xorig, GLfloat yorig, GLfloat xmove, GLfloat ymove, const GLubyte* bitmap);
void (__stdcall *ptr_glBlendFunc) (GLenum sfactor, GLenum dfactor);
void (__stdcall *ptr_glCallList) (GLuint list);
void (__stdcall *ptr_glCallLists) (GLsizei n, GLenum type, const GLvoid* lists);
void (__stdcall *ptr_glClear) (GLbitfield mask);
void (__stdcall *ptr_glClearAccum) (GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
void (__stdcall *ptr_glClearColor) (GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha);
void (__stdcall *ptr_glClearDepth) (GLclampd depth);
void (__stdcall *ptr_glClearIndex) (GLfloat c);
void (__stdcall *ptr_glClearStencil) (GLint s);
void (__stdcall *ptr_glClipPlane) (GLenum plane, const GLdouble* equation);
void (__stdcall *ptr_glColor3b) (GLbyte red, GLbyte green, GLbyte blue);
void (__stdcall *ptr_glColor3bv) (const GLbyte* v);
void (__stdcall *ptr_glColor3d) (GLdouble red, GLdouble green, GLdouble blue);
void (__stdcall *ptr_glColor3dv) (const GLdouble* v);
void (__stdcall *ptr_glColor3f) (GLfloat red, GLfloat green, GLfloat blue);
void (__stdcall *ptr_glColor3fv) (const GLfloat* v);
void (__stdcall *ptr_glColor3i) (GLint red, GLint green, GLint blue);
void (__stdcall *ptr_glColor3iv) (const GLint* v);
void (__stdcall *ptr_glColor3s) (GLshort red, GLshort green, GLshort blue);
void (__stdcall *ptr_glColor3sv) (const GLshort* v);
void (__stdcall *ptr_glColor3ub) (GLubyte red, GLubyte green, GLubyte blue);
void (__stdcall *ptr_glColor3ubv) (const GLubyte* v);
void (__stdcall *ptr_glColor3ui) (GLuint red, GLuint green, GLuint blue);
void (__stdcall *ptr_glColor3uiv) (const GLuint* v);
void (__stdcall *ptr_glColor3us) (GLushort red, GLushort green, GLushort blue);
void (__stdcall *ptr_glColor3usv) (const GLushort* v);
void (__stdcall *ptr_glColor4b) (GLbyte red, GLbyte green, GLbyte blue, GLbyte alpha);
void (__stdcall *ptr_glColor4bv) (const GLbyte* v);
void (__stdcall *ptr_glColor4d) (GLdouble red, GLdouble green, GLdouble blue, GLdouble alpha);
void (__stdcall *ptr_glColor4dv) (const GLdouble* v);
void (__stdcall *ptr_glColor4f) (GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
void (__stdcall *ptr_glColor4fv) (const GLfloat* v);
void (__stdcall *ptr_glColor4i) (GLint red, GLint green, GLint blue, GLint alpha);
void (__stdcall *ptr_glColor4iv) (const GLint* v);
void (__stdcall *ptr_glColor4s) (GLshort red, GLshort green, GLshort blue, GLshort alpha);
void (__stdcall *ptr_glColor4sv) (const GLshort* v);
void (__stdcall *ptr_glColor4ub) (GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha);
void (__stdcall *ptr_glColor4ubv) (const GLubyte* v);
void (__stdcall *ptr_glColor4ui) (GLuint red, GLuint green, GLuint blue, GLuint alpha);
void (__stdcall *ptr_glColor4uiv) (const GLuint* v);
void (__stdcall *ptr_glColor4us) (GLushort red, GLushort green, GLushort blue, GLushort alpha);
void (__stdcall *ptr_glColor4usv) (const GLushort* v);
void (__stdcall *ptr_glColorMask) (GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha);
void (__stdcall *ptr_glColorMaterial) (GLenum face, GLenum mode);
void (__stdcall *ptr_glColorPointer) (GLint size, GLenum type, GLsizei stride, const GLvoid* pointer);
void (__stdcall *ptr_glCopyPixels) (GLint x, GLint y, GLsizei width, GLsizei height, GLenum type);
void (__stdcall *ptr_glCopyTexImage1D) (GLenum target, GLint level, GLenum internalFormat, GLint x, GLint y, GLsizei width, GLint border);
void (__stdcall *ptr_glCopyTexImage2D) (GLenum target, GLint level, GLenum internalFormat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);
void (__stdcall *ptr_glCopyTexSubImage1D) (GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);
void (__stdcall *ptr_glCopyTexSubImage2D) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
void (__stdcall *ptr_glCullFace) (GLenum mode);
void (__stdcall *ptr_glDeleteLists) (GLuint list, GLsizei range);
void (__stdcall *ptr_glDeleteTextures) (GLsizei n, const GLuint* textures);
void (__stdcall *ptr_glDepthFunc) (GLenum func);
void (__stdcall *ptr_glDepthMask) (GLboolean flag);
void (__stdcall *ptr_glDepthRange) (GLclampd zNear, GLclampd zFar);
void (__stdcall *ptr_glDisable) (GLenum cap);
void (__stdcall *ptr_glDisableClientState) (GLenum array);
void (__stdcall *ptr_glDrawArrays) (GLenum mode, GLint first, GLsizei count);
void (__stdcall *ptr_glDrawBuffer) (GLenum mode);
void (__stdcall *ptr_glDrawElements) (GLenum mode, GLsizei count, GLenum type, const GLvoid* indices);
void (__stdcall *ptr_glDrawPixels) (GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid* pixels);
void (__stdcall *ptr_glEdgeFlag) (GLboolean flag);
void (__stdcall *ptr_glEdgeFlagv) (const GLboolean* flag);
void (__stdcall *ptr_glEdgeFlagPointer) (GLsizei stride, const GLvoid* pointer);
void (__stdcall *ptr_glEnable) (GLenum cap);
void (__stdcall *ptr_glEnableClientState) (GLenum array);
void (__stdcall *ptr_glEnd) (void);
void (__stdcall *ptr_glEndList) (void);
void (__stdcall *ptr_glEvalCoord1d) (GLdouble u);
void (__stdcall *ptr_glEvalCoord1dv) (const GLdouble* u);
void (__stdcall *ptr_glEvalCoord1f) (GLfloat u);
void (__stdcall *ptr_glEvalCoord1fv) (const GLfloat* u);
void (__stdcall *ptr_glEvalCoord2d) (GLdouble u, GLdouble v);
void (__stdcall *ptr_glEvalCoord2dv) (const GLdouble* u);
void (__stdcall *ptr_glEvalCoord2f) (GLfloat u, GLfloat v);
void (__stdcall *ptr_glEvalCoord2fv) (const GLfloat* u);
void (__stdcall *ptr_glEvalMesh1) (GLenum mode, GLint i1, GLint i2);
void (__stdcall *ptr_glEvalMesh2) (GLenum mode, GLint i1, GLint i2, GLint j1, GLint j2);
void (__stdcall *ptr_glEvalPoint1) (GLint i);
void (__stdcall *ptr_glEvalPoint2) (GLint i, GLint j);
void (__stdcall *ptr_glFeedbackBuffer) (GLsizei size, GLenum type, GLfloat* buffer);
void (__stdcall *ptr_glFinish) (void);
void (__stdcall *ptr_glFlush) (void);
void (__stdcall *ptr_glFogf) (GLenum pname, GLfloat param);
void (__stdcall *ptr_glFogfv) (GLenum pname, const GLfloat* params);
void (__stdcall *ptr_glFogi) (GLenum pname, GLint param);
void (__stdcall *ptr_glFogiv) (GLenum pname, const GLint* params);
void (__stdcall *ptr_glFrontFace) (GLenum mode);
void (__stdcall *ptr_glFrustum) (GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar);
GLuint (__stdcall *ptr_glGenLists) (GLsizei range);
void (__stdcall *ptr_glGenTextures) (GLsizei n, GLuint* textures);
void (__stdcall *ptr_glGetBooleanv) (GLenum pname, GLboolean* params);
void (__stdcall *ptr_glGetDoublev) (GLenum pname, GLdouble* params);
void (__stdcall *ptr_glGetFloatv) (GLenum pname, GLfloat* params);
void (__stdcall *ptr_glGetIntegerv) (GLenum pname, GLint* params);
void (__stdcall *ptr_glGetClipPlane) (GLenum plane, GLdouble* equation);
GLenum (__stdcall *ptr_glGetError) (void);
void (__stdcall *ptr_glGetLightfv) (GLenum light, GLenum pname, GLfloat* params);
void (__stdcall *ptr_glGetLightiv) (GLenum light, GLenum pname, GLint* params);
void (__stdcall *ptr_glGetMapdv) (GLenum target, GLenum query, GLdouble* v);
void (__stdcall *ptr_glGetMapfv) (GLenum target, GLenum query, GLfloat* v);
void (__stdcall *ptr_glGetMapiv) (GLenum target, GLenum query, GLint* v);
void (__stdcall *ptr_glGetMaterialfv) (GLenum face, GLenum pname, GLfloat* params);
void (__stdcall *ptr_glGetMaterialiv) (GLenum face, GLenum pname, GLint* params);
void (__stdcall *ptr_glGetPixelMapfv) (GLenum map, GLfloat* values);
void (__stdcall *ptr_glGetPixelMapuiv) (GLenum map, GLuint* values);
void (__stdcall *ptr_glGetPixelMapusv) (GLenum map, GLushort* values);
void (__stdcall *ptr_glGetPointerv) (GLenum pname, GLvoid** params);
void (__stdcall *ptr_glGetPolygonStipple) (GLubyte* mask);
const GLubyte* (__stdcall *ptr_glGetString) (GLenum name);
void (__stdcall *ptr_glGetTexEnvfv) (GLenum target, GLenum pname, GLfloat* params);
void (__stdcall *ptr_glGetTexEnviv) (GLenum target, GLenum pname, GLint* params);
void (__stdcall *ptr_glGetTexGendv) (GLenum coord, GLenum pname, GLdouble* params);
void (__stdcall *ptr_glGetTexGenfv) (GLenum coord, GLenum pname, GLfloat* params);
void (__stdcall *ptr_glGetTexGeniv) (GLenum coord, GLenum pname, GLint* params);
void (__stdcall *ptr_glGetTexImage) (GLenum target, GLint level, GLenum format, GLenum type, GLvoid* pixels);
void (__stdcall *ptr_glGetTexLevelParameterfv) (GLenum target, GLint level, GLenum pname, GLfloat* params);
void (__stdcall *ptr_glGetTexLevelParameteriv) (GLenum target, GLint level, GLenum pname, GLint* params);
void (__stdcall *ptr_glGetTexParameterfv) (GLenum target, GLenum pname, GLfloat* params);
void (__stdcall *ptr_glGetTexParameteriv) (GLenum target, GLenum pname, GLint* params);
void (__stdcall *ptr_glHint) (GLenum target, GLenum mode);
void (__stdcall *ptr_glIndexd) (GLdouble c);
void (__stdcall *ptr_glIndexdv) (const GLdouble* c);
void (__stdcall *ptr_glIndexf) (GLfloat c);
void (__stdcall *ptr_glIndexfv) (const GLfloat* c);
void (__stdcall *ptr_glIndexi) (GLint c);
void (__stdcall *ptr_glIndexiv) (const GLint* c);
void (__stdcall *ptr_glIndexs) (GLshort c);
void (__stdcall *ptr_glIndexsv) (const GLshort* c);
void (__stdcall *ptr_glIndexub) (GLubyte c);
void (__stdcall *ptr_glIndexubv) (const GLubyte* c);
void (__stdcall *ptr_glIndexMask) (GLuint mask);
void (__stdcall *ptr_glIndexPointer) (GLenum type, GLsizei stride, const GLvoid* pointer);
void (__stdcall *ptr_glInitNames) (void);
void (__stdcall *ptr_glInterleavedArrays) (GLenum format, GLsizei stride, const GLvoid* pointer);
GLboolean (__stdcall *ptr_glIsEnabled) (GLenum cap);
GLboolean (__stdcall *ptr_glIsList) (GLuint list);
GLboolean (__stdcall *ptr_glIsTexture) (GLuint texture);
void (__stdcall *ptr_glLightf) (GLenum light, GLenum pname, GLfloat param);
void (__stdcall *ptr_glLightfv) (GLenum light, GLenum pname, const GLfloat* params);
void (__stdcall *ptr_glLighti) (GLenum light, GLenum pname, GLint param);
void (__stdcall *ptr_glLightiv) (GLenum light, GLenum pname, const GLint* params);
void (__stdcall *ptr_glLightModelf) (GLenum pname, GLfloat param);
void (__stdcall *ptr_glLightModelfv) (GLenum pname, const GLfloat* params);
void (__stdcall *ptr_glLightModeli) (GLenum pname, GLint param);
void (__stdcall *ptr_glLightModeliv) (GLenum pname, const GLint* params);
void (__stdcall *ptr_glLineStipple) (GLint factor, GLushort pattern);
void (__stdcall *ptr_glLineWidth) (GLfloat width);
void (__stdcall *ptr_glListBase) (GLuint base);
void (__stdcall *ptr_glLoadIdentity) (void);
void (__stdcall *ptr_glLoadMatrixd) (const GLdouble* m);
void (__stdcall *ptr_glLoadMatrixf) (const GLfloat* m);
void (__stdcall *ptr_glLoadName) (GLuint name);
void (__stdcall *ptr_glLogicOp) (GLenum opcode);
void (__stdcall *ptr_glMap1d) (GLenum target, GLdouble u1, GLdouble u2, GLint stride, GLint order, const GLdouble* points);
void (__stdcall *ptr_glMap1f) (GLenum target, GLfloat u1, GLfloat u2, GLint stride, GLint order, const GLfloat* points);
void (__stdcall *ptr_glMap2d) (GLenum target, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, const GLdouble* points);
void (__stdcall *ptr_glMap2f) (GLenum target, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, const GLfloat* points);
void (__stdcall *ptr_glMapGrid1d) (GLint un, GLdouble u1, GLdouble u2);
void (__stdcall *ptr_glMapGrid1f) (GLint un, GLfloat u1, GLfloat u2);
void (__stdcall *ptr_glMapGrid2d) (GLint un, GLdouble u1, GLdouble u2, GLint vn, GLdouble v1, GLdouble v2);
void (__stdcall *ptr_glMapGrid2f) (GLint un, GLfloat u1, GLfloat u2, GLint vn, GLfloat v1, GLfloat v2);
void (__stdcall *ptr_glMaterialf) (GLenum face, GLenum pname, GLfloat param);
void (__stdcall *ptr_glMaterialfv) (GLenum face, GLenum pname, const GLfloat* params);
void (__stdcall *ptr_glMateriali) (GLenum face, GLenum pname, GLint param);
void (__stdcall *ptr_glMaterialiv) (GLenum face, GLenum pname, const GLint* params);
void (__stdcall *ptr_glMatrixMode) (GLenum mode);
void (__stdcall *ptr_glMultMatrixd) (const GLdouble* m);
void (__stdcall *ptr_glMultMatrixf) (const GLfloat* m);
void (__stdcall *ptr_glNewList) (GLuint list, GLenum mode);
void (__stdcall *ptr_glNormal3b) (GLbyte nx, GLbyte ny, GLbyte nz);
void (__stdcall *ptr_glNormal3bv) (const GLbyte* v);
void (__stdcall *ptr_glNormal3d) (GLdouble nx, GLdouble ny, GLdouble nz);
void (__stdcall *ptr_glNormal3dv) (const GLdouble* v);
void (__stdcall *ptr_glNormal3f) (GLfloat nx, GLfloat ny, GLfloat nz);
void (__stdcall *ptr_glNormal3fv) (const GLfloat* v);
void (__stdcall *ptr_glNormal3i) (GLint nx, GLint ny, GLint nz);
void (__stdcall *ptr_glNormal3iv) (const GLint* v);
void (__stdcall *ptr_glNormal3s) (GLshort nx, GLshort ny, GLshort nz);
void (__stdcall *ptr_glNormal3sv) (const GLshort* v);
void (__stdcall *ptr_glNormalPointer) (GLenum type, GLsizei stride, const GLvoid* pointer);
void (__stdcall *ptr_glOrtho) (GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar);
void (__stdcall *ptr_glPassThrough) (GLfloat token);
void (__stdcall *ptr_glPixelMapfv) (GLenum map, GLsizei mapsize, const GLfloat* values);
void (__stdcall *ptr_glPixelMapuiv) (GLenum map, GLsizei mapsize, const GLuint* values);
void (__stdcall *ptr_glPixelMapusv) (GLenum map, GLsizei mapsize, const GLushort* values);
void (__stdcall *ptr_glPixelStoref) (GLenum pname, GLfloat param);
void (__stdcall *ptr_glPixelStorei) (GLenum pname, GLint para);
void (__stdcall *ptr_glPixelTransferf) (GLenum pname, GLfloat param);
void (__stdcall *ptr_glPixelTransferi) (GLenum pname, GLint param);
void (__stdcall *ptr_glPixelZoom) (GLfloat xfactor, GLfloat yfactor);
void (__stdcall *ptr_glPointSize) (GLfloat size);
void (__stdcall *ptr_glPolygonMode) (GLenum face, GLenum mode);
void (__stdcall *ptr_glPolygonOffset) (GLfloat factor, GLfloat units);
void (__stdcall *ptr_glPolygonStipple) (const GLubyte* mask);
void (__stdcall *ptr_glPopAttrib) (void);
void (__stdcall *ptr_glPopClientAttrib) (void);
void (__stdcall *ptr_glPopMatrix) (void);
void (__stdcall *ptr_glPopName) (void);
void (__stdcall *ptr_glPrioritizeTextures) (GLsizei n, const GLuint* textures, const GLclampf* priorities);
void (__stdcall *ptr_glPushAttrib) (GLbitfield mask);
void (__stdcall *ptr_glPushClientAttrib) (GLbitfield mask);
void (__stdcall *ptr_glPushMatrix) (void);
void (__stdcall *ptr_glPushName) (GLuint name);
void (__stdcall *ptr_glRasterPos2d) (GLdouble x, GLdouble y);
void (__stdcall *ptr_glRasterPos2dv) (const GLdouble* v);
void (__stdcall *ptr_glRasterPos2f) (GLfloat x, GLfloat y);
void (__stdcall *ptr_glRasterPos2fv) (const GLfloat* v);
void (__stdcall *ptr_glRasterPos2i) (GLint x, GLint y);
void (__stdcall *ptr_glRasterPos2iv) (const GLint* v);
void (__stdcall *ptr_glRasterPos2s) (GLshort x, GLshort y);
void (__stdcall *ptr_glRasterPos2sv) (const GLshort* v);
void (__stdcall *ptr_glRasterPos3d) (GLdouble x, GLdouble y, GLdouble z);
void (__stdcall *ptr_glRasterPos3dv) (const GLdouble* v);
void (__stdcall *ptr_glRasterPos3f) (GLfloat x, GLfloat y, GLfloat z);
void (__stdcall *ptr_glRasterPos3fv) (const GLfloat* v);
void (__stdcall *ptr_glRasterPos3i) (GLint x, GLint y, GLint z);
void (__stdcall *ptr_glRasterPos3iv) (const GLint* v);
void (__stdcall *ptr_glRasterPos3s) (GLshort x, GLshort y, GLshort z);
void (__stdcall *ptr_glRasterPos3sv) (const GLshort* v);
void (__stdcall *ptr_glRasterPos4d) (GLdouble x, GLdouble y, GLdouble z, GLdouble w);
void (__stdcall *ptr_glRasterPos4dv) (const GLdouble* v);
void (__stdcall *ptr_glRasterPos4f) (GLfloat x, GLfloat y, GLfloat z, GLfloat w);
void (__stdcall *ptr_glRasterPos4fv) (const GLfloat* v);
void (__stdcall *ptr_glRasterPos4i) (GLint x, GLint y, GLint z, GLint w);
void (__stdcall *ptr_glRasterPos4iv) (const GLint* v);
void (__stdcall *ptr_glRasterPos4s) (GLshort x, GLshort y, GLshort z, GLshort w);
void (__stdcall *ptr_glRasterPos4sv) (const GLshort* v);
void (__stdcall *ptr_glReadBuffer) (GLenum mode);
void (__stdcall *ptr_glReadPixels) (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoid* pixels);
void (__stdcall *ptr_glRectd) (GLdouble x1, GLdouble y1, GLdouble x2, GLdouble y2);
void (__stdcall *ptr_glRectdv) (const GLdouble* v1, const GLdouble* v2);
void (__stdcall *ptr_glRectf) (GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2);
void (__stdcall *ptr_glRectfv) (const GLfloat* v1, const GLfloat* v2);
void (__stdcall *ptr_glRecti) (GLint x1, GLint y1, GLint x2, GLint y2);
void (__stdcall *ptr_glRectiv) (const GLint* v1, const GLint* v2);
void (__stdcall *ptr_glRects) (GLshort x1, GLshort y1, GLshort x2, GLshort y2);
void (__stdcall *ptr_glRectsv) (const GLshort* v1, const GLshort* v2);
GLint (__stdcall *ptr_glRenderMode) (GLenum mode);
void (__stdcall *ptr_glRotated) (GLdouble angle, GLdouble x, GLdouble y, GLdouble z);
void (__stdcall *ptr_glRotatef) (GLfloat angle, GLfloat x, GLfloat y, GLfloat z);
void (__stdcall *ptr_glScaled) (GLdouble x, GLdouble y, GLdouble z);
void (__stdcall *ptr_glScalef) (GLfloat x, GLfloat y, GLfloat z);
void (__stdcall *ptr_glScissor) (GLint x, GLint y, GLsizei width, GLsizei height);
void (__stdcall *ptr_glSelectBuffer) (GLsizei size, GLuint* buffer);
void (__stdcall *ptr_glShadeModel) (GLenum mode);
void (__stdcall *ptr_glStencilFunc) (GLenum func, GLint ref, GLuint mask);
void (__stdcall *ptr_glStencilMask) (GLuint mask);
void (__stdcall *ptr_glStencilOp) (GLenum fail, GLenum zfail, GLenum zpass);
void (__stdcall *ptr_glTexCoord1d) (GLdouble s);
void (__stdcall *ptr_glTexCoord1dv) (const GLdouble* v);
void (__stdcall *ptr_glTexCoord1f) (GLfloat s);
void (__stdcall *ptr_glTexCoord1fv) (const GLfloat* v);
void (__stdcall *ptr_glTexCoord1i) (GLint s);
void (__stdcall *ptr_glTexCoord1iv) (const GLint* v);
void (__stdcall *ptr_glTexCoord1s) (GLshort s);
void (__stdcall *ptr_glTexCoord1sv) (const GLshort* v);
void (__stdcall *ptr_glTexCoord2d) (GLdouble s, GLdouble t);
void (__stdcall *ptr_glTexCoord2dv) (const GLdouble* v);
void (__stdcall *ptr_glTexCoord2f) (GLfloat s,  GLfloat t);
void (__stdcall *ptr_glTexCoord2fv) (const GLfloat* v);
void (__stdcall *ptr_glTexCoord2i) (GLint s, GLint t);
void (__stdcall *ptr_glTexCoord2iv) (const GLint* v);
void (__stdcall *ptr_glTexCoord2s) (GLshort s, GLshort t);
void (__stdcall *ptr_glTexCoord2sv) (const GLshort* v);
void (__stdcall *ptr_glTexCoord3d) (GLdouble s, GLdouble t, GLdouble r);
void (__stdcall *ptr_glTexCoord3dv) (const GLdouble* v);
void (__stdcall *ptr_glTexCoord3f) (GLfloat s, GLfloat t, GLfloat r);
void (__stdcall *ptr_glTexCoord3fv) (const GLfloat* v);
void (__stdcall *ptr_glTexCoord3i) (GLint s, GLint t, GLint r);
void (__stdcall *ptr_glTexCoord3iv) (const GLint* v);
void (__stdcall *ptr_glTexCoord3s) (GLshort s, GLshort t, GLshort r);
void (__stdcall *ptr_glTexCoord3sv) (const GLshort* v);
void (__stdcall *ptr_glTexCoord4d) (GLdouble s, GLdouble t, GLdouble r, GLdouble q);
void (__stdcall *ptr_glTexCoord4dv) (const GLdouble* v);
void (__stdcall *ptr_glTexCoord4f) (GLfloat s, GLfloat t, GLfloat r, GLfloat q);
void (__stdcall *ptr_glTexCoord4fv) (const GLfloat* v);
void (__stdcall *ptr_glTexCoord4i) (GLint s, GLint t, GLint r, GLint q);
void (__stdcall *ptr_glTexCoord4iv) (const GLint* v);
void (__stdcall *ptr_glTexCoord4s) (GLshort s, GLshort t, GLshort r, GLshort q);
void (__stdcall *ptr_glTexCoord4sv) (const GLshort* v);
void (__stdcall *ptr_glTexCoordPointer) (GLint size, GLenum type, GLsizei stride, const GLvoid* pointer);
void (__stdcall *ptr_glTexEnvf) (GLenum target, GLenum pname, GLfloat param);
void (__stdcall *ptr_glTexEnvfv) (GLenum target, GLenum pname, const GLfloat* params);
void (__stdcall *ptr_glTexEnvi) (GLenum target, GLenum pname, GLint param);
void (__stdcall *ptr_glTexEnviv) (GLenum target, GLenum pname, const GLint* params);
void (__stdcall *ptr_glTexGend) (GLenum coord, GLenum pname, GLdouble param);
void (__stdcall *ptr_glTexGendv) (GLenum coord, GLenum pname, const GLdouble* params);
void (__stdcall *ptr_glTexGenf) (GLenum coord, GLenum pname, GLfloat param);
void (__stdcall *ptr_glTexGenfv) (GLenum coord, GLenum pname, const GLfloat* params);
void (__stdcall *ptr_glTexGeni) (GLenum coord, GLenum pname, GLint param);
void (__stdcall *ptr_glTexGeniv) (GLenum coord, GLenum pname, const GLint* params);
void (__stdcall *ptr_glTexImage1D) (GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const GLvoid* pixels);
void (__stdcall *ptr_glTexImage2D) (GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid* pixels);
void (__stdcall *ptr_glTexParameterf) (GLenum target, GLenum pname, GLfloat param);
void (__stdcall *ptr_glTexParameterfv) (GLenum target, GLenum pname, const GLfloat* params);
void (__stdcall *ptr_glTexParameteri) (GLenum target, GLenum pname, GLint param);
void (__stdcall *ptr_glTexParameteriv) (GLenum target, GLenum pname, const GLint* params);
void (__stdcall *ptr_glTexSubImage1D) (GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const GLvoid* pixels);
void (__stdcall *ptr_glTexSubImage2D) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid* pixels);
void (__stdcall *ptr_glTranslated) (GLdouble x, GLdouble y, GLdouble z);
void (__stdcall *ptr_glTranslatef) (GLfloat x, GLfloat y, GLfloat z);
void (__stdcall *ptr_glVertex2d) (GLdouble x, GLdouble y);
void (__stdcall *ptr_glVertex2dv) (const GLdouble* v);
void (__stdcall *ptr_glVertex2f) (GLfloat x, GLfloat y);
void (__stdcall *ptr_glVertex2fv) (const GLfloat* v);
void (__stdcall *ptr_glVertex2i) (GLint x, GLint y);
void (__stdcall *ptr_glVertex2iv) (const GLint* v);
void (__stdcall *ptr_glVertex2s) (GLshort x, GLshort y);
void (__stdcall *ptr_glVertex2sv) (const GLshort* v);
void (__stdcall *ptr_glVertex3d) (GLdouble x, GLdouble y, GLdouble z);
void (__stdcall *ptr_glVertex3dv) (const GLdouble* v);
void (__stdcall *ptr_glVertex3f) (GLfloat x, GLfloat y, GLfloat z);
void (__stdcall *ptr_glVertex3fv) (const GLfloat* v);
void (__stdcall *ptr_glVertex3i) (GLint x, GLint y, GLint z);
void (__stdcall *ptr_glVertex3iv) (const GLint* v);
void (__stdcall *ptr_glVertex3s) (GLshort x, GLshort y, GLshort z);
void (__stdcall *ptr_glVertex3sv) (const GLshort* v);
void (__stdcall *ptr_glVertex4d) (GLdouble x, GLdouble y, GLdouble z, GLdouble w);
void (__stdcall *ptr_glVertex4dv) (const GLdouble* v);
void (__stdcall *ptr_glVertex4f) (GLfloat x, GLfloat y, GLfloat z, GLfloat w);
void (__stdcall *ptr_glVertex4fv) (const GLfloat* v);
void (__stdcall *ptr_glVertex4i) (GLint x, GLint y, GLint z, GLint w);
void (__stdcall *ptr_glVertex4iv) (const GLint* v);
void (__stdcall *ptr_glVertex4s) (GLshort x, GLshort y, GLshort z, GLshort w);
void (__stdcall *ptr_glVertex4sv) (const GLshort* v);
void (__stdcall *ptr_glVertexPointer) (GLint size, GLenum type, GLsizei stride, const GLvoid* pointer);
void (__stdcall *ptr_glViewport) (GLint x, GLint y, GLsizei width, GLsizei height);


#if defined _WIN32 || defined _WIN64
int (__stdcall *ptr_wglChoosePixelFormat) (HDC hdc, const PIXELFORMATDESCRIPTOR *ppfd);
HGLRC (__stdcall *ptr_wglCreateContext) (HDC hdc);
HGLRC (__stdcall *ptr_wglCreateLayerContext) (HDC hdc, int iLayerPlane);
BOOL (__stdcall *ptr_wglCopyContext) (HGLRC hglrcSrc, HGLRC hglrcDst, UINT mask);
BOOL (__stdcall *ptr_wglDeleteContext) (HGLRC hglrc);
BOOL (__stdcall *ptr_wglDescribeLayerPlane) (HDC hdc, int iPixelFormat, int iLayerPlane, UINT nBytes, LPLAYERPLANEDESCRIPTOR plpd);
int (__stdcall *ptr_wglDescribePixelFormat) (HDC hdc, int iPixelFormat, UINT nBytes, LPPIXELFORMATDESCRIPTOR ppfd);
HGLRC (__stdcall *ptr_wglGetCurrentContext) (void);
HDC (__stdcall *ptr_wglGetCurrentDC) (void);
PROC (__stdcall *ptr_wglGetDefaultProcAddress) (LPCSTR lpszProc);
int (__stdcall *ptr_wglGetLayerPaletteEntries) (HDC hdc, int iLayerPlane, int iStart, int cEntries, COLORREF *pcr);
int (__stdcall *ptr_wglGetPixelFormat) (HDC hdc);
PROC (__stdcall *ptr_wglGetProcAddress) (LPCSTR lpszProc);
BOOL (__stdcall *ptr_wglMakeCurrent) (HDC hdc, HGLRC hglrc);
BOOL (__stdcall *ptr_wglRealizeLayerPalette) (HDC hdc, int iLayerPlane, BOOL bRealize);
int (__stdcall *ptr_wglSetLayerPaletteEntries) (HDC hdc, int iLayerPlane, int iStart, int cEntries, const COLORREF *pcr);
BOOL (__stdcall *ptr_wglSetPixelFormat) (HDC hdc, int iPixelFormat, const PIXELFORMATDESCRIPTOR *ppfd);
BOOL (__stdcall *ptr_wglShareLists) (HGLRC hglrc1, HGLRC hglrc2);
BOOL (__stdcall *ptr_wglSwapBuffers) (HDC hdc);
BOOL (__stdcall *ptr_wglSwapLayerBuffers) (HDC hdc, UINT fuPlanes);
BOOL (__stdcall *ptr_wglUseFontBitmapsW) (HDC hdc, DWORD first, DWORD count, DWORD listBase);
BOOL (__stdcall *ptr_wglUseFontBitmapsA) (HDC hdc, DWORD first, DWORD count, DWORD listBase);
BOOL (__stdcall *ptr_wglUseFontOutlinesW) (HDC hdc, DWORD first, DWORD count, DWORD listBase, FLOAT deviation, FLOAT extrusion, int format, LPGLYPHMETRICSFLOAT lpgmf);
BOOL (__stdcall *ptr_wglUseFontOutlinesA) (HDC hdc, DWORD first, DWORD count, DWORD listBase, FLOAT deviation, FLOAT extrusion, int format, LPGLYPHMETRICSFLOAT lpgmf);

#else

GLXFBConfig* (__stdcall *ptr_glXChooseFBConfig) (Display* dpy, int screen, const int* attrib_list, int* nelements);
XVisualInfo* (__stdcall *ptr_glXChooseVisual) (Display* dpy, int screen, int* attribList);
void (__stdcall *ptr_glXCopyContext) (Display* dpy, GLXContext src, GLXContext dst, unsigned long mask);
GLXContext (__stdcall *ptr_glXCreateContext) (Display* dpy, XVisualInfo* vis, GLXContext shareList, Bool direct);
GLXPixmap (__stdcall *ptr_glXCreatePixmap) (Display* dpy, GLXFBConfig config, Pixmap pixmap, const int* attrib_list);
GLXContext (__stdcall *ptr_glXCreateNewContext) (Display* dpy, GLXFBConfig config, int render_type, GLXContext share_list, Bool direct);
GLXPbuffer (__stdcall *ptr_glXCreatePbuffer) (Display* dpy, GLXFBConfig config, const int* attrib_list);
GLXWindow (__stdcall *ptr_glXCreateWindow) (Display* dpy, GLXFBConfig config, Window win, const int* attrib_list);
void (__stdcall *ptr_glXDestroyContext) (Display* dpy, GLXContext ctx);
void (__stdcall *ptr_glXDestroyGLXPixmap) (Display* dpy, GLXPixmap pixmap);
void (__stdcall *ptr_glXDestroyPbuffer) (Display* dpy, GLXPbuffer pbuf);
void (__stdcall *ptr_glXDestroyPixmap) (Display* dpy, GLXPixmap pixmap);
void (__stdcall *ptr_glXDestroyWindow ) (Display* dpy, GLXWindow win);
const char* (__stdcall *ptr_glXGetClientString) (Display*  dpy, int name);
int (__stdcall *ptr_glXGetConfig) (Display* dpy, XVisualInfo* visual, int attrib, int* value);
GLXContext (__stdcall *ptr_glXGetCurrentContext) (void);
Display* (__stdcall *ptr_glXGetCurrentDisplay) (void);
GLXDrawable (__stdcall *ptr_glXGetCurrentDrawable) (void);
GLXDrawable (__stdcall *ptr_glXGetCurrentReadDrawable) (void);
const char* (__stdcall *ptr_glXGetDriverConfig) (const char* driverName);
GLXFBConfig* (__stdcall *ptr_glXGetFBConfigs) (Display* dpy, int screen, int* nelements);
__GLXextFuncPtr (__stdcall *ptr_glXGetProcAddress) (const GLubyte* procName);
void (__stdcall *ptr_glXGetSelectedEvent) (Display* dpy, GLXDrawable draw, unsigned long* event_mask);
XVisualInfo* (__stdcall *ptr_glXGetVisualFromFBConfig) (Display* dpy, GLXFBConfig config);
Bool (__stdcall *ptr_glXIsDirect) (Display* dpy, GLXContext ctx);
Bool (__stdcall *ptr_glXMakeContextCurrent) (Display* dpy, GLXDrawable draw, GLXDrawable read, GLXContext ctx);
Bool (__stdcall *ptr_glXMakeCurrent) (Display* dpy, GLXDrawable drawable, GLXContext ctx);
int (__stdcall *ptr_glXQueryContext) (Display* dpy, GLXContext ctx, int attribute, int* value);
void (__stdcall *ptr_glXQueryDrawable) (Display* dpy, GLXDrawable draw, int attribute, unsigned int* value);
Bool (__stdcall *ptr_glXQueryExtension) (Display* dpy, int* errorb, int* event);
const char* (__stdcall *ptr_glXQueryExtensionsString) (Display* dpy, int screen);
const char* (__stdcall *ptr_glXQueryServerString) (Display* dpy, int screen, int name);
Bool (__stdcall *ptr_glXQueryVersion) (Display* dpy, int* maj, int* min);
void (__stdcall *ptr_glXSelectEvent) (Display* dpy, GLXDrawable drawable, unsigned long mask);
void (__stdcall *ptr_glXSwapBuffers) (Display* dpy, GLXDrawable drawable);
void (__stdcall *ptr_glXUseXFont) (Font font, int first, int count, int list);
void (__stdcall *ptr_glXWaitGL) (void);
void (__stdcall *ptr_glXWaitX) (void);
#endif // defined



void* xLoadLibrary(const char* file)
{
    #if defined _WIN32 || defined _WIN64
    return LoadLibraryA(file);
    #else
    return dlopen(file, RTLD_LAZY | RTLD_GLOBAL);
    #endif // defined
}

void xCloseLibrary(void* module)
{
    #if defined _WIN32 || defined _WIN64
    FreeLibrary(module);
    #else
    dlclose(module);
    #endif // defined
}

void* xGetProcAddress(void* __restrict handle, const char* __restrict name)
{
    #if defined _WIN32 || defined _WIN64
    return GetProcAddress(handle, name);
    #else
    return dlsym(handle, name);
    #endif // defined
}

bool Initialize(void)
{
    char Root[256] = {0};

    #if defined _WIN32 || defined _WIN64
        GetSystemDirectoryA(Root, 256);
        #ifdef _MSC_VER
            strcat_s(Root, "\\opengl32.dll");
        #else
            strcat(Root, "\\opengl32.dll");
        #endif // defined

    #else

        strcat(Root, "/usr/lib");
        #if defined(__x86_64__)
        strcat(Root, "/x86_64-linux-gnu");
        #else
        strcat(Root, "/i386-linux-gnu");
        #endif // defined
        strcat(Root, "/libGL.so");
    #endif // defined

    if ((module = xLoadLibrary(Root)))
    {
        ptr_glAccum = xGetProcAddress(module, "glAccum");
        ptr_glAlphaFunc = xGetProcAddress(module, "glAlphaFunc");
        ptr_glAreTexturesResident = xGetProcAddress(module, "glAreTexturesResident");
        ptr_glArrayElement = xGetProcAddress(module, "glArrayElement");
        ptr_glBegin = xGetProcAddress(module, "glBegin");
        ptr_glBindTexture = xGetProcAddress(module, "glBindTexture");
        ptr_glBitmap = xGetProcAddress(module, "glBitmap");
        ptr_glBlendFunc = xGetProcAddress(module, "glBlendFunc");
        ptr_glCallList = xGetProcAddress(module, "glCallList");
        ptr_glCallLists = xGetProcAddress(module, "glCallLists");
        ptr_glClear = xGetProcAddress(module, "glClear");
        ptr_glClearAccum = xGetProcAddress(module, "glClearAccum");
        ptr_glClearColor = xGetProcAddress(module, "glClearColor");
        ptr_glClearDepth = xGetProcAddress(module, "glClearDepth");
        ptr_glClearIndex = xGetProcAddress(module, "glClearIndex");
        ptr_glClearStencil = xGetProcAddress(module, "glClearStencil");
        ptr_glClipPlane = xGetProcAddress(module, "glClipPlane");
        ptr_glColor3b = xGetProcAddress(module, "glColor3b");
        ptr_glColor3bv = xGetProcAddress(module, "glColor3bv");
        ptr_glColor3d = xGetProcAddress(module, "glColor3d");
        ptr_glColor3dv = xGetProcAddress(module, "glColor3dv");
        ptr_glColor3f = xGetProcAddress(module, "glColor3f");
        ptr_glColor3fv = xGetProcAddress(module, "glColor3fv");
        ptr_glColor3i = xGetProcAddress(module, "glColor3i");
        ptr_glColor3iv = xGetProcAddress(module, "glColor3iv");
        ptr_glColor3s = xGetProcAddress(module, "glColor3s");
        ptr_glColor3sv = xGetProcAddress(module, "glColor3sv");
        ptr_glColor3ub = xGetProcAddress(module, "glColor3ub");
        ptr_glColor3ubv = xGetProcAddress(module, "glColor3ubv");
        ptr_glColor3ui = xGetProcAddress(module, "glColor3ui");
        ptr_glColor3uiv = xGetProcAddress(module, "glColor3uiv");
        ptr_glColor3us = xGetProcAddress(module, "glColor3us");
        ptr_glColor3usv = xGetProcAddress(module, "glColor3usv");
        ptr_glColor4b = xGetProcAddress(module, "glColor4b");
        ptr_glColor4bv = xGetProcAddress(module, "glColor4bv");
        ptr_glColor4d = xGetProcAddress(module, "glColor4d");
        ptr_glColor4dv = xGetProcAddress(module, "glColor4dv");
        ptr_glColor4f = xGetProcAddress(module, "glColor4f");
        ptr_glColor4fv = xGetProcAddress(module, "glColor4fv");
        ptr_glColor4i = xGetProcAddress(module, "glColor4i");
        ptr_glColor4iv = xGetProcAddress(module, "glColor4iv");
        ptr_glColor4s = xGetProcAddress(module, "glColor4s");
        ptr_glColor4sv = xGetProcAddress(module, "glColor4sv");
        ptr_glColor4ub = xGetProcAddress(module, "glColor4ub");
        ptr_glColor4ubv = xGetProcAddress(module, "glColor4ubv");
        ptr_glColor4ui = xGetProcAddress(module, "glColor4ui");
        ptr_glColor4uiv = xGetProcAddress(module, "glColor4uiv");
        ptr_glColor4us = xGetProcAddress(module, "glColor4us");
        ptr_glColor4usv = xGetProcAddress(module, "glColor4usv");
        ptr_glColorMask = xGetProcAddress(module, "glColorMask");
        ptr_glColorMaterial = xGetProcAddress(module, "glColorMaterial");
        ptr_glColorPointer = xGetProcAddress(module, "glColorPointer");
        ptr_glCopyPixels = xGetProcAddress(module, "glCopyPixels");
        ptr_glCopyTexImage1D = xGetProcAddress(module, "glCopyTexImage1D");
        ptr_glCopyTexImage2D = xGetProcAddress(module, "glCopyTexImage2D");
        ptr_glCopyTexSubImage1D = xGetProcAddress(module, "glCopyTexSubImage1D");
        ptr_glCopyTexSubImage2D = xGetProcAddress(module, "glCopyTexSubImage2D");
        ptr_glCullFace = xGetProcAddress(module, "glCullFace");
        ptr_glDeleteLists = xGetProcAddress(module, "glDeleteLists");
        ptr_glDeleteTextures = xGetProcAddress(module, "glDeleteTextures");
        ptr_glDepthFunc = xGetProcAddress(module, "glDepthFunc");
        ptr_glDepthMask = xGetProcAddress(module, "glDepthMask");
        ptr_glDepthRange = xGetProcAddress(module, "glDepthRange");
        ptr_glDisable = xGetProcAddress(module, "glDisable");
        ptr_glDisableClientState = xGetProcAddress(module, "glDisableClientState");
        ptr_glDrawArrays = xGetProcAddress(module, "glDrawArrays");
        ptr_glDrawBuffer = xGetProcAddress(module, "glDrawBuffer");
        ptr_glDrawElements = xGetProcAddress(module, "glDrawElements");
        ptr_glDrawPixels = xGetProcAddress(module, "glDrawPixels");
        ptr_glEdgeFlag = xGetProcAddress(module, "glEdgeFlag");
        ptr_glEdgeFlagv = xGetProcAddress(module, "glEdgeFlagv");
        ptr_glEdgeFlagPointer = xGetProcAddress(module, "glEdgeFlagPointer");
        ptr_glEnable = xGetProcAddress(module, "glEnable");
        ptr_glEnableClientState = xGetProcAddress(module, "glEnableClientState");
        ptr_glEnd = xGetProcAddress(module, "glEnd");
        ptr_glEndList = xGetProcAddress(module, "glEndList");
        ptr_glEvalCoord1d = xGetProcAddress(module, "glEvalCoord1d");
        ptr_glEvalCoord1dv = xGetProcAddress(module, "glEvalCoord1dv");
        ptr_glEvalCoord1f = xGetProcAddress(module, "glEvalCoord1f");
        ptr_glEvalCoord1fv = xGetProcAddress(module, "glEvalCoord1fv");
        ptr_glEvalCoord2d = xGetProcAddress(module, "glEvalCoord2d");
        ptr_glEvalCoord2dv = xGetProcAddress(module, "glEvalCoord2dv");
        ptr_glEvalCoord2f = xGetProcAddress(module, "glEvalCoord2f");
        ptr_glEvalCoord2fv = xGetProcAddress(module, "glEvalCoord2fv");
        ptr_glEvalMesh1 = xGetProcAddress(module, "glEvalMesh1");
        ptr_glEvalMesh2 = xGetProcAddress(module, "glEvalMesh2");
        ptr_glEvalPoint1 = xGetProcAddress(module, "glEvalPoint1");
        ptr_glEvalPoint2 = xGetProcAddress(module, "glEvalPoint2");
        ptr_glFeedbackBuffer = xGetProcAddress(module, "glFeedbackBuffer");
        ptr_glFinish = xGetProcAddress(module, "glFinish");
        ptr_glFlush = xGetProcAddress(module, "glFlush");
        ptr_glFogf = xGetProcAddress(module, "glFogf");
        ptr_glFogfv = xGetProcAddress(module, "glFogfv");
        ptr_glFogi = xGetProcAddress(module, "glFogi");
        ptr_glFogiv = xGetProcAddress(module, "glFogiv");
        ptr_glFrontFace = xGetProcAddress(module, "glFrontFace");
        ptr_glFrustum = xGetProcAddress(module, "glFrustum");
        ptr_glGenLists = xGetProcAddress(module, "glGenLists");
        ptr_glGenTextures = xGetProcAddress(module, "glGenTextures");
        ptr_glGetBooleanv = xGetProcAddress(module, "glGetBooleanv");
        ptr_glGetDoublev = xGetProcAddress(module, "glGetDoublev");
        ptr_glGetFloatv = xGetProcAddress(module, "glGetFloatv");
        ptr_glGetIntegerv = xGetProcAddress(module, "glGetIntegerv");
        ptr_glGetClipPlane = xGetProcAddress(module, "glGetClipPlane");
        ptr_glGetError = xGetProcAddress(module, "glGetError");
        ptr_glGetLightfv = xGetProcAddress(module, "glGetLightfv");
        ptr_glGetLightiv = xGetProcAddress(module, "glGetLightiv");
        ptr_glGetMapdv = xGetProcAddress(module, "glGetMapdv");
        ptr_glGetMapfv = xGetProcAddress(module, "glGetMapfv");
        ptr_glGetMapiv = xGetProcAddress(module, "glGetMapiv");
        ptr_glGetMaterialfv = xGetProcAddress(module, "glGetMaterialfv");
        ptr_glGetMaterialiv = xGetProcAddress(module, "glGetMaterialiv");
        ptr_glGetPixelMapfv = xGetProcAddress(module, "glGetPixelMapfv");
        ptr_glGetPixelMapuiv = xGetProcAddress(module, "glGetPixelMapuiv");
        ptr_glGetPixelMapusv = xGetProcAddress(module, "glGetPixelMapusv");
        ptr_glGetPointerv = xGetProcAddress(module, "glGetPointerv");
        ptr_glGetPolygonStipple = xGetProcAddress(module, "glGetPolygonStipple");
        ptr_glGetString = xGetProcAddress(module, "glGetString");
        ptr_glGetTexEnvfv = xGetProcAddress(module, "glGetTexEnvfv");
        ptr_glGetTexEnviv = xGetProcAddress(module, "glGetTexEnviv");
        ptr_glGetTexGendv = xGetProcAddress(module, "glGetTexGendv");
        ptr_glGetTexGenfv = xGetProcAddress(module, "glGetTexGenfv");
        ptr_glGetTexGeniv = xGetProcAddress(module, "glGetTexGeniv");
        ptr_glGetTexImage = xGetProcAddress(module, "glGetTexImage");
        ptr_glGetTexLevelParameterfv = xGetProcAddress(module, "glGetTexLevelParameterfv");
        ptr_glGetTexLevelParameteriv = xGetProcAddress(module, "glGetTexLevelParameteriv");
        ptr_glGetTexParameterfv = xGetProcAddress(module, "glGetTexParameterfv");
        ptr_glGetTexParameteriv = xGetProcAddress(module, "glGetTexParameteriv");
        ptr_glHint = xGetProcAddress(module, "glHint");
        ptr_glIndexd = xGetProcAddress(module, "glIndexd");
        ptr_glIndexdv = xGetProcAddress(module, "glIndexdv");
        ptr_glIndexf = xGetProcAddress(module, "glIndexf");
        ptr_glIndexfv = xGetProcAddress(module, "glIndexfv");
        ptr_glIndexi = xGetProcAddress(module, "glIndexi");
        ptr_glIndexiv = xGetProcAddress(module, "glIndexiv");
        ptr_glIndexs = xGetProcAddress(module, "glIndexs");
        ptr_glIndexsv = xGetProcAddress(module, "glIndexsv");
        ptr_glIndexub = xGetProcAddress(module, "glIndexub");
        ptr_glIndexubv = xGetProcAddress(module, "glIndexubv");
        ptr_glIndexMask = xGetProcAddress(module, "glIndexMask");
        ptr_glIndexPointer = xGetProcAddress(module, "glIndexPointer");
        ptr_glInitNames = xGetProcAddress(module, "glInitNames");
        ptr_glInterleavedArrays = xGetProcAddress(module, "glInterleavedArrays");
        ptr_glIsEnabled = xGetProcAddress(module, "glIsEnabled");
        ptr_glIsList = xGetProcAddress(module, "glIsList");
        ptr_glIsTexture = xGetProcAddress(module, "glIsTexture");
        ptr_glLightf = xGetProcAddress(module, "glLightf");
        ptr_glLightfv = xGetProcAddress(module, "glLightfv");
        ptr_glLighti = xGetProcAddress(module, "glLighti");
        ptr_glLightiv = xGetProcAddress(module, "glLightiv");
        ptr_glLightModelf = xGetProcAddress(module, "glLightModelf");
        ptr_glLightModelfv = xGetProcAddress(module, "glLightModelfv");
        ptr_glLightModeli = xGetProcAddress(module, "glLightModeli");
        ptr_glLightModeliv = xGetProcAddress(module, "glLightModeliv");
        ptr_glLineStipple = xGetProcAddress(module, "glLineStipple");
        ptr_glLineWidth = xGetProcAddress(module, "glLineWidth");
        ptr_glListBase = xGetProcAddress(module, "glListBase");
        ptr_glLoadIdentity = xGetProcAddress(module, "glLoadIdentity");
        ptr_glLoadMatrixd = xGetProcAddress(module, "glLoadMatrixd");
        ptr_glLoadMatrixf = xGetProcAddress(module, "glLoadMatrixf");
        ptr_glLoadName = xGetProcAddress(module, "glLoadName");
        ptr_glLogicOp = xGetProcAddress(module, "glLogicOp");
        ptr_glMap1d = xGetProcAddress(module, "glMap1d");
        ptr_glMap1f = xGetProcAddress(module, "glMap1f");
        ptr_glMap2d = xGetProcAddress(module, "glMap2d");
        ptr_glMap2f = xGetProcAddress(module, "glMap2f");
        ptr_glMapGrid1d = xGetProcAddress(module, "glMapGrid1d");
        ptr_glMapGrid1f = xGetProcAddress(module, "glMapGrid1f");
        ptr_glMapGrid2d = xGetProcAddress(module, "glMapGrid2d");
        ptr_glMapGrid2f = xGetProcAddress(module, "glMapGrid2f");
        ptr_glMaterialf = xGetProcAddress(module, "glMaterialf");
        ptr_glMaterialfv = xGetProcAddress(module, "glMaterialfv");
        ptr_glMateriali = xGetProcAddress(module, "glMateriali");
        ptr_glMaterialiv = xGetProcAddress(module, "glMaterialiv");
        ptr_glMatrixMode = xGetProcAddress(module, "glMatrixMode");
        ptr_glMultMatrixd = xGetProcAddress(module, "glMultMatrixd");
        ptr_glMultMatrixf = xGetProcAddress(module, "glMultMatrixf");
        ptr_glNewList = xGetProcAddress(module, "glNewList");
        ptr_glNormal3b = xGetProcAddress(module, "glNormal3b");
        ptr_glNormal3bv = xGetProcAddress(module, "glNormal3bv");
        ptr_glNormal3d = xGetProcAddress(module, "glNormal3d");
        ptr_glNormal3dv = xGetProcAddress(module, "glNormal3dv");
        ptr_glNormal3f = xGetProcAddress(module, "glNormal3f");
        ptr_glNormal3fv = xGetProcAddress(module, "glNormal3fv");
        ptr_glNormal3i = xGetProcAddress(module, "glNormal3i");
        ptr_glNormal3iv = xGetProcAddress(module, "glNormal3iv");
        ptr_glNormal3s = xGetProcAddress(module, "glNormal3s");
        ptr_glNormal3sv = xGetProcAddress(module, "glNormal3sv");
        ptr_glNormalPointer = xGetProcAddress(module, "glNormalPointer");
        ptr_glOrtho = xGetProcAddress(module, "glOrtho");
        ptr_glPassThrough = xGetProcAddress(module, "glPassThrough");
        ptr_glPixelMapfv = xGetProcAddress(module, "glPixelMapfv");
        ptr_glPixelMapuiv = xGetProcAddress(module, "glPixelMapuiv");
        ptr_glPixelMapusv = xGetProcAddress(module, "glPixelMapusv");
        ptr_glPixelStoref = xGetProcAddress(module, "glPixelStoref");
        ptr_glPixelStorei = xGetProcAddress(module, "glPixelStorei");
        ptr_glPixelTransferf = xGetProcAddress(module, "glPixelTransferf");
        ptr_glPixelTransferi = xGetProcAddress(module, "glPixelTransferi");
        ptr_glPixelZoom = xGetProcAddress(module, "glPixelZoom");
        ptr_glPointSize = xGetProcAddress(module, "glPointSize");
        ptr_glPolygonMode = xGetProcAddress(module, "glPolygonMode");
        ptr_glPolygonOffset = xGetProcAddress(module, "glPolygonOffset");
        ptr_glPolygonStipple = xGetProcAddress(module, "glPolygonStipple");
        ptr_glPopAttrib = xGetProcAddress(module, "glPopAttrib");
        ptr_glPopClientAttrib = xGetProcAddress(module, "glPopClientAttrib");
        ptr_glPopMatrix = xGetProcAddress(module, "glPopMatrix");
        ptr_glPopName = xGetProcAddress(module, "glPopName");
        ptr_glPrioritizeTextures = xGetProcAddress(module, "glPrioritizeTextures");
        ptr_glPushAttrib = xGetProcAddress(module, "glPushAttrib");
        ptr_glPushClientAttrib = xGetProcAddress(module, "glPushClientAttrib");
        ptr_glPushMatrix = xGetProcAddress(module, "glPushMatrix");
        ptr_glPushName = xGetProcAddress(module, "glPushName");
        ptr_glRasterPos2d = xGetProcAddress(module, "glRasterPos2d");
        ptr_glRasterPos2dv = xGetProcAddress(module, "glRasterPos2dv");
        ptr_glRasterPos2f = xGetProcAddress(module, "glRasterPos2f");
        ptr_glRasterPos2fv = xGetProcAddress(module, "glRasterPos2fv");
        ptr_glRasterPos2i = xGetProcAddress(module, "glRasterPos2i");
        ptr_glRasterPos2iv = xGetProcAddress(module, "glRasterPos2iv");
        ptr_glRasterPos2s = xGetProcAddress(module, "glRasterPos2s");
        ptr_glRasterPos2sv = xGetProcAddress(module, "glRasterPos2sv");
        ptr_glRasterPos3d = xGetProcAddress(module, "glRasterPos3d");
        ptr_glRasterPos3dv = xGetProcAddress(module, "glRasterPos3dv");
        ptr_glRasterPos3f = xGetProcAddress(module, "glRasterPos3f");
        ptr_glRasterPos3fv = xGetProcAddress(module, "glRasterPos3fv");
        ptr_glRasterPos3i = xGetProcAddress(module, "glRasterPos3i");
        ptr_glRasterPos3iv = xGetProcAddress(module, "glRasterPos3iv");
        ptr_glRasterPos3s = xGetProcAddress(module, "glRasterPos3s");
        ptr_glRasterPos3sv = xGetProcAddress(module, "glRasterPos3sv");
        ptr_glRasterPos4d = xGetProcAddress(module, "glRasterPos4d");
        ptr_glRasterPos4dv = xGetProcAddress(module, "glRasterPos4dv");
        ptr_glRasterPos4f = xGetProcAddress(module, "glRasterPos4f");
        ptr_glRasterPos4fv = xGetProcAddress(module, "glRasterPos4fv");
        ptr_glRasterPos4i = xGetProcAddress(module, "glRasterPos4i");
        ptr_glRasterPos4iv = xGetProcAddress(module, "glRasterPos4iv");
        ptr_glRasterPos4s = xGetProcAddress(module, "glRasterPos4s");
        ptr_glRasterPos4sv = xGetProcAddress(module, "glRasterPos4sv");
        ptr_glReadBuffer = xGetProcAddress(module, "glReadBuffer");
        ptr_glReadPixels = xGetProcAddress(module, "glReadPixels");
        ptr_glRectd = xGetProcAddress(module, "glRectd");
        ptr_glRectdv = xGetProcAddress(module, "glRectdv");
        ptr_glRectf = xGetProcAddress(module, "glRectf");
        ptr_glRectfv = xGetProcAddress(module, "glRectfv");
        ptr_glRecti = xGetProcAddress(module, "glRecti");
        ptr_glRectiv = xGetProcAddress(module, "glRectiv");
        ptr_glRects = xGetProcAddress(module, "glRects");
        ptr_glRectsv = xGetProcAddress(module, "glRectsv");
        ptr_glRenderMode = xGetProcAddress(module, "glRenderMode");
        ptr_glRotated = xGetProcAddress(module, "glRotated");
        ptr_glRotatef = xGetProcAddress(module, "glRotatef");
        ptr_glScaled = xGetProcAddress(module, "glScaled");
        ptr_glScalef = xGetProcAddress(module, "glScalef");
        ptr_glScissor = xGetProcAddress(module, "glScissor");
        ptr_glSelectBuffer = xGetProcAddress(module, "glSelectBuffer");
        ptr_glShadeModel = xGetProcAddress(module, "glShadeModel");
        ptr_glStencilFunc = xGetProcAddress(module, "glStencilFunc");
        ptr_glStencilMask = xGetProcAddress(module, "glStencilMask");
        ptr_glStencilOp = xGetProcAddress(module, "glStencilOp");
        ptr_glTexCoord1d = xGetProcAddress(module, "glTexCoord1d");
        ptr_glTexCoord1dv = xGetProcAddress(module, "glTexCoord1dv");
        ptr_glTexCoord1f = xGetProcAddress(module, "glTexCoord1f");
        ptr_glTexCoord1fv = xGetProcAddress(module, "glTexCoord1fv");
        ptr_glTexCoord1i = xGetProcAddress(module, "glTexCoord1i");
        ptr_glTexCoord1iv = xGetProcAddress(module, "glTexCoord1iv");
        ptr_glTexCoord1s = xGetProcAddress(module, "glTexCoord1s");
        ptr_glTexCoord1sv = xGetProcAddress(module, "glTexCoord1sv");
        ptr_glTexCoord2d = xGetProcAddress(module, "glTexCoord2d");
        ptr_glTexCoord2dv = xGetProcAddress(module, "glTexCoord2dv");
        ptr_glTexCoord2f = xGetProcAddress(module, "glTexCoord2f");
        ptr_glTexCoord2fv = xGetProcAddress(module, "glTexCoord2fv");
        ptr_glTexCoord2i = xGetProcAddress(module, "glTexCoord2i");
        ptr_glTexCoord2iv = xGetProcAddress(module, "glTexCoord2iv");
        ptr_glTexCoord2s = xGetProcAddress(module, "glTexCoord2s");
        ptr_glTexCoord2sv = xGetProcAddress(module, "glTexCoord2sv");
        ptr_glTexCoord3d = xGetProcAddress(module, "glTexCoord3d");
        ptr_glTexCoord3dv = xGetProcAddress(module, "glTexCoord3dv");
        ptr_glTexCoord3f = xGetProcAddress(module, "glTexCoord3f");
        ptr_glTexCoord3fv = xGetProcAddress(module, "glTexCoord3fv");
        ptr_glTexCoord3i = xGetProcAddress(module, "glTexCoord3i");
        ptr_glTexCoord3iv = xGetProcAddress(module, "glTexCoord3iv");
        ptr_glTexCoord3s = xGetProcAddress(module, "glTexCoord3s");
        ptr_glTexCoord3sv = xGetProcAddress(module, "glTexCoord3sv");
        ptr_glTexCoord4d = xGetProcAddress(module, "glTexCoord4d");
        ptr_glTexCoord4dv = xGetProcAddress(module, "glTexCoord4dv");
        ptr_glTexCoord4f = xGetProcAddress(module, "glTexCoord4f");
        ptr_glTexCoord4fv = xGetProcAddress(module, "glTexCoord4fv");
        ptr_glTexCoord4i = xGetProcAddress(module, "glTexCoord4i");
        ptr_glTexCoord4iv = xGetProcAddress(module, "glTexCoord4iv");
        ptr_glTexCoord4s = xGetProcAddress(module, "glTexCoord4s");
        ptr_glTexCoord4sv = xGetProcAddress(module, "glTexCoord4sv");
        ptr_glTexCoordPointer = xGetProcAddress(module, "glTexCoordPointer");
        ptr_glTexEnvf = xGetProcAddress(module, "glTexEnvf");
        ptr_glTexEnvfv = xGetProcAddress(module, "glTexEnvfv");
        ptr_glTexEnvi = xGetProcAddress(module, "glTexEnvi");
        ptr_glTexEnviv = xGetProcAddress(module, "glTexEnviv");
        ptr_glTexGend = xGetProcAddress(module, "glTexGend");
        ptr_glTexGendv = xGetProcAddress(module, "glTexGendv");
        ptr_glTexGenf = xGetProcAddress(module, "glTexGenf");
        ptr_glTexGenfv = xGetProcAddress(module, "glTexGenfv");
        ptr_glTexGeni = xGetProcAddress(module, "glTexGeni");
        ptr_glTexGeniv = xGetProcAddress(module, "glTexGeniv");
        ptr_glTexImage1D = xGetProcAddress(module, "glTexImage1D");
        ptr_glTexImage2D = xGetProcAddress(module, "glTexImage2D");
        ptr_glTexParameterf = xGetProcAddress(module, "glTexParameterf");
        ptr_glTexParameterfv = xGetProcAddress(module, "glTexParameterfv");
        ptr_glTexParameteri = xGetProcAddress(module, "glTexParameteri");
        ptr_glTexParameteriv = xGetProcAddress(module, "glTexParameteriv");
        ptr_glTexSubImage1D = xGetProcAddress(module, "glTexSubImage1D");
        ptr_glTexSubImage2D = xGetProcAddress(module, "glTexSubImage2D");
        ptr_glTranslated = xGetProcAddress(module, "glTranslated");
        ptr_glTranslatef = xGetProcAddress(module, "glTranslatef");
        ptr_glVertex2d = xGetProcAddress(module, "glVertex2d");
        ptr_glVertex2dv = xGetProcAddress(module, "glVertex2dv");
        ptr_glVertex2f = xGetProcAddress(module, "glVertex2f");
        ptr_glVertex2fv = xGetProcAddress(module, "glVertex2fv");
        ptr_glVertex2i = xGetProcAddress(module, "glVertex2i");
        ptr_glVertex2iv = xGetProcAddress(module, "glVertex2iv");
        ptr_glVertex2s = xGetProcAddress(module, "glVertex2s");
        ptr_glVertex2sv = xGetProcAddress(module, "glVertex2sv");
        ptr_glVertex3d = xGetProcAddress(module, "glVertex3d");
        ptr_glVertex3dv = xGetProcAddress(module, "glVertex3dv");
        ptr_glVertex3f = xGetProcAddress(module, "glVertex3f");
        ptr_glVertex3fv = xGetProcAddress(module, "glVertex3fv");
        ptr_glVertex3i = xGetProcAddress(module, "glVertex3i");
        ptr_glVertex3iv = xGetProcAddress(module, "glVertex3iv");
        ptr_glVertex3s = xGetProcAddress(module, "glVertex3s");
        ptr_glVertex3sv = xGetProcAddress(module, "glVertex3sv");
        ptr_glVertex4d = xGetProcAddress(module, "glVertex4d");
        ptr_glVertex4dv = xGetProcAddress(module, "glVertex4dv");
        ptr_glVertex4f = xGetProcAddress(module, "glVertex4f");
        ptr_glVertex4fv = xGetProcAddress(module, "glVertex4fv");
        ptr_glVertex4i = xGetProcAddress(module, "glVertex4i");
        ptr_glVertex4iv = xGetProcAddress(module, "glVertex4iv");
        ptr_glVertex4s = xGetProcAddress(module, "glVertex4s");
        ptr_glVertex4sv = xGetProcAddress(module, "glVertex4sv");
        ptr_glVertexPointer = xGetProcAddress(module, "glVertexPointer");
        ptr_glViewport = xGetProcAddress(module, "glViewport");

        #if defined _WIN32 || defined _WIN64
        ptr_wglChoosePixelFormat = xGetProcAddress(module, "wglChoosePixelFormat");
        ptr_wglCreateContext = xGetProcAddress(module, "wglCreateContext");
        ptr_wglCreateLayerContext = xGetProcAddress(module, "wglCreateLayerContext");
        ptr_wglCopyContext = xGetProcAddress(module, "wglCopyContext");
        ptr_wglDeleteContext = xGetProcAddress(module, "wglDeleteContext");
        ptr_wglDescribeLayerPlane = xGetProcAddress(module, "wglDescribeLayerPlane");
        ptr_wglDescribePixelFormat = xGetProcAddress(module, "wglDescribePixelFormat");
        ptr_wglGetCurrentContext = xGetProcAddress(module, "wglGetCurrentContext");
        ptr_wglGetCurrentDC = xGetProcAddress(module, "wglGetCurrentDC");
        ptr_wglGetDefaultProcAddress = xGetProcAddress(module, "wglGetDefaultProcAddress");
        ptr_wglGetLayerPaletteEntries = xGetProcAddress(module, "wglGetLayerPaletteEntries");
        ptr_wglGetPixelFormat = xGetProcAddress(module, "wglGetPixelFormat");
        ptr_wglGetProcAddress = xGetProcAddress(module, "wglGetProcAddress");
        ptr_wglMakeCurrent = xGetProcAddress(module, "wglMakeCurrent");
        ptr_wglRealizeLayerPalette = xGetProcAddress(module, "wglRealizeLayerPalette");
        ptr_wglSetLayerPaletteEntries = xGetProcAddress(module, "wglSetLayerPaletteEntries");
        ptr_wglSetPixelFormat = xGetProcAddress(module, "wglSetPixelFormat");
        ptr_wglSwapBuffers = xGetProcAddress(module, "wglSwapBuffers");
        ptr_wglSwapLayerBuffers = xGetProcAddress(module, "wglSwapLayerBuffers");
        ptr_wglUseFontBitmapsW = xGetProcAddress(module, "wglUseFontBitmapsW");
        ptr_wglUseFontBitmapsA = xGetProcAddress(module, "wglUseFontBitmapsA");
        ptr_wglUseFontOutlinesW = xGetProcAddress(module, "wglUseFontOutlinesW");
        ptr_wglUseFontOutlinesA = xGetProcAddress(module, "wglUseFontOutlinesA");

        #else

        ptr_glXChooseFBConfig = xGetProcAddress(module, "glXChooseFBConfig");
        ptr_glXChooseVisual = xGetProcAddress(module, "glXChooseVisual");
        ptr_glXCopyContext = xGetProcAddress(module, "glXCopyContext");
        ptr_glXCreateContext = xGetProcAddress(module, "glXCreateContext");
        ptr_glXCreatePixmap = xGetProcAddress(module, "glXCreatePixmap");
        ptr_glXCreateNewContext = xGetProcAddress(module, "glXCreateNewContext");
        ptr_glXCreatePbuffer = xGetProcAddress(module, "glXCreatePbuffer");
        ptr_glXCreateWindow = xGetProcAddress(module, "glXCreateWindow");
        ptr_glXDestroyContext = xGetProcAddress(module, "glXDestroyContext");
        ptr_glXDestroyGLXPixmap = xGetProcAddress(module, "glXDestroyGLXPixmap");
        ptr_glXDestroyPbuffer = xGetProcAddress(module, "glXDestroyPbuffer");
        ptr_glXDestroyPixmap = xGetProcAddress(module, "glXDestroyPixmap");
        ptr_glXDestroyWindow  = xGetProcAddress(module, "glXDestroyWindow");
        ptr_glXGetClientString = xGetProcAddress(module, "glXGetClientString");
        ptr_glXGetConfig = xGetProcAddress(module, "glXGetConfig");
        ptr_glXGetCurrentContext = xGetProcAddress(module, "glXGetCurrentContext");
        ptr_glXGetCurrentDisplay = xGetProcAddress(module, "glXGetCurrentDisplay");
        ptr_glXGetCurrentDrawable = xGetProcAddress(module, "glXGetCurrentDrawable");
        ptr_glXGetCurrentReadDrawable = xGetProcAddress(module, "glXGetCurrentReadDrawable");
        ptr_glXGetFBConfigs = xGetProcAddress(module, "glXGetFBConfigs");
        ptr_glXGetProcAddress = xGetProcAddress(module, "glXGetProcAddress");
        ptr_glXGetSelectedEvent = xGetProcAddress(module, "glXGetSelectedEvent");
        ptr_glXGetVisualFromFBConfig = xGetProcAddress(module, "glXGetVisualFromFBConfig");
        ptr_glXIsDirect = xGetProcAddress(module, "glXIsDirect");
        ptr_glXMakeContextCurrent = xGetProcAddress(module, "glXMakeContextCurrent");
        ptr_glXMakeCurrent = xGetProcAddress(module, "glXMakeCurrent");
        ptr_glXQueryContext = xGetProcAddress(module, "glXQueryContext");
        ptr_glXQueryDrawable = xGetProcAddress(module, "glXQueryDrawable");
        ptr_glXQueryExtension = xGetProcAddress(module, "glXQueryExtension");
        ptr_glXQueryExtensionsString = xGetProcAddress(module, "glXQueryExtensionsString");
        ptr_glXQueryServerString = xGetProcAddress(module, "glXQueryServerString");
        ptr_glXQueryVersion = xGetProcAddress(module, "glXQueryVersion");
        ptr_glXSelectEvent = xGetProcAddress(module, "glXSelectEvent");
        ptr_glXSwapBuffers = xGetProcAddress(module, "glXSwapBuffers");
        ptr_glXUseXFont = xGetProcAddress(module, "glXUseXFont");
        ptr_glXWaitGL = xGetProcAddress(module, "glXWaitGL");
        ptr_glXWaitX = xGetProcAddress(module, "glXWaitX");
        #endif // defined
        return true;
    }
    return false;
}

bool DeInitialize(void)
{
    xCloseLibrary(module);
    module = NULL;
    return true;
}




extern void __stdcall glAccum(GLenum op, GLfloat value)
{
    ptr_glAccum(op, value);
}

extern void __stdcall glAlphaFunc(GLenum func, GLclampf ref)
{
    ptr_glAlphaFunc(func, ref);
}

extern GLboolean __stdcall glAreTexturesResident(GLsizei n, const GLuint* textures, GLboolean* residences)
{
    return ptr_glAreTexturesResident(n, textures, residences);
}

extern void __stdcall glArrayElement(GLint index)
{
    ptr_glArrayElement(index);
}

extern void __stdcall glBegin(GLenum mode)
{
    ptr_glBegin(mode);
}

extern void __stdcall glBindTexture(GLenum target, GLuint texture)
{
    ptr_glBindTexture(target, texture);
}

extern void __stdcall glBitmap(GLsizei width, GLsizei height, GLfloat xorig, GLfloat yorig, GLfloat xmove, GLfloat ymove, const GLubyte* bitmap)
{
    ptr_glBitmap(width, height, xorig, yorig, xmove, ymove, bitmap);
}

extern void __stdcall glBlendFunc(GLenum sfactor, GLenum dfactor)
{
    ptr_glBlendFunc(sfactor, dfactor);
}

extern void __stdcall glCallList(GLuint list)
{
    ptr_glCallList(list);
}

extern void __stdcall glCallLists(GLsizei n, GLenum type, const GLvoid* lists)
{
    ptr_glCallLists(n, type, lists);
}

extern void __stdcall glClear(GLbitfield mask)
{
    ptr_glClear(mask);
}

extern void __stdcall glClearAccum(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
    ptr_glClearAccum(red, green, blue, alpha);
}

extern void __stdcall glClearColor(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha)
{
    ptr_glClearColor(red, green, blue, alpha);
}

extern void __stdcall glClearDepth(GLclampd depth)
{
    ptr_glClearDepth(depth);
}

extern void __stdcall glClearIndex(GLfloat c)
{
    ptr_glClearIndex(c);
}

extern void __stdcall glClearStencil(GLint s)
{
    ptr_glClearStencil(s);
}

extern void __stdcall glClipPlane(GLenum plane, const GLdouble* equation)
{
    ptr_glClipPlane(plane, equation);
}

extern void __stdcall glColor3b(GLbyte red, GLbyte green, GLbyte blue)
{
    ptr_glColor3b( red,  green,  blue);
}

extern void __stdcall glColor3bv(const GLbyte* v)
{
    ptr_glColor3bv( v);
}

extern void __stdcall glColor3d(GLdouble red, GLdouble green, GLdouble blue)
{
    ptr_glColor3d(red, green, blue);
}

extern void __stdcall glColor3dv(const GLdouble* v)
{
    ptr_glColor3dv(v);
}

extern void __stdcall glColor3f(GLfloat red, GLfloat green, GLfloat blue)
{
    ptr_glColor3f(red, green, blue);
}

extern void __stdcall glColor3fv(const GLfloat* v)
{
    ptr_glColor3fv(v);
}

extern void __stdcall glColor3i(GLint red, GLint green, GLint blue)
{
    ptr_glColor3i(red, green, blue);
}

extern void __stdcall glColor3iv(const GLint* v)
{
    ptr_glColor3iv(v);
}

extern void __stdcall glColor3s(GLshort red, GLshort green, GLshort blue)
{
    ptr_glColor3s(red, green, blue);
}

extern void __stdcall glColor3sv(const GLshort* v)
{
    ptr_glColor3sv(v);
}

extern void __stdcall glColor3ub(GLubyte red, GLubyte green, GLubyte blue)
{
    ptr_glColor3ub(red, green, blue);
}

extern void __stdcall glColor3ubv(const GLubyte* v)
{
    ptr_glColor3ubv(v);
}

extern void __stdcall glColor3ui(GLuint red, GLuint green, GLuint blue)
{
    ptr_glColor3ui(red, green, blue);
}

extern void __stdcall glColor3uiv(const GLuint* v)
{
    ptr_glColor3uiv(v);
}

extern void __stdcall glColor3us(GLushort red, GLushort green, GLushort blue)
{
    ptr_glColor3us(red, green, blue);
}

extern void __stdcall glColor3usv(const GLushort* v)
{
    ptr_glColor3usv(v);
}

extern void __stdcall glColor4b(GLbyte red, GLbyte green, GLbyte blue, GLbyte alpha)
{
    ptr_glColor4b( red,  green,  blue,  alpha);
}

extern void __stdcall glColor4bv(const GLbyte* v)
{
    ptr_glColor4bv( v);
}

extern void __stdcall glColor4d(GLdouble red, GLdouble green, GLdouble blue, GLdouble alpha)
{
    ptr_glColor4d(red, green, blue, alpha);
}

extern void __stdcall glColor4dv(const GLdouble* v)
{
    ptr_glColor4dv(v);
}

extern void __stdcall glColor4f(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
    ptr_glColor4f(red, green, blue, alpha);
}

extern void __stdcall glColor4fv(const GLfloat* v)
{
    ptr_glColor4fv(v);
}

extern void __stdcall glColor4i(GLint red, GLint green, GLint blue, GLint alpha)
{
    ptr_glColor4i(red, green, blue, alpha);
}

extern void __stdcall glColor4iv(const GLint* v)
{
    ptr_glColor4iv(v);
}

extern void __stdcall glColor4s(GLshort red, GLshort green, GLshort blue, GLshort alpha)
{
    ptr_glColor4s(red, green, blue, alpha);
}

extern void __stdcall glColor4sv(const GLshort* v)
{
    ptr_glColor4sv(v);
}

extern void __stdcall glColor4ub(GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha)
{
    ptr_glColor4ub(red, green, blue, alpha);
}

extern void __stdcall glColor4ubv(const GLubyte* v)
{
    ptr_glColor4ubv(v);
}

extern void __stdcall glColor4ui(GLuint red, GLuint green, GLuint blue, GLuint alpha)
{
    ptr_glColor4ui(red, green, blue, alpha);
}

extern void __stdcall glColor4uiv(const GLuint* v)
{
    ptr_glColor4uiv(v);
}

extern void __stdcall glColor4us(GLushort red, GLushort green, GLushort blue, GLushort alpha)
{
    ptr_glColor4us(red, green, blue, alpha);
}

extern void __stdcall glColor4usv(const GLushort* v)
{
    ptr_glColor4usv(v);
}

extern void __stdcall glColorMask(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha)
{
    ptr_glColorMask(red, green, blue, alpha);
}

extern void __stdcall glColorMaterial(GLenum face, GLenum mode)
{
    ptr_glColorMaterial(face, mode);
}

extern void __stdcall glColorPointer(GLint size, GLenum type, GLsizei stride, const GLvoid* pointer)
{
    ptr_glColorPointer(size, type, stride, pointer);
}

extern void __stdcall glCopyPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum type)
{
    ptr_glCopyPixels(x, y, width, height, type);
}

extern void __stdcall glCopyTexImage1D(GLenum target, GLint level, GLenum internalFormat, GLint x, GLint y, GLsizei width, GLint border)
{
    ptr_glCopyTexImage1D(target, level, internalFormat, x, y, width, border);
}

extern void __stdcall glCopyTexImage2D(GLenum target, GLint level, GLenum internalFormat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border)
{
    ptr_glCopyTexImage2D(target, level, internalFormat, x, y, width, height, border);
}

extern void __stdcall glCopyTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width)
{
    ptr_glCopyTexSubImage1D(target, level, xoffset, x, y, width);
}

extern void __stdcall glCopyTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
    ptr_glCopyTexSubImage2D(target, level, xoffset, yoffset, x, y, width, height);
}

extern void __stdcall glCullFace(GLenum mode)
{
    ptr_glCullFace(mode);
}

extern void __stdcall glDeleteLists(GLuint list, GLsizei range)
{
    ptr_glDeleteLists(list, range);
}

extern void __stdcall glDeleteTextures(GLsizei n, const GLuint* textures)
{
    ptr_glDeleteTextures(n, textures);
}

extern void __stdcall glDepthFunc(GLenum func)
{
    ptr_glDepthFunc(func);
}

extern void __stdcall glDepthMask(GLboolean flag)
{
    ptr_glDepthMask(flag);
}

extern void __stdcall glDepthRange(GLclampd zNear, GLclampd zFar)
{
    ptr_glDepthRange(zNear, zFar);
}

extern void __stdcall glDisable(GLenum cap)
{
    ptr_glDisable(cap);
}

extern void __stdcall glDisableClientState(GLenum array)
{
    ptr_glDisableClientState(array);
}

extern void __stdcall glDrawArrays(GLenum mode, GLint first, GLsizei count)
{
    ptr_glDrawArrays(mode, first, count);
}

extern void __stdcall glDrawBuffer(GLenum mode)
{
    ptr_glDrawBuffer(mode);
}

extern void __stdcall glDrawElements(GLenum mode, GLsizei count, GLenum type, const GLvoid* indices)
{
    ptr_glDrawElements(mode, count, type, indices);
}

extern void __stdcall glDrawPixels(GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid* pixels)
{
    ptr_glDrawPixels(width, height, format, type, pixels);
}

extern void __stdcall glEdgeFlag(GLboolean flag)
{
    ptr_glEdgeFlag(flag);
}

extern void __stdcall glEdgeFlagv(const GLboolean* flag)
{
    ptr_glEdgeFlagv(flag);
}

extern void __stdcall glEdgeFlagPointer(GLsizei stride, const GLvoid* pointer)
{
    ptr_glEdgeFlagPointer(stride, pointer);
}

extern void __stdcall glEnable(GLenum cap)
{
    ptr_glEnable(cap);
}

extern void __stdcall glEnableClientState(GLenum array)
{
    ptr_glEnableClientState(array);
}

extern void __stdcall glEnd(void)
{
    ptr_glEnd();
}

extern void __stdcall glEndList(void)
{
    ptr_glEndList();
}

extern void __stdcall glEvalCoord1d(GLdouble u)
{
    ptr_glEvalCoord1d(u);
}

extern void __stdcall glEvalCoord1dv(const GLdouble* u)
{
    ptr_glEvalCoord1dv(u);
}

extern void __stdcall glEvalCoord1f(GLfloat u)
{
    ptr_glEvalCoord1f(u);
}

extern void __stdcall glEvalCoord1fv(const GLfloat* u)
{
    ptr_glEvalCoord1fv(u);
}

extern void __stdcall glEvalCoord2d(GLdouble u, GLdouble v)
{
    ptr_glEvalCoord2d(u, v);
}

extern void __stdcall glEvalCoord2dv(const GLdouble* u)
{
    ptr_glEvalCoord2dv(u);
}

extern void __stdcall glEvalCoord2f(GLfloat u, GLfloat v)
{
    ptr_glEvalCoord2f(u, v);
}

extern void __stdcall glEvalCoord2fv(const GLfloat* u)
{
    ptr_glEvalCoord2fv(u);
}

extern void __stdcall glEvalMesh1(GLenum mode, GLint i1, GLint i2)
{
    ptr_glEvalMesh1(mode, i1, i2);
}

extern void __stdcall glEvalMesh2(GLenum mode, GLint i1, GLint i2, GLint j1, GLint j2)
{
    ptr_glEvalMesh2(mode, i1, i2, j1, j2);
}

extern void __stdcall glEvalPoint1(GLint i)
{
    ptr_glEvalPoint1(i);
}

extern void __stdcall glEvalPoint2(GLint i, GLint j)
{
    ptr_glEvalPoint2(i, j);
}

extern void __stdcall glFeedbackBuffer(GLsizei size, GLenum type, GLfloat* buffer)
{
    ptr_glFeedbackBuffer(size, type, buffer);
}

extern void __stdcall glFinish(void)
{
    ptr_glFinish();
}

extern void __stdcall glFlush(void)
{
    ptr_glFlush();
}

extern void __stdcall glFogf(GLenum pname, GLfloat param)
{
    ptr_glFogf(pname, param);
}

extern void __stdcall glFogfv(GLenum pname, const GLfloat* params)
{
    ptr_glFogfv(pname, params);
}

extern void __stdcall glFogi(GLenum pname, GLint param)
{
    ptr_glFogi(pname, param);
}

extern void __stdcall glFogiv(GLenum pname, const GLint* params)
{
    ptr_glFogiv(pname, params);
}

extern void __stdcall glFrontFace(GLenum mode)
{
    ptr_glFrontFace(mode);
}

extern void __stdcall glFrustum(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar)
{
    ptr_glFrustum(left, right, bottom, top, zNear, zFar);
}

extern GLuint __stdcall glGenLists(GLsizei range)
{
    return ptr_glGenLists(range);
}

extern void __stdcall glGenTextures(GLsizei n, GLuint* textures)
{
    ptr_glGenTextures(n, textures);
}

extern void __stdcall glGetBooleanv(GLenum pname, GLboolean* params)
{
    ptr_glGetBooleanv(pname, params);
}

extern void __stdcall glGetDoublev(GLenum pname, GLdouble* params)
{
    ptr_glGetDoublev(pname, params);
}

extern void __stdcall glGetFloatv(GLenum pname, GLfloat* params)
{
    ptr_glGetFloatv(pname, params);
}

extern void __stdcall glGetIntegerv(GLenum pname, GLint* params)
{
    ptr_glGetIntegerv(pname, params);
}

extern void __stdcall glGetClipPlane(GLenum plane, GLdouble* equation)
{
    ptr_glGetClipPlane(plane, equation);
}

extern GLenum __stdcall glGetError(void)
{
    return ptr_glGetError();
}

extern void __stdcall glGetLightfv(GLenum light, GLenum pname, GLfloat* params)
{
    ptr_glGetLightfv(light, pname, params);
}

extern void __stdcall glGetLightiv(GLenum light, GLenum pname, GLint* params)
{
    ptr_glGetLightiv(light, pname, params);
}

extern void __stdcall glGetMapdv(GLenum target, GLenum query, GLdouble* v)
{
    ptr_glGetMapdv(target, query, v);
}

extern void __stdcall glGetMapfv(GLenum target, GLenum query, GLfloat* v)
{
    ptr_glGetMapfv(target, query, v);
}

extern void __stdcall glGetMapiv(GLenum target, GLenum query, GLint* v)
{
    ptr_glGetMapiv(target, query, v);
}

extern void __stdcall glGetMaterialfv(GLenum face, GLenum pname, GLfloat* params)
{
    ptr_glGetMaterialfv(face, pname, params);
}

extern void __stdcall glGetMaterialiv(GLenum face, GLenum pname, GLint* params)
{
    ptr_glGetMaterialiv(face, pname, params);
}

extern void __stdcall glGetPixelMapfv(GLenum map, GLfloat* values)
{
    ptr_glGetPixelMapfv(map, values);
}

extern void __stdcall glGetPixelMapuiv(GLenum map, GLuint* values)
{
    ptr_glGetPixelMapuiv(map, values);
}

extern void __stdcall glGetPixelMapusv(GLenum map, GLushort* values)
{
    ptr_glGetPixelMapusv(map, values);
}

extern void __stdcall glGetPointerv(GLenum pname, GLvoid** params)
{
    ptr_glGetPointerv(pname, params);
}

extern void __stdcall glGetPolygonStipple(GLubyte* mask)
{
    ptr_glGetPolygonStipple(mask);
}

extern const GLubyte* __stdcall glGetString(GLenum name)
{
    return ptr_glGetString(name);
}

extern void __stdcall glGetTexEnvfv(GLenum target, GLenum pname, GLfloat* params)
{
    ptr_glGetTexEnvfv(target, pname, params);
}

extern void __stdcall glGetTexEnviv(GLenum target, GLenum pname, GLint* params)
{
    ptr_glGetTexEnviv(target, pname, params);
}

extern void __stdcall glGetTexGendv(GLenum coord, GLenum pname, GLdouble* params)
{
    ptr_glGetTexGendv(coord, pname, params);
}

extern void __stdcall glGetTexGenfv(GLenum coord, GLenum pname, GLfloat* params)
{
    ptr_glGetTexGenfv(coord, pname, params);
}

extern void __stdcall glGetTexGeniv(GLenum coord, GLenum pname, GLint* params)
{
    ptr_glGetTexGeniv(coord, pname, params);
}

extern void __stdcall glGetTexImage(GLenum target, GLint level, GLenum format, GLenum type, GLvoid* pixels)
{
    ptr_glGetTexImage(target, level, format, type, pixels);
}

extern void __stdcall glGetTexLevelParameterfv(GLenum target, GLint level, GLenum pname, GLfloat* params)
{
    ptr_glGetTexLevelParameterfv(target, level, pname, params);
}

extern void __stdcall glGetTexLevelParameteriv(GLenum target, GLint level, GLenum pname, GLint* params)
{
    ptr_glGetTexLevelParameteriv(target, level, pname, params);
}

extern void __stdcall glGetTexParameterfv(GLenum target, GLenum pname, GLfloat* params)
{
    ptr_glGetTexParameterfv(target, pname, params);
}

extern void __stdcall glGetTexParameteriv(GLenum target, GLenum pname, GLint* params)
{
    ptr_glGetTexParameteriv(target, pname, params);
}

extern void __stdcall glHint(GLenum target, GLenum mode)
{
    ptr_glHint(target, mode);
}

extern void __stdcall glIndexd(GLdouble c)
{
    ptr_glIndexd(c);
}

extern void __stdcall glIndexdv(const GLdouble* c)
{
    ptr_glIndexdv(c);
}

extern void __stdcall glIndexf(GLfloat c)
{
    ptr_glIndexf(c);
}

extern void __stdcall glIndexfv(const GLfloat* c)
{
    ptr_glIndexfv(c);
}

extern void __stdcall glIndexi(GLint c)
{
    ptr_glIndexi(c);
}

extern void __stdcall glIndexiv(const GLint* c)
{
    ptr_glIndexiv(c);
}

extern void __stdcall glIndexs(GLshort c)
{
    ptr_glIndexs(c);
}

extern void __stdcall glIndexsv(const GLshort* c)
{
    ptr_glIndexsv(c);
}

extern void __stdcall glIndexub(GLubyte c)
{
    ptr_glIndexub(c);
}

extern void __stdcall glIndexubv(const GLubyte* c)
{
    ptr_glIndexubv(c);
}

extern void __stdcall glIndexMask(GLuint mask)
{
    ptr_glIndexMask(mask);
}

extern void __stdcall glIndexPointer(GLenum type, GLsizei stride, const GLvoid* pointer)
{
    ptr_glIndexPointer(type, stride, pointer);
}

extern void __stdcall glInitNames(void)
{
    ptr_glInitNames();
}

extern void __stdcall glInterleavedArrays(GLenum format, GLsizei stride, const GLvoid* pointer)
{
    ptr_glInterleavedArrays(format, stride, pointer);
}

extern GLboolean __stdcall glIsEnabled(GLenum cap)
{
    return ptr_glIsEnabled(cap);
}

extern GLboolean __stdcall glIsList(GLuint list)
{
    return ptr_glIsList(list);
}

extern GLboolean __stdcall glIsTexture(GLuint texture)
{
    return ptr_glIsTexture(texture);
}

extern void __stdcall glLightf(GLenum light, GLenum pname, GLfloat param)
{
    ptr_glLightf(light, pname, param);
}

extern void __stdcall glLightfv(GLenum light, GLenum pname, const GLfloat* params)
{
    ptr_glLightfv(light, pname, params);
}

extern void __stdcall glLighti(GLenum light, GLenum pname, GLint param)
{
    ptr_glLighti(light, pname, param);
}

extern void __stdcall glLightiv(GLenum light, GLenum pname, const GLint* params)
{
    ptr_glLightiv(light, pname, params);
}

extern void __stdcall glLightModelf(GLenum pname, GLfloat param)
{
    ptr_glLightModelf(pname, param);
}

extern void __stdcall glLightModelfv(GLenum pname, const GLfloat* params)
{
    ptr_glLightModelfv(pname, params);
}

extern void __stdcall glLightModeli(GLenum pname, GLint param)
{
    ptr_glLightModeli(pname, param);
}

extern void __stdcall glLightModeliv(GLenum pname, const GLint* params)
{
    ptr_glLightModeliv(pname, params);
}

extern void __stdcall glLineStipple(GLint factor, GLushort pattern)
{
    ptr_glLineStipple(factor, pattern);
}

extern void __stdcall glLineWidth(GLfloat width)
{
    ptr_glLineWidth(width);
}

extern void __stdcall glListBase(GLuint base)
{
    ptr_glListBase(base);
}

extern void __stdcall glLoadIdentity(void)
{
    ptr_glLoadIdentity();
}

extern void __stdcall glLoadMatrixd(const GLdouble* m)
{
    ptr_glLoadMatrixd(m);
}

extern void __stdcall glLoadMatrixf(const GLfloat* m)
{
    ptr_glLoadMatrixf(m);
}

extern void __stdcall glLoadName(GLuint name)
{
    ptr_glLoadName(name);
}

extern void __stdcall glLogicOp(GLenum opcode)
{
    ptr_glLogicOp(opcode);
}

extern void __stdcall glMap1d(GLenum target, GLdouble u1, GLdouble u2, GLint stride, GLint order, const GLdouble* points)
{
    ptr_glMap1d(target, u1, u2, stride, order, points);
}

extern void __stdcall glMap1f(GLenum target, GLfloat u1, GLfloat u2, GLint stride, GLint order, const GLfloat* points)
{
    ptr_glMap1f(target, u1, u2, stride, order, points);
}

extern void __stdcall glMap2d(GLenum target, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, const GLdouble* points)
{
    ptr_glMap2d(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
}

extern void __stdcall glMap2f(GLenum target, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, const GLfloat* points)
{
    ptr_glMap2f(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
}

extern void __stdcall glMapGrid1d(GLint un, GLdouble u1, GLdouble u2)
{
    ptr_glMapGrid1d(un, u1, u2);
}

extern void __stdcall glMapGrid1f(GLint un, GLfloat u1, GLfloat u2)
{
    ptr_glMapGrid1f(un, u1, u2);
}

extern void __stdcall glMapGrid2d(GLint un, GLdouble u1, GLdouble u2, GLint vn, GLdouble v1, GLdouble v2)
{
    ptr_glMapGrid2d(un, u1, u2, vn, v1, v2);
}

extern void __stdcall glMapGrid2f(GLint un, GLfloat u1, GLfloat u2, GLint vn, GLfloat v1, GLfloat v2)
{
    ptr_glMapGrid2f(un, u1, u2, vn, v1, v2);
}

extern void __stdcall glMaterialf(GLenum face, GLenum pname, GLfloat param)
{
    ptr_glMaterialf(face, pname, param);
}

extern void __stdcall glMaterialfv(GLenum face, GLenum pname, const GLfloat* params)
{
    ptr_glMaterialfv(face, pname, params);
}

extern void __stdcall glMateriali(GLenum face, GLenum pname, GLint param)
{
    ptr_glMateriali(face, pname, param);
}

extern void __stdcall glMaterialiv(GLenum face, GLenum pname, const GLint* params)
{
    ptr_glMaterialiv(face, pname, params);
}

extern void __stdcall glMatrixMode(GLenum mode)
{
    ptr_glMatrixMode(mode);
}

extern void __stdcall glMultMatrixd(const GLdouble* m)
{
    ptr_glMultMatrixd(m);
}

extern void __stdcall glMultMatrixf(const GLfloat* m)
{
    ptr_glMultMatrixf(m);
}

extern void __stdcall glNewList(GLuint list, GLenum mode)
{
    ptr_glNewList(list, mode);
}

extern void __stdcall glNormal3b(GLbyte nx, GLbyte ny, GLbyte nz)
{
    ptr_glNormal3b( nx,  ny,  nz);
}

extern void __stdcall glNormal3bv(const GLbyte* v)
{
    ptr_glNormal3bv( v);
}

extern void __stdcall glNormal3d(GLdouble nx, GLdouble ny, GLdouble nz)
{
    ptr_glNormal3d(nx, ny, nz);
}

extern void __stdcall glNormal3dv(const GLdouble* v)
{
    ptr_glNormal3dv(v);
}

extern void __stdcall glNormal3f(GLfloat nx, GLfloat ny, GLfloat nz)
{
    ptr_glNormal3f(nx, ny, nz);
}

extern void __stdcall glNormal3fv(const GLfloat* v)
{
    ptr_glNormal3fv(v);
}

extern void __stdcall glNormal3i(GLint nx, GLint ny, GLint nz)
{
    ptr_glNormal3i(nx, ny, nz);
}

extern void __stdcall glNormal3iv(const GLint* v)
{
    ptr_glNormal3iv(v);
}

extern void __stdcall glNormal3s(GLshort nx, GLshort ny, GLshort nz)
{
    ptr_glNormal3s(nx, ny, nz);
}

extern void __stdcall glNormal3sv(const GLshort* v)
{
    ptr_glNormal3sv(v);
}

extern void __stdcall glNormalPointer(GLenum type, GLsizei stride, const GLvoid* pointer)
{
    ptr_glNormalPointer(type, stride, pointer);
}

extern void __stdcall glOrtho(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar)
{
    ptr_glOrtho(left, right, bottom, top, zNear, zFar);
}

extern void __stdcall glPassThrough(GLfloat token)
{
    ptr_glPassThrough(token);
}

extern void __stdcall glPixelMapfv(GLenum map, GLsizei mapsize, const GLfloat* values)
{
    ptr_glPixelMapfv(map, mapsize, values);
}

extern void __stdcall glPixelMapuiv(GLenum map, GLsizei mapsize, const GLuint* values)
{
    ptr_glPixelMapuiv(map, mapsize, values);
}

extern void __stdcall glPixelMapusv(GLenum map, GLsizei mapsize, const GLushort* values)
{
    ptr_glPixelMapusv(map, mapsize, values);
}

extern void __stdcall glPixelStoref(GLenum pname, GLfloat param)
{
    ptr_glPixelStoref(pname, param);
}

extern void __stdcall glPixelStorei(GLenum pname, GLint para)
{
    ptr_glPixelStorei(pname, para);
}

extern void __stdcall glPixelTransferf(GLenum pname, GLfloat param)
{
    ptr_glPixelTransferf(pname, param);
}

extern void __stdcall glPixelTransferi(GLenum pname, GLint param)
{
    ptr_glPixelTransferi(pname, param);
}

extern void __stdcall glPixelZoom(GLfloat xfactor, GLfloat yfactor)
{
    ptr_glPixelZoom(xfactor, yfactor);
}

extern void __stdcall glPointSize(GLfloat size)
{
    ptr_glPointSize(size);
}

extern void __stdcall glPolygonMode(GLenum face, GLenum mode)
{
    ptr_glPolygonMode(face, mode);
}

extern void __stdcall glPolygonOffset(GLfloat factor, GLfloat units)
{
    ptr_glPolygonOffset(factor, units);
}

extern void __stdcall glPolygonStipple(const GLubyte* mask)
{
    ptr_glPolygonStipple(mask);
}

extern void __stdcall glPopAttrib(void)
{
    ptr_glPopAttrib();
}

extern void __stdcall glPopClientAttrib(void)
{
    ptr_glPopClientAttrib();
}

extern void __stdcall glPopMatrix(void)
{
    ptr_glPopMatrix();
}

extern void __stdcall glPopName(void)
{
    ptr_glPopName();
}

extern void __stdcall glPrioritizeTextures(GLsizei n, const GLuint* textures, const GLclampf* priorities)
{
    ptr_glPrioritizeTextures(n, textures, priorities);
}

extern void __stdcall glPushAttrib(GLbitfield mask)
{
    ptr_glPushAttrib(mask);
}

extern void __stdcall glPushClientAttrib(GLbitfield mask)
{
    ptr_glPushClientAttrib(mask);
}

extern void __stdcall glPushMatrix(void)
{
    ptr_glPushMatrix();
}

extern void __stdcall glPushName(GLuint name)
{
    ptr_glPushName(name);
}

extern void __stdcall glRasterPos2d(GLdouble x, GLdouble y)
{
    ptr_glRasterPos2d(x, y);
}

extern void __stdcall glRasterPos2dv(const GLdouble* v)
{
    ptr_glRasterPos2dv(v);
}

extern void __stdcall glRasterPos2f(GLfloat x, GLfloat y)
{
    ptr_glRasterPos2f(x, y);
}

extern void __stdcall glRasterPos2fv(const GLfloat* v)
{
    ptr_glRasterPos2fv(v);
}

extern void __stdcall glRasterPos2i(GLint x, GLint y)
{
    ptr_glRasterPos2i(x, y);
}

extern void __stdcall glRasterPos2iv(const GLint* v)
{
    ptr_glRasterPos2iv(v);
}

extern void __stdcall glRasterPos2s(GLshort x, GLshort y)
{
    ptr_glRasterPos2s(x, y);
}

extern void __stdcall glRasterPos2sv(const GLshort* v)
{
    ptr_glRasterPos2sv(v);
}

extern void __stdcall glRasterPos3d(GLdouble x, GLdouble y, GLdouble z)
{
    ptr_glRasterPos3d(x, y, z);
}

extern void __stdcall glRasterPos3dv(const GLdouble* v)
{
    ptr_glRasterPos3dv(v);
}

extern void __stdcall glRasterPos3f(GLfloat x, GLfloat y, GLfloat z)
{
    ptr_glRasterPos3f(x, y, z);
}

extern void __stdcall glRasterPos3fv(const GLfloat* v)
{
    ptr_glRasterPos3fv(v);
}

extern void __stdcall glRasterPos3i(GLint x, GLint y, GLint z)
{
    ptr_glRasterPos3i(x, y, z);
}

extern void __stdcall glRasterPos3iv(const GLint* v)
{
    ptr_glRasterPos3iv(v);
}

extern void __stdcall glRasterPos3s(GLshort x, GLshort y, GLshort z)
{
    ptr_glRasterPos3s(x, y, z);
}

extern void __stdcall glRasterPos3sv(const GLshort* v)
{
    ptr_glRasterPos3sv(v);
}

extern void __stdcall glRasterPos4d(GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    ptr_glRasterPos4d(x, y, z, w);
}

extern void __stdcall glRasterPos4dv(const GLdouble* v)
{
    ptr_glRasterPos4dv(v);
}

extern void __stdcall glRasterPos4f(GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    ptr_glRasterPos4f(x, y, z, w);
}

extern void __stdcall glRasterPos4fv(const GLfloat* v)
{
    ptr_glRasterPos4fv(v);
}

extern void __stdcall glRasterPos4i(GLint x, GLint y, GLint z, GLint w)
{
    ptr_glRasterPos4i(x, y, z, w);
}

extern void __stdcall glRasterPos4iv(const GLint* v)
{
    ptr_glRasterPos4iv(v);
}

extern void __stdcall glRasterPos4s(GLshort x, GLshort y, GLshort z, GLshort w)
{
    ptr_glRasterPos4s(x, y, z, w);
}

extern void __stdcall glRasterPos4sv(const GLshort* v)
{
    ptr_glRasterPos4sv(v);
}

extern void __stdcall glReadBuffer(GLenum mode)
{
    ptr_glReadBuffer(mode);
}

extern void __stdcall glReadPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoid* pixels)
{
    ptr_glReadPixels(x, y, width, height, format, type, pixels);
}

extern void __stdcall glRectd(GLdouble x1, GLdouble y1, GLdouble x2, GLdouble y2)
{
    ptr_glRectd(x1, y1, x2, y2);
}

extern void __stdcall glRectdv(const GLdouble* v1, const GLdouble* v2)
{
    ptr_glRectdv(v1, v2);
}

extern void __stdcall glRectf(GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2)
{
    ptr_glRectf(x1, y1, x2, y2);
}

extern void __stdcall glRectfv(const GLfloat* v1, const GLfloat* v2)
{
    ptr_glRectfv(v1, v2);
}

extern void __stdcall glRecti(GLint x1, GLint y1, GLint x2, GLint y2)
{
    ptr_glRecti(x1, y1, x2, y2);
}

extern void __stdcall glRectiv(const GLint* v1, const GLint* v2)
{
    ptr_glRectiv(v1, v2);
}

extern void __stdcall glRects(GLshort x1, GLshort y1, GLshort x2, GLshort y2)
{
    ptr_glRects(x1, y1, x2, y2);
}

extern void __stdcall glRectsv(const GLshort* v1, const GLshort* v2)
{
    ptr_glRectsv(v1, v2);
}

extern GLint __stdcall glRenderMode(GLenum mode)
{
    return ptr_glRenderMode(mode);
}

extern void __stdcall glRotated(GLdouble angle, GLdouble x, GLdouble y, GLdouble z)
{
    ptr_glRotated(angle, x, y, z);
}

extern void __stdcall glRotatef(GLfloat angle, GLfloat x, GLfloat y, GLfloat z)
{
    ptr_glRotatef(angle, x, y, z);
}

extern void __stdcall glScaled(GLdouble x, GLdouble y, GLdouble z)
{
    ptr_glScaled(x, y, z);
}

extern void __stdcall glScalef(GLfloat x, GLfloat y, GLfloat z)
{
    ptr_glScalef(x, y, z);
}

extern void __stdcall glScissor(GLint x, GLint y, GLsizei width, GLsizei height)
{
    ptr_glScissor(x, y, width, height);
}

extern void __stdcall glSelectBuffer(GLsizei size, GLuint* buffer)
{
    ptr_glSelectBuffer(size, buffer);
}

extern void __stdcall glShadeModel(GLenum mode)
{
    ptr_glShadeModel(mode);
}

extern void __stdcall glStencilFunc(GLenum func, GLint ref, GLuint mask)
{
    ptr_glStencilFunc(func, ref, mask);
}

extern void __stdcall glStencilMask(GLuint mask)
{
    ptr_glStencilMask(mask);
}

extern void __stdcall glStencilOp(GLenum fail, GLenum zfail, GLenum zpass)
{
    ptr_glStencilOp(fail, zfail, zpass);
}

extern void __stdcall glTexCoord1d(GLdouble s)
{
    ptr_glTexCoord1d(s);
}

extern void __stdcall glTexCoord1dv(const GLdouble* v)
{
    ptr_glTexCoord1dv(v);
}

extern void __stdcall glTexCoord1f(GLfloat s)
{
    ptr_glTexCoord1f(s);
}

extern void __stdcall glTexCoord1fv(const GLfloat* v)
{
    ptr_glTexCoord1fv(v);
}

extern void __stdcall glTexCoord1i(GLint s)
{
    ptr_glTexCoord1i(s);
}

extern void __stdcall glTexCoord1iv(const GLint* v)
{
    ptr_glTexCoord1iv(v);
}

extern void __stdcall glTexCoord1s(GLshort s)
{
    ptr_glTexCoord1s(s);
}

extern void __stdcall glTexCoord1sv(const GLshort* v)
{
    ptr_glTexCoord1sv(v);
}

extern void __stdcall glTexCoord2d(GLdouble s, GLdouble t)
{
    ptr_glTexCoord2d(s, t);
}

extern void __stdcall glTexCoord2dv(const GLdouble* v)
{
    ptr_glTexCoord2dv(v);
}

extern void __stdcall glTexCoord2f(GLfloat s,  GLfloat t)
{
    ptr_glTexCoord2f(s,  t);
}

extern void __stdcall glTexCoord2fv(const GLfloat* v)
{
    ptr_glTexCoord2fv(v);
}

extern void __stdcall glTexCoord2i(GLint s, GLint t)
{
    ptr_glTexCoord2i(s, t);
}

extern void __stdcall glTexCoord2iv(const GLint* v)
{
    ptr_glTexCoord2iv(v);
}

extern void __stdcall glTexCoord2s(GLshort s, GLshort t)
{
    ptr_glTexCoord2s(s, t);
}

extern void __stdcall glTexCoord2sv(const GLshort* v)
{
    ptr_glTexCoord2sv(v);
}

extern void __stdcall glTexCoord3d(GLdouble s, GLdouble t, GLdouble r)
{
    ptr_glTexCoord3d(s, t, r);
}

extern void __stdcall glTexCoord3dv(const GLdouble* v)
{
    ptr_glTexCoord3dv(v);
}

extern void __stdcall glTexCoord3f(GLfloat s, GLfloat t, GLfloat r)
{
    ptr_glTexCoord3f(s, t, r);
}

extern void __stdcall glTexCoord3fv(const GLfloat* v)
{
    ptr_glTexCoord3fv(v);
}

extern void __stdcall glTexCoord3i(GLint s, GLint t, GLint r)
{
    ptr_glTexCoord3i(s, t, r);
}

extern void __stdcall glTexCoord3iv(const GLint* v)
{
    ptr_glTexCoord3iv(v);
}

extern void __stdcall glTexCoord3s(GLshort s, GLshort t, GLshort r)
{
    ptr_glTexCoord3s(s, t, r);
}

extern void __stdcall glTexCoord3sv(const GLshort* v)
{
    ptr_glTexCoord3sv(v);
}

extern void __stdcall glTexCoord4d(GLdouble s, GLdouble t, GLdouble r, GLdouble q)
{
    ptr_glTexCoord4d(s, t, r, q);
}

extern void __stdcall glTexCoord4dv(const GLdouble* v)
{
    ptr_glTexCoord4dv(v);
}

extern void __stdcall glTexCoord4f(GLfloat s, GLfloat t, GLfloat r, GLfloat q)
{
    ptr_glTexCoord4f(s, t, r, q);
}

extern void __stdcall glTexCoord4fv(const GLfloat* v)
{
    ptr_glTexCoord4fv(v);
}

extern void __stdcall glTexCoord4i(GLint s, GLint t, GLint r, GLint q)
{
    ptr_glTexCoord4i(s, t, r, q);
}

extern void __stdcall glTexCoord4iv(const GLint* v)
{
    ptr_glTexCoord4iv(v);
}

extern void __stdcall glTexCoord4s(GLshort s, GLshort t, GLshort r, GLshort q)
{
    ptr_glTexCoord4s(s, t, r, q);
}

extern void __stdcall glTexCoord4sv(const GLshort* v)
{
    ptr_glTexCoord4sv(v);
}

extern void __stdcall glTexCoordPointer(GLint size, GLenum type, GLsizei stride, const GLvoid* pointer)
{
    ptr_glTexCoordPointer(size, type, stride, pointer);
}

extern void __stdcall glTexEnvf(GLenum target, GLenum pname, GLfloat param)
{
    ptr_glTexEnvf(target, pname, param);
}

extern void __stdcall glTexEnvfv(GLenum target, GLenum pname, const GLfloat* params)
{
    ptr_glTexEnvfv(target, pname, params);
}

extern void __stdcall glTexEnvi(GLenum target, GLenum pname, GLint param)
{
    ptr_glTexEnvi(target, pname, param);
}

extern void __stdcall glTexEnviv(GLenum target, GLenum pname, const GLint* params)
{
    ptr_glTexEnviv(target, pname, params);
}

extern void __stdcall glTexGend(GLenum coord, GLenum pname, GLdouble param)
{
    ptr_glTexGend(coord, pname, param);
}

extern void __stdcall glTexGendv(GLenum coord, GLenum pname, const GLdouble* params)
{
    ptr_glTexGendv(coord, pname, params);
}

extern void __stdcall glTexGenf(GLenum coord, GLenum pname, GLfloat param)
{
    ptr_glTexGenf(coord, pname, param);
}

extern void __stdcall glTexGenfv(GLenum coord, GLenum pname, const GLfloat* params)
{
    ptr_glTexGenfv(coord, pname, params);
}

extern void __stdcall glTexGeni(GLenum coord, GLenum pname, GLint param)
{
    ptr_glTexGeni(coord, pname, param);
}

extern void __stdcall glTexGeniv(GLenum coord, GLenum pname, const GLint* params)
{
    ptr_glTexGeniv(coord, pname, params);
}

extern void __stdcall glTexImage1D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const GLvoid* pixels)
{
    ptr_glTexImage1D(target, level, internalformat, width, border, format, type, pixels);
}

extern void __stdcall glTexImage2D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid* pixels)
{
    ptr_glTexImage2D(target, level, internalformat, width, height, border, format, type, pixels);
}

extern void __stdcall glTexParameterf(GLenum target, GLenum pname, GLfloat param)
{
    ptr_glTexParameterf(target, pname, param);
}

extern void __stdcall glTexParameterfv(GLenum target, GLenum pname, const GLfloat* params)
{
    ptr_glTexParameterfv(target, pname, params);
}

extern void __stdcall glTexParameteri(GLenum target, GLenum pname, GLint param)
{
    ptr_glTexParameteri(target, pname, param);
}

extern void __stdcall glTexParameteriv(GLenum target, GLenum pname, const GLint* params)
{
    ptr_glTexParameteriv(target, pname, params);
}

extern void __stdcall glTexSubImage1D(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const GLvoid* pixels)
{
    ptr_glTexSubImage1D(target, level, xoffset, width, format, type, pixels);
}

extern void __stdcall glTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid* pixels)
{
    ptr_glTexSubImage2D(target, level, xoffset, yoffset, width, height, format, type, pixels);
}

extern void __stdcall glTranslated(GLdouble x, GLdouble y, GLdouble z)
{
    ptr_glTranslated(x, y, z);
}

extern void __stdcall glTranslatef(GLfloat x, GLfloat y, GLfloat z)
{
    ptr_glTranslatef(x, y, z);
}

extern void __stdcall glVertex2d(GLdouble x, GLdouble y)
{
    ptr_glVertex2d(x, y);
}

extern void __stdcall glVertex2dv(const GLdouble* v)
{
    ptr_glVertex2dv(v);
}

extern void __stdcall glVertex2f(GLfloat x, GLfloat y)
{
    ptr_glVertex2f(x, y);
}

extern void __stdcall glVertex2fv(const GLfloat* v)
{
    ptr_glVertex2fv(v);
}

extern void __stdcall glVertex2i(GLint x, GLint y)
{
    ptr_glVertex2i(x, y);
}

extern void __stdcall glVertex2iv(const GLint* v)
{
    ptr_glVertex2iv(v);
}

extern void __stdcall glVertex2s(GLshort x, GLshort y)
{
    ptr_glVertex2s(x, y);
}

extern void __stdcall glVertex2sv(const GLshort* v)
{
    ptr_glVertex2sv(v);
}

extern void __stdcall glVertex3d(GLdouble x, GLdouble y, GLdouble z)
{
    ptr_glVertex3d(x, y, z);
}

extern void __stdcall glVertex3dv(const GLdouble* v)
{
    ptr_glVertex3dv(v);
}

extern void __stdcall glVertex3f(GLfloat x, GLfloat y, GLfloat z)
{
    ptr_glVertex3f(x, y, z);
}

extern void __stdcall glVertex3fv(const GLfloat* v)
{
    ptr_glVertex3fv(v);
}

extern void __stdcall glVertex3i(GLint x, GLint y, GLint z)
{
    ptr_glVertex3i(x, y, z);
}

extern void __stdcall glVertex3iv(const GLint* v)
{
    ptr_glVertex3iv(v);
}

extern void __stdcall glVertex3s(GLshort x, GLshort y, GLshort z)
{
    ptr_glVertex3s(x, y, z);
}

extern void __stdcall glVertex3sv(const GLshort* v)
{
    ptr_glVertex3sv(v);
}

extern void __stdcall glVertex4d(GLdouble x, GLdouble y, GLdouble z, GLdouble w)
{
    ptr_glVertex4d(x, y, z, w);
}

extern void __stdcall glVertex4dv(const GLdouble* v)
{
    ptr_glVertex4dv(v);
}

extern void __stdcall glVertex4f(GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
    ptr_glVertex4f(x, y, z, w);
}

extern void __stdcall glVertex4fv(const GLfloat* v)
{
    ptr_glVertex4fv(v);
}

extern void __stdcall glVertex4i(GLint x, GLint y, GLint z, GLint w)
{
    ptr_glVertex4i(x, y, z, w);
}

extern void __stdcall glVertex4iv(const GLint* v)
{
    ptr_glVertex4iv(v);
}

extern void __stdcall glVertex4s(GLshort x, GLshort y, GLshort z, GLshort w)
{
    ptr_glVertex4s(x, y, z, w);
}

extern void __stdcall glVertex4sv(const GLshort* v)
{
    ptr_glVertex4sv(v);
}

extern void __stdcall glVertexPointer(GLint size, GLenum type, GLsizei stride, const GLvoid* pointer)
{
    ptr_glVertexPointer(size, type, stride, pointer);
}

extern void __stdcall glViewport(GLint x, GLint y, GLsizei width, GLsizei height)
{
    ptr_glViewport(x, y, width, height);
}



#if defined _WIN32 || defined _WIN64
extern __stdcall int wglChoosePixelFormat(HDC hdc, const PIXELFORMATDESCRIPTOR* ppfd)
{
    return ptr_wglChoosePixelFormat(hdc, ppfd);
}

extern __stdcall HGLRC wglCreateContext(HDC hdc)
{
    return ptr_wglCreateContext(hdc);
}

extern __stdcall HGLRC wglCreateLayerContext(HDC hdc, int iLayerPlane)
{
    return ptr_wglCreateLayerContext(hdc, iLayerPlane);
}

extern __stdcall BOOL wglCopyContext(HGLRC hglrcSrc, HGLRC hglrcDst, UINT mask)
{
    return ptr_wglCopyContext(hglrcSrc, hglrcDst,  mask);
}

extern __stdcall BOOL wglDeleteContext(HGLRC hglrc)
{
    return ptr_wglDeleteContext(hglrc);
}

extern __stdcall BOOL wglDescribeLayerPlane(HDC hdc, int iPixelFormat, int iLayerPlane, UINT nBytes, LPLAYERPLANEDESCRIPTOR plpd)
{
    return ptr_wglDescribeLayerPlane(hdc, iPixelFormat, iLayerPlane,  nBytes, plpd);
}

extern __stdcall int wglDescribePixelFormat(HDC hdc, int iPixelFormat, UINT nBytes, LPPIXELFORMATDESCRIPTOR ppfd)
{
    return ptr_wglDescribePixelFormat(hdc, iPixelFormat,  nBytes,  ppfd);
}

extern __stdcall HGLRC wglGetCurrentContext(void)
{
    return ptr_wglGetCurrentContext();
}

extern __stdcall HDC wglGetCurrentDC(void)
{
    return ptr_wglGetCurrentDC();
}

extern __stdcall PROC wglGetDefaultProcAddress(LPCSTR lpszProc)
{
    return ptr_wglGetDefaultProcAddress(lpszProc);
}

extern __stdcall int wglGetLayerPaletteEntries(HDC hdc, int iLayerPlane, int iStart, int cEntries, COLORREF* pcr)
{
    return ptr_wglGetLayerPaletteEntries(hdc, iLayerPlane, iStart, cEntries, pcr);
}

extern __stdcall int wglGetPixelFormat(HDC hdc)
{
    return ptr_wglGetPixelFormat(hdc);
}

extern __stdcall PROC wglGetProcAddress(LPCSTR lpszProc)
{
    return ptr_wglGetProcAddress(lpszProc);
}

extern __stdcall BOOL wglMakeCurrent(HDC hdc, HGLRC hglrc)
{
    return ptr_wglMakeCurrent(hdc, hglrc);
}

extern __stdcall BOOL wglRealizeLayerPalette(HDC hdc, int iLayerPlane, BOOL bRealize)
{
    return ptr_wglRealizeLayerPalette(hdc, iLayerPlane, bRealize);
}

extern __stdcall int wglSetLayerPaletteEntries(HDC hdc, int iLayerPlane, int iStart, int cEntries, const COLORREF* pcr)
{
    return ptr_wglSetLayerPaletteEntries(hdc, iLayerPlane, iStart, cEntries, pcr);
}

extern __stdcall BOOL wglSetPixelFormat(HDC hdc, int iPixelFormat, const PIXELFORMATDESCRIPTOR* ppfd)
{
    return ptr_wglSetPixelFormat(hdc, iPixelFormat, ppfd);
}

extern __stdcall BOOL wglSwapLayerBuffers(HDC hdc, UINT fuPlanes)
{
    return ptr_wglSwapLayerBuffers(hdc, fuPlanes);
}

extern __stdcall BOOL wglUseFontBitmapsW(HDC hdc, DWORD first, DWORD count, DWORD listBase)
{
    return ptr_wglUseFontBitmapsW(hdc, first, count, listBase);
}

extern __stdcall BOOL wglUseFontBitmapsA(HDC hdc, DWORD first, DWORD count, DWORD listBase)
{
    return ptr_wglUseFontBitmapsA(hdc, first, count, listBase);
}

extern __stdcall BOOL wglUseFontOutlinesW(HDC hdc, DWORD first, DWORD count, DWORD listBase, FLOAT deviation, FLOAT extrusion, int format, LPGLYPHMETRICSFLOAT lpgmf)
{
    return ptr_wglUseFontOutlinesW(hdc, first, count, listBase, deviation, extrusion, format, lpgmf);
}

extern __stdcall BOOL wglUseFontOutlinesA(HDC hdc, DWORD first, DWORD count, DWORD listBase, FLOAT deviation, FLOAT extrusion, int format, LPGLYPHMETRICSFLOAT lpgmf)
{
    return ptr_wglUseFontOutlinesA(hdc, first, count, listBase, deviation, extrusion, format, lpgmf);
}

#else

extern GLXFBConfig* glXChooseFBConfig(Display* dpy, int screen, const int* attrib_list, int* nelements)
{
    return ptr_glXChooseFBConfig(dpy, screen, attrib_list, nelements);
}

extern XVisualInfo* glXChooseVisual(Display* dpy, int screen, int* attribList)
{
    return ptr_glXChooseVisual(dpy, screen, attribList);
}

extern void glXCopyContext(Display* dpy, GLXContext src, GLXContext dst, unsigned long mask)
{
    return ptr_glXCopyContext(dpy, src, dst, mask);
}

extern GLXContext glXCreateContext(Display* dpy, XVisualInfo* vis, GLXContext shareList, Bool direct)
{
    return ptr_glXCreateContext(dpy, vis, shareList, direct);
}

extern GLXPixmap glXCreatePixmap(Display* dpy, GLXFBConfig config, Pixmap pixmap, const int* attrib_list)
{
    return ptr_glXCreatePixmap(dpy, config, pixmap, attrib_list);
}

extern GLXContext glXCreateNewContext(Display* dpy, GLXFBConfig config, int render_type, GLXContext share_list, Bool direct)
{
    return ptr_glXCreateNewContext(dpy, config, render_type, share_list, direct);
}

extern GLXPbuffer glXCreatePbuffer(Display* dpy, GLXFBConfig config, const int* attrib_list)
{
    return ptr_glXCreatePbuffer(dpy, config, attrib_list);
}

extern GLXWindow glXCreateWindow(Display* dpy, GLXFBConfig config, Window win, const int* attrib_list)
{
    return ptr_glXCreateWindow(dpy, config, win, attrib_list);
}

extern void glXDestroyContext(Display* dpy, GLXContext ctx)
{
    return ptr_glXDestroyContext(dpy, ctx);
}

extern void glXDestroyGLXPixmap(Display* dpy, GLXPixmap pixmap)
{
    return ptr_glXDestroyGLXPixmap(dpy, pixmap);
}

extern void glXDestroyPbuffer(Display* dpy, GLXPbuffer pbuf)
{
    return ptr_glXDestroyPbuffer(dpy, pbuf);
}

extern void glXDestroyPixmap(Display* dpy, GLXPixmap pixmap)
{
    return ptr_glXDestroyPixmap(dpy, pixmap);
}

extern void glXDestroyWindow(Display* dpy, GLXWindow win)
{
    return ptr_glXDestroyWindow(dpy, win);
}

extern const char* glXGetClientString(Display* dpy, int name)
{
    return ptr_glXGetClientString(dpy, name);
}

extern int glXGetConfig(Display* dpy, XVisualInfo* visual, int attrib, int* value)
{
    return ptr_glXGetConfig(dpy, visual, attrib, value);
}

extern GLXContext glXGetCurrentContext(void)
{
    return ptr_glXGetCurrentContext();
}

extern Display* glXGetCurrentDisplay(void)
{
    return ptr_glXGetCurrentDisplay();
}

extern GLXDrawable glXGetCurrentDrawable(void)
{
    return ptr_glXGetCurrentDrawable();
}

extern GLXDrawable glXGetCurrentReadDrawable(void)
{
    return ptr_glXGetCurrentReadDrawable();
}

extern const char* glXGetDriverConfig(const char* driverName)
{
    return ptr_glXGetDriverConfig(driverName);
}

extern GLXFBConfig* glXGetFBConfigs(Display* dpy, int screen, int* nelements)
{
    return ptr_glXGetFBConfigs(dpy, screen, nelements);
}

extern __GLXextFuncPtr glXGetProcAddress(const GLubyte *procName)
{
    return ptr_glXGetProcAddress(procName);
}

extern void glXGetSelectedEvent (Display* dpy, GLXDrawable draw, unsigned long* event_mask)
{
    return ptr_glXGetSelectedEvent(dpy, draw, event_mask);
}

extern XVisualInfo* glXGetVisualFromFBConfig(Display* dpy, GLXFBConfig config)
{
    return ptr_glXGetVisualFromFBConfig(dpy, config);
}

extern Bool glXIsDirect(Display* dpy, GLXContext ctx)
{
    return ptr_glXIsDirect(dpy, ctx);
}

extern Bool glXMakeContextCurrent(Display* dpy, GLXDrawable draw, GLXDrawable read, GLXContext ctx)
{
    return ptr_glXMakeContextCurrent(dpy, draw, read, ctx);
}

extern Bool glXMakeCurrent(Display* dpy, GLXDrawable drawable, GLXContext ctx)
{
    return ptr_glXMakeCurrent(dpy, drawable, ctx);
}

extern int glXQueryContext(Display* dpy, GLXContext ctx, int attribute, int* value)
{
    return ptr_glXQueryContext(dpy, ctx, attribute, value);
}

extern void glXQueryDrawable(Display* dpy, GLXDrawable draw, int attribute, unsigned int* value)
{
    return ptr_glXQueryDrawable(dpy, draw, attribute, value);
}

extern Bool glXQueryExtension(Display* dpy, int* errorb, int* event)
{
    return ptr_glXQueryExtension(dpy, errorb, event);
}

extern const char* glXQueryExtensionsString(Display* dpy, int screen)
{
    return ptr_glXQueryExtensionsString(dpy, screen);
}

extern const char* glXQueryServerString(Display* dpy, int screen, int name)
{
    return ptr_glXQueryServerString(dpy, screen, name);
}

extern Bool glXQueryVersion(Display* dpy, int* maj, int* min)
{
    return ptr_glXQueryVersion(dpy, maj, min);
}

extern void glXSelectEvent(Display* dpy, GLXDrawable drawable, unsigned long mask)
{
    return ptr_glXSelectEvent(dpy, drawable, mask);
}

extern void glXUseXFont(Font font, int first, int count, int list)
{
    return ptr_glXUseXFont(font, first, count, list);
}

extern void glXWaitGL(void)
{
    return ptr_glXWaitGL();
}

extern void glXWaitX(void)
{
    return ptr_glXWaitX();
}
#endif
