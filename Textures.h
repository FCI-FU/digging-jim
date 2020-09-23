#include<windows.h>
#ifdef _APPLE_
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#include <GL/glaux.h>
#include <GL/gl.h>
#include <GL/glu.h>
#endif
#include <stdlib.h>
#include<math.h>
#include<bits/stdc++.h>

#ifndef TEXTURES_H_INCLUDED
#define TEXTURES_H_INCLUDED


class Textures{

public:
    GLuint images[12];

    void initImages(){
        /***
        0 - > wall
        1 - > dust
        2 - > rock
        3 - > diamond
        4 - > enemy
        5 - > open door
        6 - > closed door
        7 - > brick
        8 - > character
        9 - > menu background
        10 - > game over
        ***/
        images[0] = loadBMP_custom("C:\\Users\\Abdalrahman\\Desktop\\codeforces\\digging jim\\Textures\\wall.bmp");
        images[1] = loadBMP_custom("C:\\Users\\Abdalrahman\\Desktop\\codeforces\\digging jim\\Textures\\dust.bmp");
        images[2] = loadBMP_custom("C:\\Users\\Abdalrahman\\Desktop\\codeforces\\digging jim\\Textures\\rock.bmp");
        images[3] = loadBMP_custom("C:\\Users\\Abdalrahman\\Desktop\\codeforces\\digging jim\\Textures\\DIAMOND.bmp");
        images[4] = loadBMP_custom("C:\\Users\\Abdalrahman\\Desktop\\codeforces\\digging jim\\Textures\\enemy.bmp");
        images[5] = loadBMP_custom("C:\\Users\\Abdalrahman\\Desktop\\codeforces\\digging jim\\Textures\\enter.bmp");
        images[6] = loadBMP_custom("C:\\Users\\Abdalrahman\\Desktop\\codeforces\\digging jim\\Textures\\exit.bmp");
        images[7] = loadBMP_custom("C:\\Users\\Abdalrahman\\Desktop\\codeforces\\digging jim\\Textures\\brick.bmp");
        images[8] = loadBMP_custom("C:\\Users\\Abdalrahman\\Desktop\\codeforces\\digging jim\\Textures\\charac.bmp");
        images[9] = loadBMP_custom("C:\\Users\\Abdalrahman\\Desktop\\codeforces\\digging jim\\Textures\\menu.bmp");
        images[10] = loadBMP_custom("C:\\Users\\Abdalrahman\\Desktop\\codeforces\\digging jim\\Textures\\GameOver.bmp");
        images[11] = loadBMP_custom("C:\\Users\\Abdalrahman\\Desktop\\codeforces\\digging jim\\Textures\\win.bmp");

    }

    GLuint loadBMP_custom(const char * imagepath){

        // Data read from the header of the BMP file
        unsigned char header[54];
        unsigned int dataPos;
        unsigned int imageSize;
        unsigned int width, height;
        // Actual RGB data
        unsigned char * data;

        // Open the file
        FILE * file = fopen(imagepath,"rb");
        if (!file){printf("Image could not be opened\n"); return 0;}

        // Read the header, i.e. the 54 first bytes

        // If less than 54 byes are read, problem
        if ( fread(header, 1, 54, file)!=54 ){
            printf("Not a correct BMP file\n");
            return false;
        }
        // A BMP files always begins with "BM"
        if ( header[0]!='B' || header[1]!='M' ){
            printf("Not a correct BMP file\n");
            return 0;
        }
        // Make sure this is a 24bpp file
        if ( *(int*)&(header[0x1E])!=0  )         {printf("Not a correct BMP file\n");    return 0;}
        if ( *(int*)&(header[0x1C])!=24 )         {printf("Not a correct BMP file\n");    return 0;}

        // Read the information about the image
        dataPos    = *(int*)&(header[0x0A]);
        imageSize  = *(int*)&(header[0x22]);
        width      = *(int*)&(header[0x12]);
        height     = *(int*)&(header[0x16]);

        // Some BMP files are misformatted, guess missing information
        if (imageSize==0)    imageSize=width*height*3; // 3 : one byte for each Red, Green and Blue component
        if (dataPos==0)      dataPos=54; // The BMP header is done that way

        // Create a buffer
        data = new unsigned char [imageSize];

        // Read the actual data from the file into the buffer
        fread(data,1,imageSize,file);

        // Everything is in memory now, the file wan be closed
        fclose (file);

        // Create one OpenGL texture
        GLuint textureID;
        glGenTextures(1, &textureID);

        // "Bind" the newly created texture : all future texture functions will modify this texture
        glBindTexture(GL_TEXTURE_2D, textureID);
        glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE,GL_MODULATE);
        glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER,GL_LINEAR_MIPMAP_NEAREST);

        glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER,GL_LINEAR);
        glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S,GL_REPEAT);
        glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T,GL_REPEAT);

        gluBuild2DMipmaps(GL_TEXTURE_2D, 3, width, height, GL_BGR_EXT, GL_UNSIGNED_BYTE, data);
        // Return the ID of the texture we just created
        free(data);
        free(header);
        return textureID;
    }

};
#endif // TEXTURES_H_INCLUDED
