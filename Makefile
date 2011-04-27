CC = gcc
GDB = gdb
GDB_CMD = -x gdb_cmd.txt
CC_CROSS = avr32-gcc
GDB_CROSS = avr32-gdb
GDB_CMD_CROSS = -x avr32-gdb_cmd.txt

WARN =
#WARN = -W -Wall
DEBBUG = -ggdb
CFLAGS = $(DEBBUG) $(WARN)
INCPATH = -Icunit/include -Iaes/include
TARGET = example_main.elf
SIMTARGET = example_main
TFILES = $(wildcard aes/tests/*.c)
HFILES = $(wildcard */include/*.h)

all: $(TARGET)

clean:
	rm -r $(TARGET) $(SIMTARGET)

$(TARGET): $(TFILES) $(HFILES)
	@$(CC_CROSS) $(CFLAGS) $(INCPATH) -o $(TARGET) $(TFILES)

$(SIMTARGET): $(TFILES) $(HFILES)
	$(CC) $(CFLAGS) $(INCPATH) -o $(SIMTARGET) $(TFILES)

run: $(TARGET)
	@echo "press a key"
	@read l
	$(GDB_CROSS) $(GDB_CMD_CROSS) $(TARGET)

simulate: $(SIMTARGET)
	$(GDB) $(GDB_CMD) $(SIMTARGET)
