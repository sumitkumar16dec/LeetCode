# 9. Exchange matrix columns
## Easy 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">You are given a matrix&nbsp;of dimensions (<strong>n<sub>1</sub> x m<sub>1</sub>)</strong>. You have to exchange its first column with the last column.<br>
<br>
<strong>E</strong></span><span style="font-size:18px"><strong>xample 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input</strong>:
n1 = 4, m1 = 4
matrix[][] = {{1, 2, 3, 4},
&nbsp;             {5, 6, 7, 8},
     &nbsp;        {9, 10, 11, 12},
     &nbsp;        {13, 14, 15,16}}
<strong>Output</strong>: 
4 2 3 1 8 6 7 5 12 10 11 9 16 14 15 13
<strong>Explanation</strong>:
Matrix is as follow:
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16
After exchanging first&nbsp;column with 
last column, we have matrix as follows:
4 2 3 1
8 6 7 5
12 10 11 9
16 14 15 13</span></pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input</strong>:
n1 = 2, m1 = 3
matrix[][] = {{4, 3, 2},
&nbsp;             {1, 5, 6}}
<strong>Output</strong>: 2 3 4 6 5 1
<strong>Explanation</strong>:
Matrix is as follows:
4 3 2
1 5 6
After exchanging columns matrix will be:
2 3 4
6 5 1
</span>
</pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to take input or print anything.&nbsp;Complete the function <strong>exchangeColumns</strong>() that takes&nbsp;the matrix as input parameter and modifies it in place by&nbsp;exchanging&nbsp;its first column with its&nbsp;last column.<br>
<br>
<strong>Expected Time Complexity:</strong> O(n1 * m1)<br>
<strong>Expected Auxiliary Space:</strong> O(1)<br>
<br>
<strong>Constraints:</strong><br>
1 &lt;= n<sub>1</sub>, m<sub>1</sub>&lt;= 100<br>
0 &lt;= arr[i] &lt;= 100</span></p>
 <p></p>
            </div>