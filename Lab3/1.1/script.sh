gcc main.c myfactory.c -ldl
gcc -shared -fPIC tiger.c -o tiger.so
gcc -shared -fPIC parrot.c -o parrot.so
./a.out ./tiger.so Mirko ./parrot.so Modrobradi