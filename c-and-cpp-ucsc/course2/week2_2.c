#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#define NUM_HANDS = 10000
typedef enum suit{clubs, diamonds, hearts, spades} suit;
typedef struct card{int pipes; int suit;} card;
int no_pair()
{
    return 0;
}
void shuffle_deck(card* deck)
{
    srand((unsigned)time(NULL));
    int random_card;
    card temp;
    for(int i = 0; i < 52; i++)
    {
        // swap random card with current card
        random_card = rand() % 52;
        temp.pipes = (deck+random_card)->pipes; temp.suit = (deck+random_card)->suit;
        (deck+random_card)->pipes = (deck+i)->pipes; (deck+random_card)->suit = (deck+i)->suit;
        (deck+i)->pipes = temp.pipes; (deck+i)->suit = temp.suit;
    }

}
void print_deck(card* deck)
{
    for(int i = 0; i < 52; i++)
    {
        printf("suit %d, pipes %d\n", deck->suit, deck->pipes);
        deck++;
    }
}
int main()
{
    // init deck
    card deck[52];
    card* ptr_to_deck = deck;
    for(int i = 1; i < 5; i++)
    {
        for(int j = 1; j < 14; j++){
            ptr_to_deck->pipes = j;
            ptr_to_deck->suit = i;
            ptr_to_deck++;
        }
    }
    // shuffle_deck
    shuffle_deck(deck);
    // deal out first 7 card hands -> deck[0] ~ deck[6]
    // no pair? one pair? two pair? three of a kind? full house? 4 of a kind
    // print_deck(deck);
    // https://c-for-dummies.com/blog/?p=3810
    // https://en.wikipedia.org/wiki/Playing_cards_in_Unicode
    // https://github.com/dangookin/C-For-Dummies-Blog/blob/master/2019_11_02-Lesson.c
    return 0;
}