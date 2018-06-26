# A program that encrypts messages using Vigenère’s cipher. This program
# must accept a single command-line argument: a keyword, k, composed entirely
# of alphabetical characters.

from cs50 import get_string
import sys


def main():
    # check for 2 arg: if not then nope
    if len(sys.argv) != 2:  # this guarantee that there are only 2 arguments
        print("Usage python vigenere.py key")
        exit(1)

    # Key and validate the key is alpha
    k = (sys.argv[1])
    if (validate_key(k) == False):
        print("Use alphabetial key")
        exit(2)
    k = k.lower()

    # prompt user for text
    text = get_string("Enter Message: ")
    k_index = 0
    lenk = len(k)

    # output with the encrypted key
    print("Encrypted Message Below: ")
    for char in text:
        if char.islower():
            print(chr((ord(char) - ord('a') + ord(k[k_index])-ord('a')) % 26 + ord('a')), end='')
            k_index = (k_index + 1) % lenk
        elif char.isupper():
            print(chr((ord(char) - ord('A') + ord(k[k_index])-ord('a')) % 26 + ord('A')), end='')
            k_index = (k_index + 1) % lenk
        else:
            print(char, end='')
    print()


def validate_key(key):
    for c in key:
        if (c.isupper() == True or c.islower() == True) == False:
            return False
    return True


if __name__ == "__main__":
    main()
