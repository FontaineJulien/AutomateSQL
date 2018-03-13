all: run

run: main.o automate.o etat.o requete.o pronomInterrogatif.o determinant.o nomRubrique.o valeurRubrique.o verbe.o finPhrase.o
	g++ -Wall -o $@ $^

%.o: %.cpp
	g++ -Wall -o $@ -c $<

clean:
	rm -rf *.o
