#ifndef GAMECOMPONENT_H_INCLUDED
#define GAMECOMPONENT_H_INCLUDED

class gameComponent{
    void numberZero(int idx , int place){
        float x = 243.5 + ((idx - 1) * 110);
        float y = 15;
        float add = ((place - 1) * 5.25) + ((place - 1) * 23);

        glBegin(GL_QUADS);
            glVertex2f(x + 5.25 + add , y + 31);
            glVertex2f(x + 10.25 + add , y + 36);
            glVertex2f(x + 23.25 + add , y + 36);
            glVertex2f(x + 28.25 + add , y + 31);

            glVertex2f(x + 5.25 + add , y + 9);
            glVertex2f(x + 10.25 + add , y + 4);
            glVertex2f(x + 23.25 + add , y + 4);
            glVertex2f(x + 28.25 + add , y + 9);
            glVertex2f(x + 23.25 + add , y + 31);
            glVertex2f(x + 23.25 + add , y + 9);
            glVertex2f(x + 28.25 + add , y + 9);
            glVertex2f(x + 28.25 + add , y + 31);

            glVertex2f(x + 10.25 + add , y + 31);
            glVertex2f(x + 10.25 + add , y + 9);
            glVertex2f(x + 5.25 + add , y + 9);
            glVertex2f(x + 5.25 + add , y + 31);

        glEnd();
    }

    void numberOne(int idx , int place){
        float x = 243.5 + ((idx - 1) * 110);
        float y = 15;
        float add = ((place - 1) * 5.25) + ((place - 1) * 23);

        glBegin(GL_QUADS);
            glVertex2f(x + 23.25 + add , y + 31);
            glVertex2f(x + 18.25 + add , y + 36);
            glVertex2f(x + 10.25 + add , y + 36);
            glVertex2f(x + 10.25 + add , y + 31);

            glVertex2f(x + 23.25 + add , y + 31);
            glVertex2f(x + 18.25 + add , y + 31);
            glVertex2f(x + 18.25 + add , y + 4);
            glVertex2f(x + 23.25 + add , y + 4);

        glEnd();
    }

    void numberTwo(int idx , int place){
        float x = 243.5 + ((idx - 1) * 110);
        float y = 15;
        float add = ((place - 1) * 5.25) + ((place - 1) * 23);

        glBegin(GL_QUADS);
            glVertex2f(x + 5.25 + add , y + 31);
            glVertex2f(x + 10.25 + add , y + 36);
            glVertex2f(x + 23.25 + add , y + 36);
            glVertex2f(x + 28.25 + add , y + 31);

            glVertex2f(x + 10.25 + add , y + 31);
            glVertex2f(x + 5.25 + add , y + 31);
            glVertex2f(x + 5.25 + add , y + 26);
            glVertex2f(x + 10.25 + add , y + 26);

            glVertex2f(x + 23.25 + add , y + 31);
            glVertex2f(x + 28.25 + add , y + 31);
            glVertex2f(x + 28.25 + add , y + 21);
            glVertex2f(x + 23.25 + add , y + 21);

            glVertex2f(x + 5.25 + add , y + 16);
            glVertex2f(x + 10.25 + add , y + 21);
            glVertex2f(x + 28.25 + add , y + 21);
            glVertex2f(x + 23.25 + add , y + 16);

            glVertex2f(x + 5.25 + add , y + 16);
            glVertex2f(x + 10.25 + add , y + 16);
            glVertex2f(x + 10.25 + add , y + 4);
            glVertex2f(x + 5.25 + add , y + 4);

            glVertex2f(x + 10.25 + add , y + 4);
            glVertex2f(x + 10.25 + add , y + 9);
            glVertex2f(x + 28.25 + add , y + 9);
            glVertex2f(x + 23.25 + add , y + 4);

        glEnd();
    }

