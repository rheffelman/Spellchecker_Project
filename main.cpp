#include<iostream>
#include<vector>
#include<string>
#include<stdio.h>
#include<unordered_set>
#include<fstream>
#include<istream>
#include"Dictionary.h"
using namespace std;

int main()
{ 
    
    Dictionary d("./bigDictionary.txt");
    printf("Please enter a string to spellcheck, or \"!exit\" to exit:\n");

    while (true)
    {
        string word;
        cin>>word;
        if (word == "!exit") break;
        if (!d.search(word))
        {
            printf("\"%s\" was detected as a mispelled word. Here are some suggestions:\n", word.c_str());
            vector<string>suggestions;
            d.getSuggestion(word, suggestions);
            printf("%d\n", suggestions.size());
            for (auto suggestion : suggestions)
            {
                printf("%s", suggestion.c_str());
                printf(" (LD: %d JCS: %.3f)\n", d.levenshteinDistance(word, suggestion), d.jaccardSimilarity(word, suggestion));
            }
            printf("\n");
        }
    }
}