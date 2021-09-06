#!/bin/python3
import sys


S = input().strip()

try:
    string_int = int(S)
    print(string_int)
except ValueError:
    print("Bad String")
