# Palindrome Permutation: Given a string, write a function to check if it is a permutation of a palin-drome. A palindrome is a word or phrase that is the same forwards and backwards. A permutation is a rearrangement of letters. The palindrome does not need to be limited to just dictionary words.



#############################################
from collections import Counter

def isPermutationOfPalindromeInPythonicWay(st: str) -> bool:
    charTable = Counter(st)
    oddCounter = False
    
    for char, count in charTable.items():
        if count % 2 == 1:
            if oddCounter == True: return False
            else: oddCounter = True

    return True
