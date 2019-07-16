# What number is missing?
The <em>What number is missing?</em> is a simple zero-sum game. From [Wikipedia](https://en.wikipedia.org/wiki/Rock%E2%80%93paper%E2%80%93scissors):
> A simultaneous, zero-sum game, it has only two possible outcomes: a draw, or a win for one player and a loss for the other.

The objective game is to hit the 10 numbers that are missing in sequence.

### Business rules
Business rules are policies, conditions, or system constraints that must be considered in the execution of your processes. Business rules often influence the behavior of certain use cases.
+ The game board has 100 possibilities, but the system shows somenthing 99 numbers.
+ A number will be removed, but the number must be a true random number based on clock computer.
+ The system generate a random number between 1 and 100 hundred.
+ To win, the user needs to hit 10 numbers in sequence.


### Numbered description
The narrative of what the system and the user performed is described through a series of numbered steps.
1. The user start the system.
2. Based on clock computer, the system generate a random number between one and one hundred.
3. The random number is removed of visualization of the user.
3. The system shows a table with 99 numbers and the question: "**What number is missing?**".
4. The user enters your numeric answer between 1 and 100.
5. If the answer is correct, the user starts a new level. However, if the answer is incorrect, the system shows a message: "**You lose! Want to play again? Yes [y] or no [n]?**". If yes, starts a new game.
6. To win, the user needs to hit 10 numbers in sequence.
