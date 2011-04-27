CC = gcc
GDB = gdb
GDB_CMD = -x gdb_cmd.txt
CC_CROSS = avr32-gcc
GDB_CROSS = avr32-gdb
GDB_CMD_CROSS = -x avr32-gdb_cmd.txt

WARN = -W -Wall
DEBBUG = -ggdb
CFLAGS = $(DEBBUG) $(WARN)
INCPATH = -Icunit/include -Iaes/include
TARGET = example_main.elf
SIMTARGET = example_main
CFILES = $(wildcard src/*.c)

all: $(TARGET)

clean:
	rm -r $(TARGET) $(SIMTARGET)

$(TARGET): $(CFILES)
	@$(CC_CROSS) $(CFLAGS) $(INCPATH) -o $(TARGET) $(CFILES)

$(SIMTARGET): $(CFILES)
	$(CC) $(CFLAGS) $(INCPATH) -o $(SIMTARGET) $(CFILES)

run: $(TARGET)
	@echo "press a key"
	@read l
	$(GDB_CROSS) $(GDB_CMD_CROSS) $(TARGET)

simulate: $(SIMTARGET)
	$(GDB) $(GDB_CMD) $(SIMTARGET)
