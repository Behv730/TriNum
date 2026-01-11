all: tri_num_hs tri_num_c

tri_num_hs: tri_num_hs.o
	ghc -o is_triangle_num tri_num_hs.hs
	mv tri_num_hs.hi tri_num_hs.o build/
	echo "Haskell compilation finished"

tri_num_hs.o: tri_num_hs.hs
