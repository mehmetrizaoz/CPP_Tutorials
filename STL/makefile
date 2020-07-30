map: map.o
	g++ map.o -o map

bitset: bitset.o
	g++ bitset.o -o bitset

bitset.o: bitset.cc
	g++ -c bitset.cc
	 
map.o: map.cc
	g++ -c map.cc

clean:
	rm map.o bitset.o map bitset
