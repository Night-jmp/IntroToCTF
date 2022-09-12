FROM ubuntu:latest
RUN apt update && apt install telnetd sudo systemctl -y

RUN useradd --create-home --shell /bin/bash nyt3-jmp
RUN  echo 'nyt3-jmp:taylorswiftisbae123' | chpasswd
COPY ./flag.txt /home/nyt3-jmp
RUN chmod u-w /home/nyt3-jmp
RUN chmod 1444 /home/nyt3-jmp/flag.txt

EXPOSE 23

CMD systemctl start inetd; while [ true ]; do sleep 60; done
