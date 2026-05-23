CC = gcc
CFLAGS = -Wall -Wextra
TARGET = versao_c_out/main
SRCS = versao_c/main.c versao_c/fibo_recursivo.c versao_c/fibo_bottomup.c versao_c/fibo_topdown.c

all: $(TARGET)

$(TARGET): $(SRCS)
	@mkdir -p versao_c_out
	$(CC) $(CFLAGS) $(SRCS) -o $(TARGET)

clean:
	rm -rf $(TARGET)
		
