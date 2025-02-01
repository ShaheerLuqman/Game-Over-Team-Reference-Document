int findMinDifference(vector<int> &arr, int n,
                      int sumCalculated, int sumTotal)
{

    // Base case: if we've considered all elements
    if (n == 0)
    {
        return abs((sumTotal - sumCalculated) - sumCalculated);
    }

    // Include the current element in the subset
    int include = findMinDifference(arr, n - 1, sumCalculated + arr[n - 1], sumTotal);

    // Exclude the current element from the subset
    int exclude = findMinDifference(arr, n - 1, sumCalculated, sumTotal);
    return min(include, exclude);
}

// Function to get the minimum difference
int minDifference(vector<int> &arr)
{
    int sumTotal = 0;
    for (int num : arr)
    {
        sumTotal += num;
    }

    // Call recursive function to find
    // the minimum difference
    return findMinDifference(arr, arr.size(), 0, sumTotal);
}
