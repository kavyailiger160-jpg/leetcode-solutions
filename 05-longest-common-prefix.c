#include <stdio.h>
#include <string.h>

void longestCommonPrefix(char strs[][100], int n)
{
    int i, j;

    for (i = 0; i < strlen(strs[0]); i++)
    {
        char current = strs[0][i];

        for (j = 1; j < n; j++)
        {
            if (strs[j][i] != current || strs[j][i] == '\0')
            {
                printf("Longest Common Prefix: ");
                
                for (int k = 0; k < i; k++)
                {
                    printf("%c", strs[0][k]);
                }

                printf("\n");
                return;
            }
        }
    }

    printf("Longest Common Prefix: %s\n", strs[0]);
}

int main()
{
    // Test Case 1
    char strs1[3][100] = {"flower", "flow", "flight"};

    printf("Test Case 1:\n");
    longestCommonPrefix(strs1, 3);

    // Test Case 2 - edge case
    char strs2[3][100] = {"dog", "racecar", "car"};

    printf("Test Case 2:\n");
    longestCommonPrefix(strs2, 3);

    return 0;
}