.PHONY: clean install

CC=gcc
EXEC_FILE_NAME=stu_mgr

${EXEC_FILE_NAME}: main.o array_sort.o itmojun.o
	${CC} -o $@ $^

main.o: main.c
	${CC} -c $^

array_sort.o: array_sort.c array_sort.h
	${CC} -c array_sort.c

itmojun.o: itmojun.c itmojun.h
	${CC} -c itmojun.c

clean:
	rm -f stu_mgr *.o

install:
	cp ${EXEC_FILE_NAME} /bin
