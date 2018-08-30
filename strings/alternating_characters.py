#Alternating Characters
#link : https://www.hackerrank.com/challenges/alternating-characters/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=strings

def alternatingCharacters(s):
    cont = 0
    flag_A =False
    flag_B =False
    if(s[0] == "A"):
        flag_A = True
    else:
        flag_B = True
    for i in range(1,len(s)):
        if(s[i] == "A"):
            if(flag_A == True):
                cont+=1
            else:
                flag_A = True
                flag_B = False
        else:
            if(flag_B == True):
                cont+=1
            else:
                flag_A = False
                flag_B = True
    return cont
        

