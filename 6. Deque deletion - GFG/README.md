# 6. Deque deletion
## Easy
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given a Deque <strong>dqe</strong> of size <strong>N</strong> containing non-negative integers. </span></p>

<p><span style="font-size:18px">Complete below functions&nbsp;depending type of query as mentioned and&nbsp;provided to you (indexing starts from 0):<br>
<strong>1</strong>. <strong>eraseAt(X):</strong>&nbsp;this function should remove the element from specified position <strong>X</strong> in deque.<br>
<strong>2</strong>. <strong>eraseInRange(start, end):</strong> this function should remove the elements in range <strong>start</strong> (inclusive), <strong>end</strong> (exclusive) specified in the argument of the function. </span><br>
<span style="font-size:18px"><strong>Note:</strong> If start is equal to end then simply return.<br>
<strong>3</strong>. <strong>eraseAll():</strong> remove all the elements from the deque.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
5
1 2 4 5 6
1 2

<strong>Output:</strong> 
1 2 5 6&nbsp;

<strong>Explanation:</strong> 
Here the query type is 1 
and the position is 2. So we remove 
element at position 2. The element at 
position 2 is 1 2 <strong>4</strong> 5 6. So, we remove 
4 and get 1 2 5 6.</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong> 
4
1 2 3 4
2 1 3

<strong>Output:</strong> 
1 4&nbsp;

<strong>Explanation:</strong> 
Here the query type is 2 
and the range is [1, 3). So we need to 
delete 1 <strong>2</strong> <strong>3</strong> 4. Remember that end is 
exclusive. So the updated dequeue is 1 4.</span></pre>

<p><span style="font-size:18px"><strong>Example 3:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
3
1 2 3
3

<strong>Output:</strong> 
Empty

<strong>Explanation:</strong> 
Here the query is of type 3 
so we remove all the elements of dequeue.</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
Complete the functions&nbsp;<strong>eraseAt()</strong> which takes dequeue and a postion as input parameters,&nbsp;<strong>eraseInRange()&nbsp;</strong>which takes dequeue, start(inclusive) and end(exclusive) as input parameters and&nbsp;<strong>eraseAll()&nbsp;</strong>which takes a dequeue as input parameter.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity</strong>: O(N), for all operations<br>
<strong>Expected Auxilliary Space</strong>: O(1)</span></p>

<p><strong><span style="font-size:18px">Constraints:</span></strong><br>
<span style="font-size:18px">1 ≤ N ≤ 10<sup>5</sup></span></p>
 <p></p>
            </div>