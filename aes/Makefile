CC = gcc
GDB = gdb
GDB_CMD = -x gdb_cmd.txt
CC_CROSS = avr32-gcc
GDB_CROSS = avr32-gdb
GDB_CMD_CROSS = -x avr32-gdb_cmd.txt

PART = ap7001

WARN =
#WARN = -W -Wall
DEBBUG = -ggdb
CFLAGS = $(DEBBUG) $(WARN)
INCPATH = -Iaes/include -I../cunit/include -I../common/include
BUILD_DIR = build
TARGET = $(BUILD_DIR)/example_main.elf
SIMTARGET = $(BUILD_DIR)/example_main
TFILES = $(wildcard */tests/*.c)
HFILES = $(wildcard */include/*.h)

all: $(TARGET)

clean:
	rm -rf $(BUILD_DIR)

$(TARGET): $(TFILES) $(HFILES)
	@mkdir -p $(BUILD_DIR)
	$(CC_CROSS) $(CFLAGS) -mpart=$(PART) $(INCPATH) -o $(TARGET) $(TFILES)

$(SIMTARGET): $(TFILES) $(HFILES)
	@mkdir -p $(BUILD_DIR)
	$(CC) $(CFLAGS) $(INCPATH) -o $(SIMTARGET) $(TFILES)

run: $(TARGET)
	@echo "Run as root: (cd `pwd`; avr32program program -e -v -f0,8Mb $(TARGET) && avr32gdbproxy -f 0,8Mb –a)"
	@read l
	$(GDB_CROSS) $(GDB_CMD_CROSS) $(TARGET)

simulate: $(SIMTARGET)
	$(GDB) $(GDB_CMD) $(SIMTARGET)
