
fd = open("flag.enc", "r")
data = int(fd.read(), 16)

flag = []
while data != 0:
    flag.append(chr((data & 0xff) ^ 0xf5))
    data >>= 8

print("".join(flag)[::-1])
