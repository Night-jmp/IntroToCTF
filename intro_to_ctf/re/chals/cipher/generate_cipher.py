#!/usr/bin/env python3
import sys

def encrypt(pt):
    ct = 0 
    for byte in pt:
        tmp = ord(byte) ^ 0xf5
        ct = (ct << 8) + tmp
    return ct

if __name__ == "__main__":
    if len(sys.argv) != 2:
        print("Usage: ./generate_cipher.py <message>")
        sys.exit()
    
    pt = sys.argv[1]
    
    ct = encrypt(pt)
    fd = open("flag.enc", "w")
    fd.write(hex(ct))
    fd.close()
