using System;

class Program
{
    static void Main()
    {
        Console.Write("Enter a word: ");
        string word = Console.ReadLine();

        string reversedWord = new string(word.ToCharArray().Reverse().ToArray());
        bool isPalindrome = word.Equals(reversedWord, StringComparison.OrdinalIgnoreCase);

        Console.WriteLine($"{word} is {(isPalindrome ? "a palindrome" : "not a palindrome")}");
    }
}