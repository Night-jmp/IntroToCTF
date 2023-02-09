Get a new pcap for the new IP address so you can host the flag. Needs to be done every time you move to a new IP.

You can edit the dockerfile to change the password or username as needed.
Build the dockerfile and then run it.
With the docker container running, use wireshark to capture the traffic. Telnet into the docker container but don't cat the flag. Just ls so it captures where the flag is in the file system.
The idea here is that the competitor should recognize that there is a telnet service running and they have the IP address and the login creds since its all plain text.
The competitor will use this information to login and retrieve the flag.
