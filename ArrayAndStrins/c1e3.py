import array

def urlify(st: str) -> str:
    index = 0
    spaceCount = 0
    lastCharIndex = False

    for i in range (len(st) -1, -1, -1):
        if st[i] != ' ' and not lastCharIndex:
            lastCharIndex = i
        if lastCharIndex and st[i] == ' ': spaceCount+=1

    index = lastCharIndex + 2 * spaceCount
    
    st = array.array('u', st[:index+1])

    for i in range(lastCharIndex, -1, -1 ):
        if st[i] == ' ':
            st[index]='0';
            st[index-1]='2';
            st[index-2]='%';
            
            index-=3
        else:
            st[index] = st[i]
            index-=1
    
    return st.tounicode()

def urlifyPythonicWay(st: str) -> str:
    st = st.rstrip()
    return st.replace(' ', '%20')
