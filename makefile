all: tri_num_hs tri_num_c base

# Haskell
tri_num_hs: tri_num_hs.hs base
	ghc -o tri_num_hs tri_num_hs.hs
	mv tri_num_hs tri_num_hs.hi tri_num_hs.o build/ 
	echo "Haskell compilation finished"


# C
tri_num_c: tri_num_c.c base
	cc tri_num_c.c -lm -o tri_num_c
	mv tri_num_c tri_num_c.o build/ 
	echo "C compilation finished"

base:
	mkdir -p build/
	echo "build directory created"

clean:
	rm build/* 
	echo "squeeky clean!"
