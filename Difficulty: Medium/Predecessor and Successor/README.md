<h2><a href="https://www.geeksforgeeks.org/problems/predecessor-and-successor/1">Predecessor and Successor</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">You are given root node of the <strong>BST</strong> and the <strong>key</strong> node of the tree. You need to find the in-order <strong>successor</strong> and <strong>predecessor</strong> of a given key. If either predecessor or successor is not found, then set it to <strong>NULL</strong>.</span></p>
<p><span style="font-size: 18px;"><strong>Note</strong>:- In an inorder traversal the number just <strong>smaller</strong> than the target is the predecessor and the number just <strong>greater</strong> than the target is the successor.&nbsp;</span></p>
<p><span style="font-size: 18px;"><strong>Examples :</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input: </strong>root[] = [8, 1, 9, N, 4, N, 10, 3, N, N, N]<strong><br></strong>      8
&nbsp;   /   \
&nbsp;  1     9<br>   \      \<br>    4      10<br>   /<br>  3
key = 8
<strong>Output: </strong>4 9<strong>
Explanation: </strong>In the given BST the inorder predecessor of 8 is 4 and inorder successor of 8 is 9.</span></pre>
<pre><span style="font-size: 18px;"><strong>Input: </strong>root[] = [10, 2, 11, 1, 5, N, N, N, N, 3, 6, N, 4, N, N]<strong><br></strong>      10
&nbsp;   /   \
&nbsp;  2     11<br>  / \<br> 1   5<br>    / \<br>   3   6<br>    \<br>     4
key = 11
<strong>Output: </strong>10 -1<strong>
Explanation: </strong>In given BST, the inorder predecessor of 11 is 10 whereas it does not have any inorder successor.</span></pre>
<pre><span style="font-size: 18px;"><strong>Input: </strong>root[] = [2, 1, 3]<strong><br></strong>      2
&nbsp;   /   \
&nbsp;  1     3
key = 3
<strong>Output: </strong>2 -1</span></pre>
<p><strong style="font-size: 18px;">Constraints:&nbsp;</strong><span style="font-size: 18px;"><br>1 &lt;= Number of nodes &lt;= 10<sup>5</sup><br>1 &lt;= key &lt;= 10<sup>6</sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Ola Cabs</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Binary Search Tree</code>&nbsp;<code>Tree</code>&nbsp;<code>Data Structures</code>&nbsp;