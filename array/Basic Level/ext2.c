#include <stdio.h>

int main() {
    const char *words[26] = {
        "Apple",    
        "Ball",     
        "Cat",      
        "Dog",      
        "Elephant", 
        "Fish",     
        "Goat",     
        "Hat",      
        "Ice",      
        "Jug",      
        "Kite",     
        "Lion",     
        "Monkey",   
        "Nest",     
        "Owl",     
        "Parrot",   
        "Queen",    
        "Rabbit",   
        "Sun",      
        "Tiger",    
        "Umbrella", 
        "Van",      
        "Watch",    
        "Xylophone",
        "Yak",      
        "Zebra"     
    };

    for (int i = 0; i < 26; i++) {
        printf("%c - %s\n", 'A' + i, words[i]);
    }

    return 0;
}
