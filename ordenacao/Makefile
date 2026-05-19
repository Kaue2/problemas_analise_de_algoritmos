CC = gcc
CFLAGS = -Wall -Wextra
TARGET = versao_c_out/main
SRCS = versao_c/main.c versao_c/bubble_sort.c versao_c/insertion_sort.c \
       versao_c/selection_sort.c versao_c/swap.c versao_c/quick_sort.c  \
       versao_c/merge_sort.c versao_c/shell_sort.c versao_c/heap_sort.c \
       versao_c/bucket_sort.c versao_c/radix_sort.c

all: $(TARGET)

$(TARGET): $(SRCS)
	@mkdir -p versao_c_out
	$(CC) $(CFLAGS) $(SRCS) -o $(TARGET)

clean:
	rm -r $(TARGET)