    void numberThree(int idx , int place){
        float x = 243.5 + ((idx - 1) * 110);
        float y = 15;
        float add = ((place - 1) * 5.25) + ((place - 1) * 23);

        glBegin(GL_QUADS);
            glVertex2f(x + 7.25 + add , y + 31);
            glVertex2f(x + 7.25 + add , y + 36);
            glVertex2f(x + 23.25 + add , y + 36);
            glVertex2f(x + 28.25 + add , y + 31);

            glVertex2f(x + 23.25 + add , y + 31);
            glVertex2f(x + 28.25 + add , y + 31);
            glVertex2f(x + 28.25 + add , y + 23);
            glVertex2f(x + 23.25 + add , y + 18);


            glVertex2f(x + 7.25 + add , y + 18);
            glVertex2f(x + 7.25 + add , y + 23);
            glVertex2f(x + 28.25 + add , y + 23);
            glVertex2f(x + 23.25 + add , y + 18);

            glVertex2f(x + 23.25 + add , y + 21);
            glVertex2f(x + 28.25 + add , y + 16);
            glVertex2f(x + 28.25 + add , y + 9);
            glVertex2f(x + 23.25 + add , y + 4);

            glVertex2f(x + 23.25 + add , y + 9);
            glVertex2f(x + 23.25 + add , y + 4);
            glVertex2f(x + 7.25 + add , y + 4);
            glVertex2f(x + 7.25 + add , y + 9);
        glEnd();
    }

    void numberFour(int idx , int place){
        float x = 243.5 + ((idx - 1) * 110);
        float y = 15;
        float add = ((place - 1) * 5.25) + ((place - 1) * 23);

        glBegin(GL_QUADS);
            glVertex2f(x + 23.25 + add , y + 36);
            glVertex2f(x + 28.25 + add , y + 36);
            glVertex2f(x + 28.25 + add , y + 4);
            glVertex2f(x + 23.25 + add , y + 4);

            glVertex2f(x + 23.25 + add , y + 36);
            glVertex2f(x + 28.25 + add , y + 36);
            glVertex2f(x + 5.25  + add , y + 15);
            glVertex2f(x + 5.25  + add , y + 21);

            glVertex2f(x + 5.25 + add , y + 15);
            glVertex2f(x + 5.25 + add , y + 19);
            glVertex2f(x + 23.25 + add , y + 19);
            glVertex2f(x + 18.25 + add , y + 15);

        glEnd();
    }

    void numberFive(int idx , int place){
        float x = 243.5 + ((idx - 1) * 110);
        float y = 15;
        float add = ((place - 1) * 5.25) + ((place - 1) * 23);

        glBegin(GL_QUADS);
            glVertex2f(x + 10.25 + add , y + 36);
            glVertex2f(x + 10.25 + add , y + 31);
            glVertex2f(x + 28.25 + add , y + 31);
            glVertex2f(x + 23.25 + add , y + 36);

            glVertex2f(x + 5.25 + add , y + 36);
            glVertex2f(x + 10.25 + add , y + 36);
            glVertex2f(x + 10.25 + add , y + 19);
            glVertex2f(x + 5.25 + add , y + 23);

            glVertex2f(x + 10.25 + add , y + 23);
            glVertex2f(x + 10.25 + add , y + 19);
            glVertex2f(x + 28.25 + add , y + 19);
            glVertex2f(x + 23.25 + add , y + 23);

            glVertex2f(x + 23.25 + add , y + 19);
            glVertex2f(x + 28.25 + add , y + 19);
            glVertex2f(x + 28.25 + add , y + 9);
            glVertex2f(x + 23.25 + add , y + 4);

            glVertex2f(x + 23.25 + add , y + 4);
            glVertex2f(x + 23.25 + add , y + 9);
            glVertex2f(x + 5.25 + add , y + 9);
            glVertex2f(x + 10.25 + add , y + 4);

            glVertex2f(x + 5.25 + add , y + 9);
            glVertex2f(x + 10.25 + add , y + 9);
            glVertex2f(x + 10.25 + add , y + 14);
            glVertex2f(x + 5.25 + add , y + 14);

        glEnd();
    }

