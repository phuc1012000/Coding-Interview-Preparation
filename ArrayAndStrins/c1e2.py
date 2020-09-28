# Assume 2 input String is ACSII
# No need for enfore type check
def isPermutation(str1 : str, str2 : str) -> bool:
    
    if (len(str1) != len(str2)): return False
    if (len(str1) == 0): return False
    
    hashTable = [0]*128

    for i in range(len(str1)):
        hashTable[ord(str1[i])]+=1
        hashTable[ord(str2[i])]-=1

    for val in hashTable:
        if val != 0: return False

    return True

#######################################################
from collections import Counter

def isPermutationPythonicWay(str1: str, str2: str) -> bool:

    if (len(str1) != len(str2)): return False
    if (len(str1) == 0): return False

    return Counter(str1) == Counter(str2)

# if you don't care about sub-optimize: 
#   return Counter(str1) == Counter(str2) != Counter()
# is enough
