CXX = g++
CXXFLAGS = -std=c++14 -Wall -MMD 
EXEC = straights
OBJECTS = card.o deck.o main.o game.o player.o hand.o
DEPENDS = ${OBJECTS:.o=.d}

${EXEC}: ${OBJECTS}
	${CXX} ${CXXFLAGS} ${OBJECTS} -o ${EXEC}

-include ${DEPENDS}

.PHONY: clean

clean:
	rm ${OBJECTS} ${EXEC} ${DEPENDS}
