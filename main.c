#include <pspkernel.h>
#include <pspdebug.h>
#include <pspctrl.h>
#include "home.h"

PSP_MODULE_INFO("Move or Die", 0, 0, 2);
#define printf pspDebugScreenPrintf
#define gotoxy pspDebugScreenSetXY


int main(){
     pspDebugScreenInit();
     SetupCallbacks();
     sceCtrlSetSamplingCycle(0);
     sceCtrlSetSamplingMode(PSP_CTRL_MODE_ANALOG);
     SceCtrlData pad;
     pspDebugScreenClear ();
     int i;
     
     while(1){ //Controles del PSP
         sceCtrlReadBufferPositive(&pad,1);
         
         /*if(pad.Buttons & PSP_CTRL_TRIANGLE) { printf("Triangulo"); }
         else if(pad.Buttons & PSP_CTRL_SQUARE) { printf("Cuadrado"); }
         else if(pad.Buttons & PSP_CTRL_CIRCLE) { printf("Circulo"); }
         else if(pad.Buttons & PSP_CTRL_CROSS) { printf("Equis"); }
         
         if(pad.Buttons & PSP_CTRL_UP) { printf("Arriba"); }
         else if(pad.Buttons & PSP_CTRL_LEFT) { printf("Izquierda"); }
         else if(pad.Buttons & PSP_CTRL_RIGHT) { printf("Derecha"); }
         else if(pad.Buttons & PSP_CTRL_DOWN) { printf("Abajo"); }
         
         else pspDebugScreenClear ();*/
         
         gotoxy(30,20);
         
         printf(" x = %d    y = %d" , pad.Lx , pad.Ly);
         
         for(i =0 ; i < 5; i++) sceDisplayWaitVblankStart();
     }

     sceKernelSleepThread(); //detiene el programa solo se sale con home y no se regrese al menu al terminar el porgrama
    return 0;
}
