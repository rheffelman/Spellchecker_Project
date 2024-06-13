## This project detects mispelled words and generates good suggestions for them.
Made by Ryan Heffelman in 2023.

## Example usage of the program:
![image](https://github.com/rheffelman/Spellchecker_Project/assets/132711854/a0fa32f8-f3db-435e-a3dc-370e550da820)

## How it works:
It checks each of the input words against a massive sorted dictionary of words found in `bigDictionary.txt` using binary search. If it finds a mispelled word, it uses two different industry standard string similarity algorithms, Levenshtein Distance and Jaccard String Similarity, simultaneously and it gets a list of the 10 closest words in the dictionary file to the mispelled word. Note: It uses both of the algorithms at the same time, so it's sorted under two criteria, and it prioritizes Levenshtein Distance over Jaccard String Similarity. It's pretty accurate, if your mispelled word is not in the 10 suggestios it generates, chances are it's not in the dictionary file.