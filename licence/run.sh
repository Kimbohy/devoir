g++ -fPIC -c lib/Activation.cpp -o lib/Activation.o
g++ -o lib/libActivation.so -shared lib/Activation.o
cp lib/libActivation.so ../../biblioteque/dinamique_lib/
g++ main.cpp -L/home/kim/Documents/code/CPP/biblioteque/dinamique_lib/ -lActivation -o main.exe
