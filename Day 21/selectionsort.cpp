#include<iostream>
using namespace std;
int main()
{
    int arr[]={4,2,1,0,-1,-2,-3,-4,-5};
    int n=9;
    // selection sort 
    for(int i=0;i<n-1;i++)
    {   
        int smallest_i=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[smallest_i])
            {
                smallest_i=j;
            }
            swap(arr[i],arr[smallest_i]);
        }
       
    }

    for (int i =0;i<n;i++)
        {
            cout<<arr[i]<<endl;
        }
    
}


/* Great question! Understanding *why* you made these mistakes is key to improving. Here are the conceptual gaps:

## 1. **Confusion Between Value and Index**
You wrote `int smallest_i = arr[i];` - this suggests you're thinking about *what* the smallest element is, rather than *where* it is.

**Gap:** Understanding that when sorting, you need to track **positions** (indices) to know what to swap, not just values. The variable name `smallest_i` hints at "index" but you stored a value in it.

**Mental Model:** Think of it like finding the shortest person in a line - you don't just remember their height, you remember *which position they're standing in* so you can tell them to move.

## 2. **Not Understanding the Two-Phase Nature of Selection Sort**
You placed `swap()` inside the inner loop, swapping on every comparison.

**Gap:** Selection sort has two distinct phases:
- **Phase 1 (inner loop):** *Search* for the minimum 
- **Phase 2 (after inner loop):** *Act* on what you found (swap once)

You blurred these phases together. This is like looking at every item in a store, but buying each one as you see it, rather than finding the best one first, *then* buying it.

## 3. **Not Tracing Through Your Code**
The line `swap(arr[i], arr[smallest_i])` uses an array value as an array index - this would cause unpredictable behavior.

**Gap:** Not mentally executing your code step-by-step with concrete values. If you had traced it:
- `arr[i] = 4`
- `swap(arr[0], arr[4])` - wait, that doesn't make sense!

**Practice tip:** Use a debugger or manually write out what happens for the first 2-3 iterations with actual values.

## How to Fill These Gaps:

1. **Draw it out** - Sketch the array and manually perform selection sort with boxes and arrows
2. **Name variables clearly** - Use `min_index` instead of `smallest_i` to remind yourself what you're storing
3. **Separate concerns** - Ask yourself: "Am I searching or am I acting?" Keep these phases separate
4. **Dry run your code** - Before running, trace through with i=0, j=1,2,3... and write what each variable holds

These are common beginner mistakes - recognizing them means you're learning!
*/