# Instructions
**Objective:** Write a phone number formatter.

## Background information 
We typically write out phone numbers with special formatting, for example: (123) 456-7890. However, we're programmers and programmers refuse to do any task that can be automated. Write a program that takes in a unformatted phone number `1234567890` and prints a formatted phone number `(123) 456-7890`

## Instructions
1. Take input for for a phone number. What data type should we store it in?
2. Use string manipulation to output the phone number formatted. Assume the user will enter the correct number of digits.

**Challenge:**
Do not assume the user will enter the correct number of digits. If the user enters too many or too few digits, output an error message.

## Test cases
### Case 1
```
Enter a phone number: 1234567890
(123) 456-7890
```

### Case 2
```
Enter a phone number: 9281626156   
(928) 162-6156
```

### Case challenge
```
Enter a phone number: 76545678192879
A phone number should be 10 integers in length.
```