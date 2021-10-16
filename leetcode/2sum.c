#include <stdio.h>
#include <stdlib.h>
int *twoSum(int *, int, int, int *);
void print(int *arr, int size)
{
    printf("The elements of the array are: ");
    for (int i = 0; i < size; ++i)
    {
        printf("%d, ", arr[i]);
    }
    printf("\n");
}

int main()
{

    int numsSize = 5;

    int *nums;

    nums = (int *)malloc(numsSize * sizeof(int));

    int i;
    for (i = 0; i < numsSize; ++i)
    {
        nums[i] = i + 1;
    }

    //1,2,3,4,5
    print(nums, numsSize);

    int target = 9;

    int *returnSize;
    int *ans = twoSum(nums, numsSize, target, returnSize);

    print(ans, 2);

    return 0;
}

int *twoSum(int *nums, int numsSize, int target, int *returnSize)
{
    int t;
    returnSize = (int *)malloc(2 * sizeof(int));

    for (int i = 0; i < numsSize; i++)
    {
        for (int j = i + 1; j < numsSize; j++)
        {
            t = nums[i]+nums[j];
            if(t==target){
                returnSize[0]=i;
                returnSize[1]=j;
                break;
            }
        }
    }

    return returnSize;
}