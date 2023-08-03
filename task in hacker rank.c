
///task hacker rank pangrams

char* pangrams(char* str)
{
    char *s=malloc(100*sizeof(char));
    s="pangram";
    char *s2=malloc(100*sizeof(char));
    s2="not pangram";

    int count[27]= {0};
    int i,j;
    for(i=0; str[i]; i++)
    {

        if(str[i]>='A'&&str[i]<='Z')
        {
            count[str[i]-'A']++;

        }
        else if(str[i]>='a'&&str[i]<='z')
        {
            count[str[i]-'a']++;

        }
        else if(str[i]==' ')
        {
            count[27]++;
        }
        else
        {

            return s2;
            //nothing
        }
    }

    for(i=0; i<26; i++)
    {
        if(count[i]==0)
        {
            return s2;
        }
    }

    return s;
}



int main()
{


    char* s = "We promptly judged antique ivory buckles for the next prize";

    // char* s = "We promptly judged antique ";

    char* result = pangrams(s);

    printf("%s\n", result);



    return 0;
}




//===========================

// Heap Sort in C

#include <stdio.h>

// Function to swap the position of two elements

void swap(int* a, int* b)
{

    int temp = *a;

    *a = *b;

    *b = temp;
}

// To heapify a subtree rooted with node i
// which is an index in arr[].
// n is size of heap
void heapify(int arr[], int N, int i)
{
    // Find largest among root, left child and right child

    // Initialize largest as root
    int largest = i;

    // left = 2*i + 1
    int left = 2 * i + 1;

    // right = 2*i + 2
    int right = 2 * i + 2;

    // If left child is larger than root
    if (left < N && arr[left] > arr[largest])

        largest = left;

    // If right child is larger than largest
    // so far
    if (right < N && arr[right] > arr[largest])

        largest = right;

    // Swap and continue heapifying if root is not largest
    // If largest is not root
    if (largest != i)
    {

        swap(&arr[i], &arr[largest]);

        // Recursively heapify the affected
        // sub-tree
        heapify(arr, N, largest);
    }
}

// Main function to do heap sort
void heapSort(int arr[], int N)
{

    // Build max heap
    for (int i = N / 2 - 1; i >= 0; i--)

        heapify(arr, N, i);

    // Heap sort
    for (int i = N - 1; i >= 0; i--)
    {

        swap(&arr[0], &arr[i]);

        // Heapify root element to get highest element at
        // root again
        heapify(arr, i, 0);
    }
}

// A utility function to print array of size n
void printArray(int arr[], int N)
{
    for (int i = 0; i < N; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Driver's code
int main()
{
    int arr[] = { 12, 11, 13, 5, 6, 7 };
    int N = sizeof(arr) / sizeof(arr[0]);

    // Function call
    heapSort(arr, N);
    printf("Sorted array is\n");
    printArray(arr, N);
}


/// pairs

int pairs(int k, int arr_count, int* arr)
{

    heapSort(arr, arr_count);
    int i,j;
    int count=0;
    int flag=0;
    for(i=0; i<arr_count; i++)
    {
        flag=0;
        for(j=i; j<arr_count&&flag==0; j++)
        {

            if((arr[i]+k)==arr[j])
            {
                count++;
                flag=1;

            }
        }


    }
    return count;
}

