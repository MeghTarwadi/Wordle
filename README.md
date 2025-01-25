# Wordle Game (Kisuke vs Aizen)

Welcome to **Wordle**—the CLI (Command Line Interface) game that lets you have a showdown with the legendary Aizen (from Bleach)! 🎮 Whether you want to guess the word or let the computer guess for you, this game has got you covered with a quirky twist of fun.

## Overview

This project is a **Wordle** game, where you play against Aizen (the computer) or guess words yourself. There are two modes:
1. **Guessing Mode**: You try to guess a randomly chosen word.
2. **Aizen Mode**: The computer (Aizen) tries to guess the word you picked.

In **Aizen Mode**, the algorithm gives you reasons why it chose certain words, and it does so in a fun dialogue format between **Kisuke Urahara (you)** and **Sosuke Aizen**. The output is like reading a story or a manga where you and Aizen are in a battle of wits!

---

## Features

- **A fun CLI game** where you face off with the famous Bleach characters.
- **Customizable word dataset**: Change `words_original.txt` to modify the words you play with.
- **Algorithm Explanation**: Each time Aizen guesses, you'll get a reason behind the guess. It’s like having your personal strategy coach!
- **Simplicity**: Only **two libraries** (stdlib.h and stdio.h) used, the rest is all custom-made code to make the game run fast and smooth.

---

## How to Play

1. **Download and Run**: Simply download the code from Git and run the `.c` file in your terminal. 
   - Example command (after downloading): 
     ```bash
     cd /wordle
     ./wordle
     ```

2. **Modes**: 
   - Guess the word: You try to guess the word, and the game will tell you which characters are in the right position and which ones aren’t.
   - Let Aizen guess: Choose a word, and let Aizen (the computer) guess it by following a unique algorithm that explains every step!

3. **Dialogue with Aizen**: During the game, Aizen will explain why it picked each word, and you’ll interact with him like reading a conversation in a manga.

4. **Custom Dataset**: Want to make it your own? Just modify `words_original.txt` with words of your choice. The program will split words based on length, and you’ll be ready to play your own customized version!

---

## How the Algorithm Works

The game uses a **linked list** to store potential word guesses and employs an algorithm I created to guess the word in just 2–3 guesses for large words. For smaller words (5-8 letters), it may take **4-5 guesses**. 

The magic happens like this:
- **Fixed positions**: Words that have characters in the right position are kept in the list.
- **Characters present but in wrong position**: We remove all words that place these characters in the wrong position.
- **No matching characters**: We eliminate words that don’t contain the guessed characters.

This repeats until the computer guesses the correct word! And along the way, Aizen explains **why** each guess was made.

---

## Installation

Not much installation required here. Just download the code and **run** it! 

Here’s how it works:
1. Download the `.c` file.
2. Run the executable and enjoy!

---

## Known Issues

- **Core Dumps**: If you input a super long word, the program might throw a **core dump** error and die (don't worry, it's not your fault, it's just the program trying its best to not crash under extreme conditions!).

---

## Why Did I Make This?

Honestly, I was inspired by a **YouTube video** that used AI to solve Wordle, and I thought, “Can I make something like that?” After some tinkering, I came up with this idea and turned it into a fun project. So, yeah, no one's probably going to use it, but I think it's fun to share and let others peek into how I think about algorithms.

---

## Screenshots

![image](https://github.com/user-attachments/assets/4b17912e-3096-4b17-9bfb-9c713e7691f8)
![image](https://github.com/user-attachments/assets/009a50cc-36b1-481b-a3fb-fc43b0601981)
---

---

## Future Improvements

There are **no future improvements** planned for now. This project is more about **fun** and **learning**. If you have suggestions or want to add something, feel free to fork it and make it your own!

---

Enjoy guessing with Aizen and Kisuke! And remember, it’s all just for fun. 😎
