FROM ubuntu:latest
RUN apt update && apt install socat -y

RUN useradd --create-home --shell /bin/bash user

WORKDIR /home/user
COPY ./emvent .
COPY ./start.sh .
COPY ./flag.txt .

EXPOSE 5000

CMD ["./start.sh"]
