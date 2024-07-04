all: a.out

a.out: load.cpp
	g++ load.cpp

clean:
	rm -f a.out

