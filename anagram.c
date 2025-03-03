#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
        if (argc != 3) {
                puts("Usage: ./anagram WORD1 WORD2");
                return -1;
        }

        char *word1 = argv[1];
        char *word2 = argv[2];
        int length1 = strlen(word1);
        int length2 = strlen(word2);

        if (length1 != length2) {
                puts("Not an anagram");
                return 1;
        }

        for (int i = 0; i < length1; i++) {
                int same = 0;

                for (int j = 0; j < length2; j++) {
                        if (word1[i] == word2[j]) {
                                word2[j] = -1;
                                same = 1;
                                break;
                        }
                }

                if (!same) {
                        puts("Not an anagram");
                        return 1;
                }
        }

        puts("Anagram");
        return 0;
}
