##
## two strings
## link : https://www.hackerrank.com/challenges/two-strings/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=dictionaries-hashmaps

# Complete the twoStrings function below.
def twoStrings(s1, s2):
    if(len(set(s1).intersection(set(s2)))>0):
        return "YES"
    else:
        return "NO"
