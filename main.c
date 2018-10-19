/*This program is used to classify how much vowels
 * consonants, digits, spaces and special characters
 * a line string has. Printing all of the answers to the user
 *
 * Author: Hugo Aguirre
 * Date: October 18th, 208
    */

#include <stdio.h>


int main() {

    //variable declaration
    char line[150];
    int n;
    int vowels;
    int consonants;
    int digits;
    int spaces;
    int specialc;

    vowels = 0;
    consonants = 0;
    digits = 0;
    spaces = 0;
    specialc = 0;

/*we ask the user for a line of string, it can be digits
 vowels, consonants, spaces and special characters.
 we use 'scanf("%[^\n]",line)' to read a string until user inputs
 a new line character including the spaces ' ' as strings*/
    printf("Enter a line of string: ");
    scanf("%[^\n]", line);



//establish the conditions according to lineaments
    for(n=0; line[n]!='\0'; n++)
    {
        if(line[n]=='a'|| line[n]=='e' || line[n]=='i' ||
           line[n]=='o' || line[n]=='u' || line[n]=='A' ||
           line[n]=='E' || line[n]=='I' || line[n]=='O' ||
           line[n]=='U')
        {
            vowels++;
        }
        else if((line[n]>='a'&& line[n]<='z') || (line[n]>='A'&& line[n]<='Z'))
        {
            consonants++;
        }
        else if(line[n]>='0' && line[n]<='9')
        {
            digits++;
        }
        else if (line[n]==' ')
        {
            spaces++;
        }
        else{
            specialc++;
        }
    }


    //we print the answers of the program.
    printf("Vowels: %d",vowels);
    printf("\nConsonants: %d",consonants);
    printf("\nDigits: %d",digits);
    printf("\nWhite spaces: %d", spaces);
    printf("\nSpecial characters: %d", specialc);

    return 0;
}
