#!/usr/bin/env python
'''
Created on 21.01.2014

@author: gwu
'''

import sys

def display_scores(p):
    for file in os.listdir(p + '/conf'):
        if file.endswith('Eval.Log'):
            print(file)
            with open(file, 'r') as f:
                for line in f:
                    if line.startswith('NIST'):
                       print(line)

def main():
    if len(sys.argv) != 2:
        usage = """Usage: python %prog  <SystemPath>\nSystemPath is the path of the translation system, NIST/BLEU scores of all the configuration will be displayed"""
        raise SystemExit(usage)

    sysPath = sys.argv[1]
    display_scores(sysPath)

if __name__ == "__main__":
    main()
