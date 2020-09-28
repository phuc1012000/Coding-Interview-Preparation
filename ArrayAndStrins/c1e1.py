# Not Pythonic Solution with HashTable
def isAllUniqueACSII(st: str(encoding ='ascii')) -> bool:
# Dictionary is implemented as Dynamic HashTable :D
# It will be more efficient if we directly initiate a list due to small table

    if len(st) > 256 or len(st) == 0:
        return False
    
    table = [False] * 256
    
    for i in range(len(st)):
        val = ord(st[i])
        if table[val]: 
            return False
        table[val] = True

    return True

# True pythonic Solution with Set
def isAllUniqueInPythonicWay(st: str) -> bool:
    return len(set(st)) == len(st) != 0
