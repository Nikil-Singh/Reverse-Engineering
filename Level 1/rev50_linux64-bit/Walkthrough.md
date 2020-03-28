https://crackmes.one/crackme/5b8a37a433c5d45fc286ad83

Upon running the program, the program required me to provide an arguement along
with ./program. Reading the disassembled code I also found the arguement has to
be of a certain length from strlen. Using disassembled code and ltrace I could 
not find the required length. After lookig for a bit longer I realised the size
of string needed to be 10 from 0xa. This is the case since a is 10 in hex. I
also found to access the flag section it compared something 0x40 which is @.
So I did a lot of guess and check and found nothing. So I looked up at the
solutions and said the fifth character needs to be @. This could possibly be the
case from it moving 0x4 to rax, and then movzx eax, byte [rax]. 

The flag was flag{aaaa@aaaaa} which happened to be my input.