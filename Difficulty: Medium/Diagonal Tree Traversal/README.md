<h2><a href="https://www.geeksforgeeks.org/problems/diagonal-traversal-of-binary-tree/1">Diagonal Tree Traversal</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 14pt;">Given a Binary Tree, return the <strong>diagonal traversal</strong> of the binary tree.</span></p>
<p><span style="font-size: 14pt;">Consider lines of slope -1 passing between nodes. Given a Binary Tree, return a single list containing all diagonal elements in a binary tree belonging to same line.<br>If the diagonal element are present in two different subtrees then left subtree diagonal element should be taken first and then right subtree.&nbsp;</span></p>
<p><span style="font-size: 14pt;"><strong>Examples :</strong></span></p>
<pre><span style="font-size: 14pt;"><strong>Input</strong> : root = [8, 3, 10, 1, 6, N, 14, N, N, 4, 7, 13]
&nbsp;           8
&nbsp;        /     \
&nbsp;       3      10
&nbsp;     /   \      \
&nbsp;    1     6     14
&nbsp;        /   \   /
&nbsp;       4     7 13
<strong>Output</strong> : [8, 10, 14, 3, 6, 7, 13, 1, 4]
<strong>Explanation</strong>:
<a href="http://d1hyf4ir1gqw6c.cloudfront.net//wp-content/uploads/unnamed1.png"><img class="alignnone size-full wp-image-137695" style="height: 264px; width: 406px;" src="https://contribute.geeksforgeeks.org/wp-content/uploads/diagonal.jpg" alt="unnamed">
</a>Diagonal Traversal of binary tree : 8 10 14 3 6 7 13 1 4<br><br><strong>Input:</strong> root = [1, 2, N, 3, N]</span><br><span style="font-size: 14pt;">                1
               /
              2
             /
            3</span><br><span style="font-size: 14pt;"><strong>Output:</strong> [1, 2, 3]</span></pre>
<p><span style="font-size: 14pt;"><strong>Constraints:</strong><br>1 &lt;= number of nodes&lt;= 10<sup>5</sup><br>1 &lt;= node-&gt;data &lt;= 10<sup>5</sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Amazon</code>&nbsp;<code>Microsoft</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Tree</code>&nbsp;<code>Data Structures</code>&nbsp;