#ifndef CUBEMAP_H
#define	CUBEMAP_H

#include <string>
#include <GL/glew.h>
#include <STB_image/stb_image.h>

using namespace std;

class CubemapTexture
{
public:
    
    CubemapTexture(const string& PosXFilename,
                   const string& NegXFilename,
                   const string& PosYFilename,
                   const string& NegYFilename,
                   const string& PosZFilename,
                   const string& NegZFilename);

    ~CubemapTexture();
    
    bool Load();

    void Bind(GLenum TextureUnit);

private:
   
    string m_fileNames[6];
    GLuint m_textureObj;
};

#endif

