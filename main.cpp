/*
 * GLUT Shapes Demo
 *
 * Written by Nigel Stewart November 2003
 *
 * This program is test harness for the sphere, cone
 * and torus shapes in GLUT.
 *
 * Spinning wireframe and smooth shaded shapes are
 * displayed until the ESC or q key is pressed.  The
 * number of geometry stacks and slices can be adjusted
 * using the + and - keys.
 */
#include<windows.h>
#ifdef _APPLE_
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <stdlib.h>
#include<math.h>
#include<bits/stdc++.h>
#include "gameComponent.h"
#include "Textures.h"
#include "Levels.h"
#include<Mmsystem.h>

using namespace std;
int mainX , mainY, CharX , CharY , posX , posY;
int Score , lifes , qouta , seconds , val , collected;
int Timer;
bool enterPressed  , openDoor , MenuPlayed , die , dieCheat , win , timerStop;
float objectDetails[34][50][3] , add;
string cheat;
gameComponent g;
Textures gameObjects;
Levels level;
GLuint tempGlUnit;

bool endGame(int Tox , int Toy){
    if(posX + Tox == 9&& posY + Toy == 47 && collected >= qouta){
        sndPlaySound(TEXT("C:\\Users\\Abdalrahman\\Desktop\\codeforces\\digging jim\\Audio\\Yuppy.wav"), SND_ASYNC);
        win = 1;
        return 1;
    }
    return 0;
}

void reset(){
    enterPressed = 1;
    seconds = 120;
    collected = Score = timerStop = 0;
    Timer = win = die = dieCheat = 0;
    mainX = CharX = CharY = 0;
    lifes = 3;
    mainY = -820;
    posX = qouta = 30;
    val = 5;
    posY = 2;
    cheat = "";
}

void addScore(int toX , int toY){
    if(level.points[posX + toX][posY + toY] == 2){
        collected++;
        Score += val;
        sndPlaySound(TEXT("C:\\Users\\Abdalrahman\\Desktop\\codeforces\\digging jim\\Audio\\DiamondCollect.wav"), SND_ASYNC);
    }
    if(level.points[posX + toX][posY + toY] == 2 && collected == qouta){
        val *= 2;
        tempGlUnit = gameObjects.images[5];
        sndPlaySound(TEXT("C:\\Users\\Abdalrahman\\Desktop\\codeforces\\digging jim\\Audio\\ReachedNumber.wav"), SND_ASYNC);
    }
    if(level.points[posX + toX][posY + toY] == -1){
        sndPlaySound(TEXT("C:\\Users\\Abdalrahman\\Desktop\\codeforces\\digging jim\\Audio\\Digging.wav"), SND_ASYNC);
    }
}

void dieFunc(int i , int j){
    lifes = dieCheat ? lifes : lifes - 1;
    sndPlaySound(TEXT("C:\\Users\\Abdalrahman\\Desktop\\codeforces\\digging jim\\Audio\\Explosion.wav"), SND_ASYNC);

    level.setLevelOne();
    int tmp = lifes;
    int cheatOn = dieCheat;
    int timerOn = timerStop;
    reset();
    lifes = tmp;
    dieCheat = cheatOn;
    timerStop = timerOn;
    if(lifes == 0){
        die = 1;
        enterPressed=1;
    }
    objectDetails[i+1][j][2] = 0;
}

void keypressed(unsigned char key,int x, int y){
    cheat += char(key);
    if(cheat == "neverdie"){
        sndPlaySound(TEXT("C:\\Users\\Abdalrahman\\Desktop\\codeforces\\digging jim\\Audio\\Yuppy.wav"), SND_ASYNC);
        dieCheat = 1;
        lifes = 999;

    }
    if(cheat == "timeroff"){
        sndPlaySound(TEXT("C:\\Users\\Abdalrahman\\Desktop\\codeforces\\digging jim\\Audio\\Yuppy.wav"), SND_ASYNC);
        timerStop = 1;
    }
    if(cheat.size() > 8)
        cheat = "";
    if (key==13){
        if(win)
            win = enterPressed = 0;
        else if(die)
            die = enterPressed = 0;
        else if(!enterPressed){
            level.setLevelOne();
            reset();
            openDoor = 0;
        }
    }
    else if(key == 27){
        if(!enterPressed)
            exit(0);
        else
            enterPressed = 0;
    }
}

