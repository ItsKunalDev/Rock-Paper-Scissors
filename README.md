# Rock-Paper-Scissors Game

This is a simple game of Rock, Paper, Scissors written in C++.

## Features
- Play against the computer.
- The computer's choice is randomly generated.
- The game announces the winner of each round.
- Option to play multiple rounds.

## How It Works
1. The player is prompted to choose one of the following options: `Rock`, `Paper`, or `Scissors`.
2. The computer randomly selects one of the options.
3. The choices are compared, and the winner is determined based on the classic rules of the game:
   - Rock beats Scissors
   - Scissors beats Paper
   - Paper beats Rock
4. If both the player and the computer choose the same option, the round results in a tie.
5. The player is given the option to play another round or exit the game.




## Code Overview
The program consists of:
- A `body` class:
  - Initializes the computer's choice using a randomly generated index.
  - Contains a `function()` method to handle user input, compare choices, and display the result.
- A `main()` function:
  - Displays a welcome message.
  - Manages the game loop, allowing the player to play multiple rounds until they decide to quit.

## Example Gameplay
```
Welcome to Rock-Paper-Scissors!
Choose one: Rock, Paper, or Scissors: Rock
Computer chose: Paper
Computer wins!
Do you want to play again? (y/n): y
Choose one: Rock, Paper, or Scissors: Scissors
Computer chose: Paper
You win!
Do you want to play again? (y/n): n
Thanks for playing!
```

## Notes
- The `rand()` function is used to generate the computer's choice, seeded with the current time (`time(0)`) for randomness.
- The player's input is case-sensitive. Ensure that you type `Rock`, `Paper`, or `Scissors` exactly as shown.
- The game can be extended with additional features, such as keeping track of the score or handling invalid input gracefully.




