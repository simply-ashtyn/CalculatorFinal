using BlackjackObjects;
using System;
using System.Collections.Generic;

namespace Lab3
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.OutputEncoding = System.Text.Encoding.UTF8;
            Deck deck = new Deck();
            BlackjackGame newGame = new BlackjackGame();

            bool playing = true;
            do
            {
                Console.WriteLine("1. Play Blackjack\n2. Shuffle and Show Deck\n3. Sample Hands\n4. Exit");
                int choice = int.Parse(Console.ReadLine());
                if (choice == 1)
                {
                    Console.Clear();
                    newGame.PlayRound();
                    Console.ReadKey();
                    Console.Clear();
                }
                else if (choice == 2)
                {
                    Console.Clear();
                    deck.CreateAllCards();
                    deck.Shuffle();
                    Hand.PrintHand(x,y);
                    Console.ReadKey();
                    Console.Clear();
                }
                else if (choice == 3)
                {
                    Console.Clear();
                    List<Card> dealerHand = new List<Card>();
                    deck.Deal();
                    Console.ReadKey();
                    Console.Clear();
                }
                else
                {
                    playing = false;
                }

            } while (playing);


            Console.Clear();
            Console.WriteLine("Thanks for playing! Press any key to exit");
            Console.ReadKey();
        }
    }
}
