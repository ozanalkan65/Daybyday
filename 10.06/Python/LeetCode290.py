class Solution:
    def wordPattern(self, pattern: str, s: str) -> bool:
        sozluk = dict()
        checklist=[]
        k=s.split() #dog,   cat,    cat,    dog  -->s elemanlari
        liste=[]    # a  ,   b,      b,      a   -->patterns
        if len(k)!=len(pattern):
            return False
        for i in pattern:
            liste.append(i)
        for i in range(len(pattern)):
            if pattern[i] not in sozluk.keys() and k[i] not in sozluk.values():
                sozluk[pattern[i]]=k[i]
        for i in liste:
            if i in sozluk.keys():
                checklist.append(sozluk[i])#==>creates the seq as it should be        
        if checklist == k:
            return True
