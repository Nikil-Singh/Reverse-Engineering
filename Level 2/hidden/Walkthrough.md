Link: https://crackmes.one/crackme/5c11e2f333c5d41e58e0057a

Running the program, it outputted "the only way out is inward". It also outputted
"voce consegue achar a funcao escondida" which is Portuguese for "can you find the
hidden function". Looking at the disassembled code I found the function called
secret, however the function is never called. So, I patched the function call to
printf to instead call the function secret. From this I received the flag:
flag{3sc0nd1d0_3h_M41s_G0st0S0}.

