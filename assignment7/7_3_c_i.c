#include <stdio.h>
//hashing algorithm
int hashAlgorithm(int b)
{
    int x;
    x = b % 20;
    return x;
}
void hashSearch(int hash[], int b)
{
    int x = hashAlgorithm(b);
    if (hash[x] == b)
    {
        printf("Element Found at: %d\n", x + 1);
        return;
    }
    else
    {
        for (int i = 0; i < 20; i++)
        {
            if (hash[i] == b)
            {
                printf("Element Found at: %d\n", i + 1);
                return;
            }
        }
    }
    printf("Element Not Found!\n");
}
int main()
{
    int a[20] = {0, 5, 6, 10, 20, 2, 3, 25, 37, 36, 14, 15, 69, 12, 17, 18, 52, 23, 19, 89};
    int hash[20] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
    //filling up hash table
    int i, x, coll = 0;
    for (i = 0; i < 20; i++)
    {
        x = hashAlgorithm(a[i]);
        if (hash[x] == -1)
            hash[x] = a[i];
        else
        {
            coll++;
            if (hash[x + 1] == -1)
                hash[x + 1] = a[i];
            else
            {
                for (int j = 0; j < 20; j++)
                {
                    if (hash[j] == -1)
                    {
                        hash[j] = a[i];
                        break;
                    }
                }
            }
        }
    }
    //printing the hash table
    printf("Hash Table:\n");
    for (i = 0; i < 20; i++)
    {
        printf("%d  ", hash[i]);
    }
    printf("\n");
    hashSearch(hash, 5);
    hashSearch(hash, 20);
    hashSearch(hash, 1);
    hashSearch(hash, 36);
    hashSearch(hash, 19);
    hashSearch(hash, 17);
    hashSearch(hash, 18);
    hashSearch(hash, 6);
    hashSearch(hash, 2);
    hashSearch(hash, 37);
    printf("Number of collisions are: %d\n", coll);
    return 0;
}