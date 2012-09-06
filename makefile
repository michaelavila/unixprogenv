all:
	make bin/zap
	make bin/pick
	make bin/idiff

bin/zap:
	cc src/zap.c -o bin/zap

bin/pick:
	cc src/pick.c -o bin/pick

bin/idiff:
	cc -fwritable-strings src/idiff.c -o bin/idiff

install:
	cp bin/* /usr/local/bin/
