CC = gcc
CFLAGS = -Wall -Werror -Wextra
LDFLAGS = -lm

SRC_DIR = src
BIN_DIR = build

all: graph

graph: ${SRC_DIR}/graph.c
	${CC} ${CFLAGS} ${LDFLAGS} -o ${BIN_DIR}/graph ${SRC_DIR}/graph.c

clean:
	rm -rf ${BIN_DIR}