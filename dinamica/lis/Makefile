CC = gcc
CFLAGS = -Wall -Wextra
TARGET = versao_c_out/main
SRCS = versao_c/main.c versao_c/lis_topdown.c versao_c/lis_recursivo.c versao_c/lis_bottomup.c \
	   versao_c/common.c

all: $(TARGET)

$(TARGET): $(SRCS)
	@mkdir -p versao_c_out
	$(CC) $(CFLAGS) $(SRCS) -o $(TARGET)

clean:
	rm -r versao_c_out
