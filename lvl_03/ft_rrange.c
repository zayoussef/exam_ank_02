#include <stdlib.h>
#include <stdio.h>

#include <limits.h>

int     *ft_rrange(int start, int end)
{
    if (start == -2147483648)
        start = -2147483647;
    int i = 0;
    int len = abs(((long)end - (long)start) + 1);
    int s = 1;
    int *rs = (int *)malloc(sizeof(int) * len);
    if (start < end)
        s = -1;
    while (i < len)
    {
        rs[i] = end;
        end += s;
        i++;
    }
    return rs;
}


// Function prototype
int *ft_rrange(int start, int end);

int main() {
    int start = 87;
    int end = 2;
    // Call ft_rrange to generate the range
    int *range = ft_rrange(start, end);
    
    // Check if memory allocation was successful
    if (range == NULL) {
        printf("Memory allocation failed\n");
        return 1; // Return error code
    }

    // Print the generated range
    printf("Generated range: ");
    for (int i = 0; i < abs(end - start) + 1; i++) {
        printf("%d ", range[i]);
    }
    printf("\n");

    // Free the dynamically allocated memory
    free(range);

    return 0; // Return success code
}