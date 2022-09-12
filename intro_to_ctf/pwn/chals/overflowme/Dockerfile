FROM ubuntu:latest
RUN apt update && apt install socat -y

RUN useradd --create-home --shell /bin/bash user

WORKDIR /home/user
COPY ./overflowme .
COPY ./start.sh .

EXPOSE 5000

#CMD ["./start.sh"]

ENTRYPOINT ["socat", "tcp-l:5000,reuseaddr,fork", "EXEC:\"./overflowme\",pty,stderr"]
