#!/bin/bash

socat tcp-l:5000,reuseaddr,fork EXEC:"./overwriteme",pty,stderr