    void numberSix(int idx , int place){
        float x = 243.5 + ((idx - 1) * 110);
        float y = 15;
        float add = ((place - 1) * 5.25) + ((place - 1) * 23);

        glBegin(GL_QUADS);
            glVertex2f(x + 5.25 + add , y + 31);
            glVertex2f(x + 10.25 + add , y + 36);
            glVertex2f(x + 23.25 + add , y + 36);
            glVertex2f(x + 28.25 + add , y + 31);

            glVertex2f(x + 5.25 + add , y + 31);
            glVertex2f(x + 10.25 + add , y + 31);
            glVertex2f(x + 10.25 + add , y + 4);
            glVertex2f(x + 5.25 + add , y + 9);

            glVertex2f(x + 10.25 + add , y + 23);
            glVertex2f(x + 10.25 + add , y + 19);
            glVertex2f(x + 28.25 + add , y + 19);
            glVertex2f(x + 23.25 + add , y + 23);

            glVertex2f(x + 23.25 + add , y + 19);
            glVertex2f(x + 28.25 + add , y + 19);
            glVertex2f(x + 28.25 + add , y + 9);
            glVertex2f(x + 23.25 + add , y + 4);

            glVertex2f(x + 23.25 + add , y + 4);
            glVertex2f(x + 23.25 + add , y + 9);
            glVertex2f(x + 10.25 + add , y + 9);
            glVertex2f(x + 10.25 + add , y + 4);

        glEnd();
    }

    void numberSeven(int idx , int place){
        float x = 243.5 + ((idx - 1) * 110);
        float y = 15;
        float add = ((place - 1) * 5.25) + ((place - 1) * 23);

        glBegin(GL_QUADS);
            glVertex2f(x + 5.25 + add , y + 36);
            glVertex2f(x + 10.25 + add , y + 31);
            glVertex2f(x + 28.25 + add , y + 31);
            glVertex2f(x + 23.25 + add , y + 36);

            glVertex2f(x + 23.25 + add , y + 36);
            glVertex2f(x + 28.25 + add , y + 31);
            glVertex2f(x + 10.25 + add , y + 4);
            glVertex2f(x + 5.25 + add , y + 4);

        glEnd();
    }

    void numberEight(int idx , int place){
        float x = 243.5 + ((idx - 1) * 110);
        float y = 15;
        float add = ((place - 1) * 5.25) + ((place - 1) * 23);

        glBegin(GL_QUADS);
            glVertex2f(x + 5.25 + add , y + 31);
            glVertex2f(x + 10.25 + add , y + 36);
            glVertex2f(x + 23.25 + add , y + 36);
            glVertex2f(x + 28.25 + add , y + 31);

            glVertex2f(x + 5.25 + add , y + 31);
            glVertex2f(x + 10.25 + add , y + 31);
            glVertex2f(x + 10.25 + add , y + 18);
            glVertex2f(x + 5.25 + add , y + 22);

            glVertex2f(x + 10.25 + add , y + 22);
            glVertex2f(x + 10.25 + add , y + 18);
            glVertex2f(x + 23.25 + add , y + 18);
            glVertex2f(x + 23.25 + add , y + 22);

            glVertex2f(x + 10.25 + add , y + 22);
            glVertex2f(x + 10.25 + add , y + 4);
            glVertex2f(x + 5.25 + add , y + 9);
            glVertex2f(x + 5.25 + add , y + 18);

            glVertex2f(x + 23.25 + add , y + 31);
            glVertex2f(x + 28.25 + add , y + 31);
            glVertex2f(x + 28.25 + add , y + 22);
            glVertex2f(x + 23.25 + add , y + 18);

            glVertex2f(x + 23.25 + add , y + 22);
            glVertex2f(x + 28.25 + add , y + 18);
            glVertex2f(x + 28.25 + add , y + 9);
            glVertex2f(x + 23.25 + add , y + 4);

            glVertex2f(x + 23.25 + add , y + 22);
            glVertex2f(x + 28.25 + add , y + 18);
            glVertex2f(x + 28.25 + add , y + 9);
            glVertex2f(x + 23.25 + add , y + 4);

            glVertex2f(x + 23.25 + add , y + 9);
            glVertex2f(x + 23.25 + add , y + 4);
            glVertex2f(x + 10.25 + add , y + 4);
            glVertex2f(x + 10.25 + add , y + 9);

        glEnd();
    }

