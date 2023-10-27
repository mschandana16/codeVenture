# caesarCipher.py
# This is the code for level 4 of the hunt
class Clue:
    def __init__(self, location, challenge_level):
        self.location = location
        self.challenge_level = challenge_level


clues = [
    Clue("ykkq ynuc xkbkgr lotj joyiruyk", 15),
    Clue("znk oz znoy tkdz cnkxk", 21),
    Clue("zzefvskly mpssklel aeccca ksjdj wabdjl", 64),
    Clue("gtzkvktarzosgzk vktarzosgzk rgyz loxyz tucnkxk", 33),
    Clue("xyzzksjely mashhhhl alohaa kqwertjdj podjl", 10),
    Clue("lurjkx lork zdz jui vrgik", 57),
]


solved_clues = list(
    map(
        lambda x: x.location.split()[0],
        filter(lambda x: (x.challenge_level % 6 == 3), clues),
    )
)

print(solved_clues)


# shift = sum of digits of the number of posts, kannada_koota had, as of 23.09.23
# ensure that the shift is a single digit number by doing sum of digits until it reduces to a single digit

A
