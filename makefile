all: tri_num_hs tri_num_c
	mkdir -p build/
	echo "build directory created"

# Haskell
tri_num_hs: tri_num_hs.hs
	ghc -o tri_num_hs tri_num_hs.hs
	mv tri_num_hs tri_num_hs.hi tri_num_hs.o build/
	echo "Haskell compilation finished"


# C
tri_num_c: tri_num_c.c
	cc tri_num_c.c -o tri_num_c
	mv tri_num_c tri_num_c.o build/
	echo "C compilation finished"

clean:
	rm build/*
	echo "squeeky clean!"
