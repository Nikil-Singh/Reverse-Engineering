Link: https://crackmes.one/crackme/5dce805c33c5d419aa0131ae

I ran the program without any arguments and it said my input was incorrect. Next,
I ran the program with two arguments 0 11 and it came up that abby was older
than that. Looking at the disassembled code, strlen was called to measure length
of the two inputs. Both inputs need to be of length 6 or greater. I then tried
the inputs 000000 000000 and got that abby was older. I tried 0000000 and 0000000
both of which are of length 7, and got that abby and gabby are not odd years old.
Next, I tried 00000000 00000000 which are length 8. The response was that abby
and gabby were half twins. Looking at the flow of direction of the disassembled
code this was the closest conditional statement to getting the correct output. 
So, if I passed this conditional statement I would have succeeded. After being
stuck for a while, I had a look at the solution. I had everything correct. The
part I missed was that it looped through and checked the first half of both 
inputs were the same and the second half were not the same.
