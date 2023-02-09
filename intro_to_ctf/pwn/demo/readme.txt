There is a parameter passed to the vulnerable function called "key" that contains 0xdeadbeef. Smash the stack and overwrite this variable to contain 0xcafebabe.

You really need to create a docker container for this challenge. Give competitors the compiled binary. Binary protections don't really matter on this one. Simple stack based buffer overflow.