    void numberNine(int idx , int place){
        float x = 243.5 + ((idx - 1) * 110);
        float y = 15;
        float add = ((place - 1) * 5.25) + ((place - 1) * 23);
        glBegin(GL_QUADS);
            glVertex2f(x + 5.25 + add , y + 31);
            glVertex2f(x + 10.25 + add , y + 36);
            glVertex2f(x + 23.25 + add , y + 36);
            glVertex2f(x + 28.25 + add , y + 31);

            glVertex2f(x + 5.25 + add , y + 31);
            glVertex2f(x + 10.25 + add , y + 31);
            glVertex2f(x + 10.25 + add , y + 18);
            glVertex2f(x + 5.25 + add , y + 22);

            glVertex2f(x + 10.25 + add , y + 22);
            glVertex2f(x + 10.25 + add , y + 18);
            glVertex2f(x + 23.25 + add , y + 18);
            glVertex2f(x + 23.25 + add , y + 22);

            glVertex2f(x + 23.25 + add , y + 31);
            glVertex2f(x + 28.25 + add , y + 31);
            glVertex2f(x + 28.25 + add , y + 9);
            glVertex2f(x + 23.25 + add , y + 4);

            glVertex2f(x + 23.25 + add , y + 9);
            glVertex2f(x + 23.25 + add , y + 4);
            glVertex2f(x + 10.25 + add , y + 4);
            glVertex2f(x + 5.25 + add , y + 9);

        glEnd();
    }

    void print(int x, int y, char *string){
        glColor3f(0,0,1);
        //set the position of the text in the window using the x and y coordinates
        glRasterPos2f(x, y);
        //get the length of the string to display
        int len = (int)strlen(string);

        //loop to display character by character
        for (int i = 0; i < len; i++)
            glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, string[i]);
    }

