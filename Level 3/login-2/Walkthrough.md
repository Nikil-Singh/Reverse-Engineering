Link: https://crackmes.one/crackme/5ce6e06c33c5d450df314036

Running the program through ltrace reveals that it uses memcmp to compare the
actual password with the input. It compares input with a size of 20 bytes. So
it would be safe to assume the size of the password is 20 bytes. I also saw
during the ltrace and disasembled code, calloc was called 4 times. For each of
those instances the count was 1, and size was 512.