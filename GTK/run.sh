echo Compiling...
gcc main.c $(pkg-config --libs gtk+-2.0) $(pkg-config --cflags gtk+-2.0)
echo Compilation Success...
echo Openning...
./a.out