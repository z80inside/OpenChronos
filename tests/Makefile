CPU	= MSP430
CC  = msp430-gcc
LD  = msp430-ld

DRIVERS_DIR = ./drivers

CFLAGS_PRODUCTION = -Os -Wall
CFLAGS_PRODUCTION +=  -fomit-frame-pointer -fno-force-addr -finline-limit=1 -fno-schedule-insns 
CFLAGS_DEBUG= -g -Os

CC_CMACH	= -mmcu=cc430x6137
CC_DMACH	= -D__MSP430_6137__ -DMRFI_CC430 -D__CC430F6137__ 
CC_DOPT		= -DELIMINATE_BLUEROBIN
CC_INCLUDE = -Idrivers/include -I.

CC_COPT		=  $(CC_CMACH) $(CC_DMACH) $(CC_DOPT) $(CC_INCLUDE) 
USE_CFLAGS = $(CFLAGS_PRODUCTION)

main: main.c
	$(CC) $(CC_COPT) $(USE_CFLAGS) $(CONFIG_FLAGS) -c -o $(DRIVERS_DIR)/display.o $(DRIVERS_DIR)/display.c
	$(CC) $(CC_COPT) $(USE_CFLAGS) $(CONFIG_FLAGS) -c -o $(DRIVERS_DIR)/display1.o $(DRIVERS_DIR)/display1.c
	$(CC) $(CC_COPT) $(USE_CFLAGS) $(CONFIG_FLAGS) -o main.elf main.c $(DRIVERS_DIR)/display.o $(DRIVERS_DIR)/display1.o
	python ../tools/memory.py -i main.elf -o main.hex

