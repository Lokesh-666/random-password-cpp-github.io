# random-password-cpp-github.io

# Random Password Generator

## Overview

This project is a simple C++ program that generates a random password based on user input for the desired length. The password includes a mix of numbers, lowercase letters, uppercase letters, and special characters to ensure strength and security.

## Features

- Generates a random password of user-specified length.
- Includes numbers, lowercase and uppercase letters, and special characters.
- Shuffles the generated password to ensure randomness.

## Files

- `main.cpp`: Contains the main logic of the program, including the `Generate_random_password` function and the main function.

## How to Use

1. **Compile the Program**:
   ```
   g++ main.cpp -o password_generator
   ```
2. **Run the Program**:
   ```
   ./password_generator
   ```
3. **Follow the Prompts**:
   - The program will ask if you want to generate a random password. Enter `yes`, `Yes`, `y`, or `Y` to proceed.
   - Enter the desired length for your password when prompted.
   - The program will output the generated random password.

## Example

```
Do you want to generate a random password?
yes
How long do you want your password to be?
12
Generated Password: aB3#4kLm!Pq7
```

## Dependencies

- C++ standard library headers: `<algorithm>`, `<iostream>`, `<string>`

## Notes

- The program uses the `rand()` function for generating random numbers. For better randomness, consider using the C++11 `<random>` library.
- Ensure to compile with a C++11 compliant compiler for compatibility.

## License

This project is open-source and available under the MIT License.

---

### Follow-ups

(A) How to improve randomness using C++11 `<random>` library.
(B) How to add more character types to the password generator.
(C) How to create a GUI for this password generator using C++.
