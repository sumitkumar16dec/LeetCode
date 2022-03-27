# Multiply the matrices
## Easy
<div class="problem-statement">
                <p></p><p><em><span style="font-size:18px">When dealing with matrices, you may, sooner or later, run into the elusive task of matrix multiplication. Here, we will try to multiply two matrices and hope to understand the process.</span></em></p>

<p><span style="font-size:18px">Two matrices A[][] and B[][] can only be multiplied if number of columns in A is equal to number of rows in B. The dimensions of the resultant matrix will have A's row size and B's column size.</span></p>

<p><span style="font-size:18px">Given two matrices A and B having (n1 x m1) and (n2 x m2) dimensions respectively. Multiply A and B.&nbsp;</span></p>

<p><strong><span style="font-size:18px">Example 1:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>n1 = 3, m1 = 2
A[][] = {{4, 8},
         {0, 2}
         {1, 6}}
n2 = 2, m2 = 2
B[][] = {{5, 2},
         {9, 4}}
<strong>Output:</strong> 92 40 18 8 59 26
<strong>Explanation:</strong>
Matrices are of size 3 x 2 and 2 x 2 which 
results in 3 x 2 matrix with elements as:
res[][] = {{92, 40},
           {18, 8}
           {59, 26}}</span></pre>

<p><strong><span style="font-size:18px">Example 2:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
n1 = 1, m1 = 1
A[][] = {2}
n2 = 1, m2 = 1
B[][] = {3}
<strong>Output:</strong> 6
<strong>Explanation:</strong> Both matrices are of size 1 x 1 
which results in 1 x 1 matrix having element 6.</span></pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You dont need to read input or print anything. Complete the function <strong>multiplyMatrix()</strong> that takes A and B as input parameters and returns a matrix containing their product. If the multiplication is not possible return an empty matrix.</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(N1 * M1 * M2)<br>
<strong>Expected Auxiliary Space: </strong>O(N1 * M2) for resultant matrix.&nbsp;</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= n1, m1, n2, m2 &lt;= 30<br>
0 &lt;= Ai, Bi &lt;= 100</span></p>
 <p></p>
            </div>