CC = gcc
CFLAGS = -I src
SRCDIR = src
SOURCES = $(wildcard $(SRCDIR)/*.c)
OUTPUT = out

slection_sort_time: $(SOURCES)
	$(CC) $(CFLAGS) $(SOURCES) time_selection_sort_test.c -o $(OUTPUT)

insertion_sort_time: $(SOURCES)
	$(CC) $(CFLAGS) $(SOURCES) time_insertion_sort_test.c -o $(OUTPUT)

merge_sort_time: $(SOURCES)
	$(CC) $(CFLAGS) $(SOURCES) time_merge_sort_test.c -o $(OUTPUT)

quick_sort_time: $(SOURCES)
	$(CC) $(CFLAGS) $(SOURCES) time_quick_sort_test.c -o $(OUTPUT)

heap_sort_time: $(SOURCES)
	$(CC) $(CFLAGS) $(SOURCES) time_heap_sort_test.c -o $(OUTPUT)

faster_quick_sort_time: $(SOURCES)
	$(CC) $(CFLAGS) $(SOURCES) time_faster_quick_sort_test.c -o $(OUTPUT)