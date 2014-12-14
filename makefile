CC = clang
CFLAGS = -Wall -O0 -g
LFLAGS = -O0 -g
LIBS = -lm

decodemessage:  caesar.o decodemessage.o 
	$(CC) $(LFLAGS) -o $@ $^ $(LIBS)

clean:
	rm -f *.o
veryclean: clean
	rm -f decodemessage
