PROG:=main
SRCS:=add.cc instruccion.cc write.cc read.cc sumaDos.cc programa.cc main.cc cuentaAtras.cc push.cc dup.cc jumpif.cc swap.cc over.cc mul.cc factorial.cc

CXX:= g++ -std=c++11 -O2

OBJS:=$(SRCS:.cc=.o)

all: $(PROG) main.s

$(PROG): $(OBJS)
	$(CXX) -o $@ $(OBJS)

.cc.o:
	$(CXX) -c $<

edit:
	geany -s *.h *.cc &

clean:
	@rm -f $(PROG) $(OBJS) core *.s

add.o: add.cc add.h
instruccion.o: instruccion.cc instruccion.h
write.o: write.cc write.h
read.o: read.cc read.h
sumaDos.o: sumaDos.cc sumaDos.h
programa.o: programa.cc programa.h
cuentaAtras.o: cuentaAtras.cc cuentaAtras.h
push.o: push.cc push.h
dup.o: dup.cc dup.h
jumpif.o: jumpif.cc jumpif.h
swap.o: swap.cc swap.h
over.o: over.cc over.h
mul.o: mul.cc mul.h
factorial.o: factorial.cc factorial.h
main.o: main.cc add.h instruccion.h write.h read.h sumaDos.h programa.h cuentaAtras.h push.h dup.h jumpif.h swap.h over.h mul.h factorial.h
main.s: main.cc add.h instruccion.h write.h read.h sumaDos.h programa.h cuentaAtras.h push.h dup.h jumpif.h swap.h over.h mul.h factorial.h