void OnDisplay();
void SetTransformations();

void processSpecialKeys(int key, int xx, int yy) {
    cheat = "";
    switch (key) {
		case GLUT_KEY_LEFT :
		    if(!endGame(0 , -1)){
                if(mainX < 0 && mainX + CharX < 0 && level.canGo(posX , posY,0 , -1 , level)){
                    addScore(0 , -1);
                    mainX += 50;
                    level.points[posX][posY] = 0;
                    level.points[posX][posY - 1] = 10;
                    posY--;
                }
                else if(mainX + CharX > -50 && level.canGo(posX , posY,0 , -1 , level)){
                    addScore(0 , -1);
                    CharX -= 50;
                    level.points[posX][posY] = 0;
                    level.points[posX][posY - 1] = 10;
                    posY--;
                }
		    }
            break;

		case GLUT_KEY_RIGHT :
		    if(!endGame(0 , 1)){
                if(mainX > -1150 && level.canGo(posX , posY,0 , 1 , level)){
                    addScore(0 , 1);
                    mainX -= 50;
                    level.points[posX][posY] = 0;
                    level.points[posX][posY + 1] = 10;
                    posY++;
                }
                else if(mainX + CharX < 0 && level.canGo(posX , posY,0 , 1 , level)){
                    addScore(0 , 1);
                    CharX += 50;
                    level.points[posX][posY] = 0;
                    level.points[posX][posY + 1] = 10;
                    posY++;
                }
		    }
			break;
		case GLUT_KEY_UP :
		    if(!endGame(1 , 0)){
                if(mainY > -820 && level.canGo(posX , posY,1 , 0 , level)){
                    addScore(1 , 0);
                    mainY -= 50;
                    CharY += 50;
                    level.points[posX][posY] = 0;
                    level.points[posX + 1][posY] = 10;
                    posX++;
                }
                else if(mainY + CharY < -720 && level.canGo(posX , posY,1 , 0 , level)){
                    addScore(1 , 0);
                    CharY += 50;
                    level.points[posX][posY] = 0;
                    level.points[posX + 1][posY] = 10;
                    posX++;
                }
		    }
			break;
		case GLUT_KEY_DOWN :
		    if(!endGame(-1 , 0)){
                if(mainY < 75 && level.canGo(posX , posY,-1 , 0 , level)){
                    addScore(-1 , 0);

                    CharY -= 50;
                    level.points[posX][posY] = 0;
                    level.points[posX - 1][posY] = 10;
                    posX--;
                }
                else if(mainY + CharY > -1170 && level.canGo(posX , posY,-1 , 0 , level)){
                    addScore(-1 , 0);
                    CharY -= 50;
                    level.points[posX][posY] = 0;
                    level.points[posX - 1][posY] = 10;
                    posX--;
                }
                if(mainY + CharY < -1020 && CharY < 0 && mainY < 75 )
                    mainY += 50;
		    }
			break;
	}
}

void InitGraphics(int argc, char *argv[]) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);
	//Create an 800x600 window with its top-left corner at pixel (100, 100)
	glutInitWindowPosition(-1, -1); //pass (-1, -1) for Window-Manager defaults  glutInitWindowPosition(X, Y);
	glutInitWindowSize(1350, 600);  //glutInitWindowSize(width, hight);
	glutCreateWindow("Digging Jim");

    gameObjects.initImages();
    tempGlUnit = gameObjects.images[6];
    //OnDisplay will handle the paint event
	glutDisplayFunc(OnDisplay);
	// here is the setting of the idle function
	glutIdleFunc(OnDisplay);
	// here is the setting of the key function
	glutKeyboardFunc(keypressed);
    glutSpecialFunc(processSpecialKeys);
    SetTransformations();
	glutMainLoop();
}

void SetTransformations() {

	//set up the logical coordinate system of the window: [-100, 100] x [-100, 100]
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, 1350, 0, 680); //gluOrtho2D(GLdouble left,GLdouble right,GLdouble bottom,GLdouble top)
	glMatrixMode(GL_MODELVIEW);
}

void check(int i , int j , int x){
    if(!level.points[i - 1][j]){
        objectDetails[i][j][1] = x - 50;
        objectDetails[i][j][2] = 1;
    }
    else if(level.points[i - 1][j] == 10 && objectDetails[i+1][j][2] == 1 ){
        dieFunc(i , j);
    }
    else {
        objectDetails[i+1][j][2] = 0;
    }
}

