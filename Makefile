#**********************************************************
#    ----       Universidad Sergio Arboleda      ----
# Fecha: 5/08/2022
# Autor: Roxanyffer Andreina Velasco Contreras
# Materia: Computación Paralela y Distribuida
# Tema: Introducción a la programación en C
#*********************************************************/

GCC = gcc
FLAGS = -ansi -pedantic -Wall -std=gnu11
MATHFLAGS = -lm

PROGRS = Ejercicios_main
 
all: $(PROGRS) 

Ejercicios_main:
	$(GCC) $(FLAGS) -c $@.c
	$(GCC) $(FLAGS) -c Ejercicios_lib.c
	$(GCC) $(FLAGS) -o $@ $@.o Ejercicios_lib.o $(MATHFLAGS)

clean: 
	$(RM) *.o