all: run

run: main.o automate.o etat.o requete.o pronomInterrogatif.o
	g++ -Wall -o $@ $^

%.o: %.cpp
	g++ -Wall -o $@ -c $<

clean:
	rm -rf *.o
