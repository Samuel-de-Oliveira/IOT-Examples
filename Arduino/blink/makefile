# Arduino Makefile (arduino-cli)
BOARD = /dev/ttyACM0
CORE  = arduino:avr:uno

all:
	arduino-cli compile --fqbn $(CORE) .

upload:
	arduino-cli upload -p $(BOARD) --fqbn $(CORE) .
