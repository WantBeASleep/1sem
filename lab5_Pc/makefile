PREF_MENU = ./menu/
PREF_INPUT = ./input/
PREF_OUTPUT = ./output/
PREF_WORK = ./work/
PREF_LIB = ./lib/

SRCMENU = $(wildcard $(PREF_MENU)*.c)
SRCINPUT = $(wildcard $(PREF_INPUT)*.c)
SRCOUTPUT = $(wildcard $(PREF_OUTPUT)*.c)
SRCWORK = $(wildcard $(PREF_WORK)*.c)
SRCLIB = $(wildcard $(PREF_LIB)*.c)

OBJMENU = $(patsubst $(PREF_MENU)%.c, %.o, $(SRCMENU))
OBJINPUT = $(patsubst $(PREF_INPUT)%.c, %.o, $(SRCINPUT))
OBJOUTPUT = $(patsubst $(PREF_OUTPUT)%.c, %.o, $(SRCOUTPUT))
OBJWORK = $(patsubst $(PREF_WORK)%.c, %.o, $(SRCWORK))
OBJLIB = $(patsubst $(PREF_LIB)%.c, %.o, $(SRCLIB))

all :
	cd $(PREF_MENU) && $(MAKE)
	cd $(PREF_INPUT) && $(MAKE)
	cd $(PREF_OUTPUT) && $(MAKE)
	cd $(PREF_WORK) && $(MAKE)
	cd $(PREF_LIB) && $(MAKE)
	gcc -c main.c
	gcc -o lab5 main.o $(OBJMENU) $(OBJINPUT) $(OBJOUTPUT) $(OBJLIB) $(OBJWORK) -lreadline
	rm *.o
