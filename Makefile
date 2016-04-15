TARGET = MOD
OBJS = main.o home.o
 
CFLAGS = -O2 -G0 -Wall
CXXFLAGS = $(CFLAGS) -fno-exceptions -fno-rtti
ASFLAGS = $(CFLAGS)

BUILD_PRX = 1
PSP_FW_VERSION = 661

LIBDIR =
#Aqui incluiremos libs necesarias
LIBS = -lpspgu -lpng -lz -lm -lmad -lpsppower -lpspaudiolib -lpspaudio
 
EXTRA_TARGETS = EBOOT.PBP
PSP_EBOOT_TITLE = Move or Die Experimental
PSPSDK=$(shell psp-config --pspsdk-path)
include $(PSPSDK)/lib/build.mak

PSP_EBOOT_ICON = ICON0.png
PSP_EBOOT_PIC1 = PIC1.png
PSP_EBOOT_SND0 = SND0.wav