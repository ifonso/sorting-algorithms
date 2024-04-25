CC = gcc
CFLAGS = -I .
SOURCES = $(wildcard *.c)
OUTPUT = out

all: $(OUTPUT)

$(OUTPUT): $(SOURCES)
	$(CC) $(CFLAGS) $(SOURCES) -o $(OUTPUT)

clean:
	rm -f $(OUTPUT)