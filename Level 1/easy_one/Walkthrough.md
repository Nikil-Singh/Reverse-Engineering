Link: https://crackmes.one/crackme/5d443bb533c5d444ad3018b3

Upon running the program, I discovered I needed to enter a password. Upon 
disassembling the code, I found the if statement that determined whether the 
password was correct. Tracing backwards from this I discovered a comparison 
and that the input sting is held in a variable called byte. Next I realised 
that it is comparing the same string with each other. At this point I became 
stuck, and got a hint from the solution. The program used fgets and relies on 
the user buffer overflowing. The overflow data would go into the variable 
password. Essentially, the program checks whether the first letter in input 
matches the first letter to enter the buffer overflow. If it passes that, then 
the password is correct.