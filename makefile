all: multiplicados.dat

%.dat: BarriosDaniela_Ejercicio26.x
	./BarriosDaniela_Ejercicio26.x

BarriosDaniela_Ejercicio26.x: clase26.cpp
	c++ clase26.cpp -o BarriosDaniela_Ejercicio26.x

clean:
	rm -rf *.x *.dat
