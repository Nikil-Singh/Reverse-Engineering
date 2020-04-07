Link: https://crackmes.one/crackme/5d78168833c5d46f00e2c428

Running this through ltrace, I found a strcmp that compared the input to the
following string: "bd23cf3f56baa86bc". I also found a function of the same name
in the disassembled code. In the initial run, upon entering random text I got
the message "ERROR". I then reran the code and entered that string. The output
from that was "blip blop :)".

This was in the level 2 section, but based on how easily I solved it, it should
be in level 1.