fd = open("ct","rb")
data = fd.read()

flags = []
current_flag = []


for key in range(0xff):
    for byte in data:
        current_flag.append(chr(key ^ byte))
    flags.append("".join(current_flag))
    current_flag = []

for flag in flags:
    if "fitsec" in flag:
        print(flag)
