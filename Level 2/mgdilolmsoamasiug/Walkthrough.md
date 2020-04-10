Link: https://crackmes.one/crackme/5e604d4333c5d4439bb2dd72

Through static analysis of the code, I noticed the program calls a function
that has an extremely long name. In this function a std::compare is called to
compare the two inputs. I then used gdb to find out what exactly was being
compared. A breakpoint was set at main, at the instruction before the function
call and right before the compare. The addresses of the latter two breakpoints
were obtained by viewing the disassembled code. The two inputs entered were
"asd" and "asd". Going to the third breakpoint, rsi contained "add" and rdi
contained "asd". Then I reran the program with the inputs "add" and "add". This
succeeded. No flag was outputted, but an output of "Good job!" was printed.