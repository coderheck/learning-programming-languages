def blackjack_hand_greater_than(hand_1, hand_2):
    """
    Return True if hand_1 beats hand_2, and False otherwise.

    In order for hand_1 to beat hand_2 the following must be true:
    - The total of hand_1 must not exceed 21
    - The total of hand_1 must exceed the total of hand_2 OR hand_2's total must exceed 21

    Hands are represented as a list of cards. Each card is represented by a string.

    When adding up a hand's total, cards with numbers count for that many points. Face
    cards ('J', 'Q', and 'K') are worth 10 points. 'A' can count for 1 or 11.

    When determining a hand's total, you should try to count aces in the way that
    maximizes the hand's total without going over 21. e.g. the total of ['A', 'A', '9'] is 21,
    the total of ['A', 'A', '9', '3'] is 14.

    Examples:
    >>> blackjack_hand_greater_than(['K'], ['3', '4'])
    True
    >>> blackjack_hand_greater_than(['K'], ['10'])
    False
    >>> blackjack_hand_greater_than(['K', 'K', '2'], ['3'])
    False
    """
    h1t=h1ac=h2t=h2ac=0
    for card in hand_1:
        if card == 'J' or card == 'Q' or card == 'K':
            h1t += 10
        elif card == 'A':
            h1ac += 1
        else:
            h1t += int(card)
    for card in hand_2:
        if card == 'J' or card == 'Q' or card == 'K':
            h2t += 10
        elif card == 'A':
            h2ac += 1
        else:
            h2t += int(card)
    # print(h1t,h1ac)
    # print(h2t,h2ac)
    while h1ac > 0 and h1t < 10:
        h1t += 10; h1ac -= 1
    h1t += h1ac; h1ac = 0
    while h2ac > 0 and h2t < 10:
        h2t += 10; h2ac -= 1
    h2t += h2ac; h2ac = 0
    # print(h1t,h1ac)
    # print(h2t,h2ac)
    if h1t > 21:
        return False
    elif h1t > h2t or h2t > 21:
        return True
    else:
        return False
    pass

print(blackjack_hand_greater_than(['K', 'K', '2'], ['3']))
