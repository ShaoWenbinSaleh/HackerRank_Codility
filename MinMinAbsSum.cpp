/*
For a given array A of N integers and a sequence S of N integers from the set {−1, 1}, we define val(A, S) as follows:
val(A, S) = |sum{ A[i]*S[i] for i = 0..N−1 }|
(Assume that the sum of zero elements equals zero.)
For a given array A, we are looking for such a sequence S that minimizes val(A,S).
Write a function:
int solution(vector<int> &A);
that, given an array A of N integers, computes the minimum value of val(A,S) from all possible values of val(A,S) for all possible sequences S of N integers from the set {−1, 1}.
For example, given array:
  A[0] =  1
  A[1] =  5
  A[2] =  2
  A[3] = -2
your function should return 0, since for S = [−1, 1, −1, 1], val(A, S) = 0, which is the minimum possible value.
Assume that:
N is an integer within the range [0..20,000];
each element of array A is an integer within the range [−100..100].
Complexity:
expected worst-case time complexity is O(N*max(abs(A))2);
expected worst-case space complexity is O(N+sum(abs(A))), beyond input storage (not counting the storage required for input arguments).
Elements of input arrays can be modified.
*/

//This is not the correct answer
int solution(vector<int> &A) 
{
    // write your code in C++11
	int output = abs(A[0]);
	for (int i = 1; i < A.size(); i++)
	{
		output -= abs(A[i]);
		output = abs(output);
	}
	return output;
}