void OnDisplay() {
	//set the background color to white
	glClearColor(0, 0, 0, 1);
	//fill the whole color buffer with the clear color
	glClear(GL_COLOR_BUFFER_BIT);

    /*  */
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

    glEnable(GL_TEXTURE_2D);
    if(win){
        g.drawMenu(gameObjects.images[11]);
    }
    else if(die){
        g.drawMenu(gameObjects.images[10]);
    }
    else if(enterPressed == 0){
        g.drawMenu(gameObjects.images[9]);
        if(!MenuPlayed){
            MenuPlayed = 1;
            sndPlaySound(TEXT("C:\\Users\\Abdalrahman\\Desktop\\codeforces\\digging jim\\Audio\\Menu.wav"), SND_ASYNC|SND_LOOP);
            openDoor = 0;
        }
    }
    else{
        MenuPlayed = 0;
        if(!openDoor){
            openDoor = 1;
            sndPlaySound(TEXT("C:\\Users\\Abdalrahman\\Desktop\\codeforces\\digging jim\\Audio\\Door open (mp3cut.net).wav"), SND_ASYNC);
        }
        glPushMatrix();
            glTranslatef(mainX , mainY ,1);
            if(++Timer % 300 == 0 && !timerStop)
                seconds--;
            if(!seconds)
                dieFunc(posX , posY);
            int x , y;
            x = y = 25;
            for(int i = 4 ; i < 34 ; i++ , y += 50){
                for(int j = 0 , x = 25 ; j < 50 ; j++ , x += 50){
                    if(i == 4 || !j || i == 33 || j == 49)
                        g.drawObject(x , y , gameObjects.images[0]);
                    else if(level.points[i][j] == -1)
                        g.drawObject(x , y , gameObjects.images[1]);
                    else if(level.points[i][j] == 1){
                        check(i , j , x);
                        glPushMatrix();
                            if(objectDetails[i][j][0] + x > objectDetails[i][j][1] && objectDetails[i][j][1]){
                                glTranslatef(0 , objectDetails[i][j][0] -= 0.5 , 0);
                            }
                            else if(objectDetails[i][j][1]){
                                objectDetails[i][j][1] = objectDetails[i][j][0] = level.points[i][j] = 0;
                                level.points[i - 1][j] = 1;
                                continue;
                            }
                            g.drawObject(x , y , gameObjects.images[2]);
                        glPopMatrix();
                    }
                    else if(level.points[i][j] == 2){
                        check(i , j , x);
                        glPushMatrix();
                            if(objectDetails[i][j][0] + x > objectDetails[i][j][1] && objectDetails[i][j][1]){
                                glTranslatef(0 , objectDetails[i][j][0] -= 0.5 , 0);
                            }
                            else if(objectDetails[i][j][1]){
                                objectDetails[i][j][1] = objectDetails[i][j][0] = level.points[i][j] = 0;
                                level.points[i - 1][j] = 2;
                                continue;
                            }
                            g.drawObject(x , y , gameObjects.images[3]);
                        glPopMatrix();
                    }
                    else if(level.points[i][j] == 3)
                        g.drawObject(x , y , gameObjects.images[7]);
                    else if(level.points[i][j] == 5)
                        g.drawObject(x , y , gameObjects.images[5]);
                    else if(level.points[i][j] == 6)
                        g.drawObject(x , y , tempGlUnit);

                }
            }
        glPopMatrix();

        glPushMatrix();
            glTranslatef(CharX , mainY + CharY , 1);
            g.drawObject(125 , 1325 , gameObjects.images[8]);
        glPopMatrix();

        glDisable(GL_TEXTURE_2D);

        g.statusBar();

        g.drawNumber(val , 1);
        g.drawNumber(collected , 2);
        g.drawNumber(qouta , 3);
        g.drawNumber(1 , 4);
        g.drawNumber(seconds , 5);
        g.drawNumber(lifes , 6);
        g.drawNumber(Score , 7);

        glColor3f(1,1,1);
    }
	glutSwapBuffers();
}

int main(int argc, char* argv[]) {
    InitGraphics(argc, argv);
	return 0;
}
