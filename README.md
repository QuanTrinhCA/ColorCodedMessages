# [Problem D: Color-Coded Messages](https://nbhspc21.kattis.com/contests/nbhspc21/problems/nbhspc21.colorcodedmessages)

A picture is composed of pixels of different colors. The color of a pixel is coded as an “RGB code”: 3 integers, representing the “amount” of Red, Green, and Blue respectively in that color.

Possible colors and their RGB code:

<img width="441" alt="image" src="https://github.com/QuanTrinhCA/ColorCodedMessages/assets/44539970/be8a08af-c65b-4ed4-b299-f1c2a706b2db">

We would like to use a picture to send an encrypted message. Each pixel in the picture leads to a character in the secret message as follows: for each of the pixels in that picture, we find the closest known color. Then the first letter of that known color becomes the next character in the hidden message. We identify the closest color as the one (and only one) for which the sum of the “errors” is smaller than (but not equal to) 25. For example, if I have a pixel of color (255,250,10), its closest color is yellow because the sum of the errors (i.e., difference between the corresponding values, in absolute value) on each of the 3 numbers is smaller than 25:

We assume that the color Black (i.e., code (0,0,0)) represents a space, rather than ‘b’.

By concatenating these characters, we get the hidden message.

## Input
Of course, our input is not going to be that whole picture, but only its sequence of pixels. The first line contains a positive integer n (between 1 and 30), the number of pixels in the picture. Then there are n lines, one per pixel, containing the 3 numbers in the RGB code (each separated by a space). Note: each such number is always between 0 and 255.

## Output
Give the string containing each corresponding character, in the order presented in the input, and all on the same line (with a return character at the end). Make sure you add a space only when you get the code for that. Do not add any other characters, and only use lowercase characters. Note: there will always be exactly one color matching each of the pixels in the input.

## Sample Input 1
```
10
165 42 66
1 255 255
255 192 203
245 196 210
255 250 10
0 0 0
244 0 244
20 254 254
220 30 50
81 201 119
```

## Sample Output 1
```
happy face
```
