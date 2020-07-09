a.out: main.cpp mylib.cpp mylib.h
	g++ main.cpp mylib.h mylib.cpp

clean:
	rm a.out
