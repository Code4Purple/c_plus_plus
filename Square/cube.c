#include <math.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
//#include <windows.h>

float A, B, C;

float cubeWidth = 10;
int width = 160, height = 44;
float zBuffer[160 * 44];
char buffer[160 * 44];
int backgroundASCII = ' ';
int distanceFromCam = 60;
float K1 = 40;

float incrementSpeed = 0.6;

float x,y,z;
float ooz;
int xp, yp;
int idx;

float calculateX(int i, int j, int k){
    float x1 = j * sin(A) * sin(B) * cos(C) - k * cos(A) * sin(B) * cos(C);
    float x2 = j * cos(A) * sin(C) * k * sin(A) * sin(C) + i * cos(B) * cos(C);
    return x1 + x2;
}

float calculateY(int i, int j, int k){
    float y1 = j * cos(A) * cos(C) + k * sin(A) * cos(C);
    float y2 = j * sin(A) * sin(B) * sin(C) + k * cos(A) * sin(B) * sin(C);
    float y3 = i * cos(B) * sin(C);
    return y1 - y2 - y3;
}

float calculateZ(int i, int j, int k){
    float z1 = k * cos(A) * cos(B) - j * sin(A) * cos(B) + i * sin(B);
    return z1;
}

void calculateForSurface(float cubeX, float cubeY, float cubeZ, int ch) {
    x = calculateX(cubeX, cubeY, cubeZ);
    y = calculateY(cubeX, cubeY, cubeZ);
    z = calculateZ(cubeX, cubeY, cubeZ) + distanceFromCam;

    ooz = 1/z;
    xp = (int)(width/2 + K1 * ooz * x * 2);
    yp = (int)(height/2 + K1 * ooz * y);

    idx = xp + yp * width;
    if(idx >= 0 && idx < width * height){
        if(ooz > zBuffer[idx]){
            zBuffer[idx] = ooz;
            buffer[idx] = ch;
        }
    }
}


void hideCursor() {
  HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
  CONSOLE_CURSOR_INFO info;
  info.dwSize = 100;
  info.bVisible = FALSE;
  SetConsoleCursorInfo(consoleHandle, &info);
} 

int main(){
    printf("\x1b[2J]");
    while(1){
        memset(buffer, backgroundASCII, width * height);
        memset(zBuffer, 0, width * height * 4);
        for (float cubeX = - cubeWidth; cubeX < cubeWidth; cubeX += incrementSpeed){
            for(float cubeY = - cubeWidth; cubeY < cubeWidth; cubeY += incrementSpeed){
                calculateForSurface(cubeX, cubeY, -cubeWidth, '.');
                calculateForSurface(cubeWidth, cubeY, cubeX, '$');
                calculateForSurface(-cubeWidth, cubeY, -cubeX, '~');
                calculateForSurface(-cubeX, cubeY, cubeWidth, '%');
            }
        }
        printf("\x1b[H");
        for (int k = 0; k < width * height; k++){
            putchar(k % width ? buffer[k] : 10);
        }

        A += 0.005;
        B += 0.005;
        usleep(1000);
        //Sleep(10);
        hideCursor();
    }

    return 0;
}