public:
    void statusBar(){
        glColor3f(0.43921568627451,0.458823529411765,0.443137254901961);
        float x = 243.5;
        glBegin(GL_QUADS);
            glVertex2f(0 , 0);
            glVertex2f(0 , 75);
            glVertex2f(1350 , 75);
            glVertex2f(1350 , 0);

        glEnd();

        print(270 , 60 , "value");
        print(360 , 60 , "collected");
        print(485 , 60 , "quota");
        print(600 , 60 , "level");
        print(695 , 60 , "seconds");
        print(820 , 60 , "lives");
        print(975 , 60 , "score");

        glBegin(GL_QUADS);
            for(int i = 0 ; i < 7 ; i++ , x += 110){
                glColor3f(0 , 0 , 0);
                glVertex2f(x , 15);
                glVertex2f(x , 55);
                glVertex2f(x + (i == 6 ? 203 : 90) , 55);
                glVertex2f(x + (i == 6 ? 203 : 90) , 15);
            }
        glEnd();
        glColor3f(0.682352941176471,0.694117647058824,0.67843137254902);
        glBegin(GL_LINES);
            glVertex2f(0 , 75);
            glVertex2f(1350 , 75);
        glEnd();

        glBegin(GL_LINES);
            x = 243.5;
            for(int i = 0 ; i < 7 ; i++ , x += 110){
                glVertex2f(x , 15);
                glVertex2f(x , 55);
                glVertex2f(x + (i == 6 ? 203 : 90) , 55);
                glVertex2f(x + (i == 6 ? 203 : 90) , 15);
                glVertex2f(x , 15);
                glVertex2f(x + (i == 6 ? 203 : 90) , 15);
                glVertex2f(x , 55);
                glVertex2f(x + (i == 6 ? 203 : 90) , 55);
            }
        glEnd();
    }

    void drawNumber(int number , int idx){
        glColor3f(0.76078431372549,0.584313725490196,0.415686274509804);
        int place = idx == 7 ? 7 : 3;
        while(number){
            int rem = number % 10;
            if(rem == 0)
                numberZero(idx , place);
            else if(rem == 1)
                numberOne(idx , place);
            else if(rem == 2)
                numberTwo(idx , place);
            else if(rem == 3)
                numberThree(idx , place);
            else if(rem == 4)
                numberFour(idx , place);
            else if(rem == 5)
                numberFive(idx , place);
            else if(rem == 6)
                numberSix(idx , place);
            else if(rem == 7)
                numberSeven(idx , place);
            else if(rem == 8)
                numberEight(idx , place);
            else
                numberNine(idx , place);
            number /= 10;
            place--;
        }
        while(place--)
            numberZero(idx , place + 1);
    }

    void redBricks(int x, int y){
		glBegin(GL_POLYGON);
		glColor3f(0.67843137254902, 0.36078431372549, 0.247058823529412);;
		glVertex2f(x - 25, y - 25);
		glVertex2f(x - 25, y + 25);
		glVertex2f(x + 25, y + 25);
		glVertex2f(x + 25, y - 25);
		glEnd();


		glLineWidth(GLfloat(3));
		glBegin(GL_LINE_LOOP);
		glColor3f(0.592156862745098, 0.447058823529412, 0.356862745098039);
		glVertex2f(x - 25, y - 8.5);
		glVertex2f(x + 23, y - 8.5);
		glVertex2f(x + 23, y - 25);
		glVertex2f(x - 25, y - 25);
		glEnd();


		glBegin(GL_LINE_LOOP);
		glColor3f(0.592156862745098, 0.447058823529412, 0.356862745098039);
		glVertex2f(x - 25, y + 8);
		glVertex2f(x + 23, y + 8);
		glVertex2f(x + 23, y + 23);
		glVertex2f(x - 25, y + 23);

		glEnd();

		glBegin(GL_LINE_STRIP);
		glColor3f(0.592156862745098, 0.447058823529412, 0.356862745098039);
		glVertex2f(x - 5, y + 8);
		glVertex2f(x - 5, y - 8.5);
		glEnd();


	}

    void drawObject(int centerx , int centery , GLuint obj){
        glBindTexture (GL_TEXTURE_2D, obj);
        glBegin(GL_POLYGON);
            glTexCoord2f( 0.0f, 0.0f ); glVertex2f(centerx-25,centery-25);
            glTexCoord2f( 1.0f, 0.0f ); glVertex2f(centerx+25,centery-25);
            glTexCoord2f( 1.0f, 1.0f ); glVertex2f(centerx+25,centery+25);
            glTexCoord2f( 0.0f, 1.0f ); glVertex2f(centerx-25,centery+25);
        glEnd();
    }

    void drawMenu( GLuint obj) {
		glBindTexture(GL_TEXTURE_2D, obj);
		glBegin(GL_POLYGON);
            glTexCoord2f(0.0f, 0.0f); glVertex2f(0,0);
            glTexCoord2f(1.0f, 0.0f); glVertex2f(1350,0);
            glTexCoord2f(1.0f, 1.0f); glVertex2f(1350, 680);
            glTexCoord2f(0.0f, 1.0f); glVertex2f(0, 680);
		glEnd();
	}

    void drawFilledCircle(GLfloat x, GLfloat y, GLfloat xRadius , GLfloat yRadius , int stratAngle , int endAngle){

        float PI=3.14;
        int triangleAmount = 360;
        GLfloat twicePi = 2.0 * PI;
        glBegin(GL_POLYGON);
            for(int i = 0 ; i <= triangleAmount ; i++) {
                if(i >= stratAngle && i <= endAngle)
                    glVertex2f(
                        x + (xRadius * cos(i * twicePi / triangleAmount)),
                        y + (yRadius * sin(i * twicePi / triangleAmount))
                    );
            }
        glEnd();
    }

};
#endif // GAMECOMPONENT_H_INCLUDED
