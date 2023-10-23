#  This is the code for level 5 of the hunt
# Input: No input as such
#  Output: ['zllr', 'aol', 'hualwlubsapthal', 'mvskly']

class Clue:
    def __init__(self, location, challenge_level):
        self.location = location
        self.challenge_level = challenge_level


clues = [Clue("zllr zovd ylclhs mpuk kpzjsvzl", 31),
         Clue("aol pa aopz ulea dolyl", 17),
         Clue("hualwlubsapthal wlubsapthal shza mpyza uvdolyl", 38),
         Clue("mvskly mpsl aea kvj wshjl", 66)]

solved_clues = list(map(lambda x: x.location.split()[0], filter(lambda x: (x.challenge_level%7==3), clues)))
print(solved_clues)


# key = sum of digits of the number of posts, kannada_koota had, as of 23.10.23
# ensure that the key is a single digit number by doing sum of digits until it reduces to a single digit
# Check ACM-W's story once you've figured out the output for this code and the key.


# the key explanation: 97=number of posts , therfore it will be 9+7 => 16 => 1+6 => 7
# The key is: 7 which must be put up in the cipher website
