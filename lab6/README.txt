Question 2: Stability [3 pts]
Is your selectionsort function a stable sort?

No. It will only be stable in some cases, but if list contained

2 3 4 5 6 2 8 1

Then next step will be

1 3 4 5 6 2 8 2

2 previously in 0 position is now in last position.
In the next step the list will be

1 2 4 5 6 3 8 2

The 2 originally in a position later than the first two will be
swapped to the front first and then the list will be

1 2 2 5 6 3 8 4

Proving that selection sort is not stable.


PROGRAM:

3 3 5 2 7 8 9 3 2 1

If stable 9*3 movements. 

More movements are expected:

vector<int> testNotStable = {3, 3, 5, 2, 7, 8, 9, 3, 2, 1};

selectionsort(testNotStable);

In this test only 7*3 movements.