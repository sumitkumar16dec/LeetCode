# Interchanging the rows of a Matrix
## Easy 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given a matrix of dimensions n1 x m1. Interchange its rows&nbsp;in-place such that the first&nbsp;row&nbsp;will become the last&nbsp;row&nbsp;and so on.&nbsp;</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input</strong>:
n1 = 4, m1 = 4
matrix[][] = {{1, 2, 3, 4},
&nbsp;            {5, 6, 7, 8},
    &nbsp;        {9, 10, 11, 12},
    &nbsp;        {13, 14, 15,16}}
<strong>Output</strong>: 
13 14 15 16 9 10 11 12 5 6 7 8 1 2 3 4
<strong>Explanation</strong>:
Matrix after exchanging rows:
13 14 15 16
 9 10 11 12
 5  6  7  8
 1  2  3  4
<strong>Note</strong>: Output is printed row-wise linearly. 
</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input</strong>:
n1 = 5, m1 = 3
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15
matrix[][] = {{1, 2, 3},
&nbsp;            {4, 5, 6},
    &nbsp;        {7, 8, 9},
    &nbsp;        {10, 11, 12},
&nbsp;            {13, 14, 15}}
<strong>Output</strong>: 
13 14 15 10 11 12 7 8 9 4 5 6 1 2 3
<strong>Explanation</strong>:
After interchanging rows:
13 14 15
10 11 12
 7  8  9
 4  5  6
 1  2  3

</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You dont need to read input or print anything.&nbsp;Complete the function<strong> interchangeRows()&nbsp;</strong>that takes matrix<strong> </strong>as input parameter&nbsp;and modifies<strong> </strong>the matrix in-place such that the first row becomes the last row and so on.<br>
<br>
<strong>Expected Time Complexity:</strong> O(n1 * m1)<br>
<strong>Expected Auxiliary Space:</strong> O(1)<br>
<br>
<strong>Constraints:</strong><br>
1 &lt;= n<sub>1</sub>, m<sub>1</sub> &lt;= 100<br>
1 &lt;= matrix[i][j]&nbsp;&lt;= 1000</span></p>
 <p></p>
            </div>