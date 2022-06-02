# 4. Rotate Deque By K
## Easy 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given a Deque <strong>deq </strong>of size <strong>N </strong>containing non-negative integers and a positive integer <strong>K</strong>, the task is to rotate elements of the deque by <strong>K</strong> places in a circular fashion. There will be two rotations which you have to implement depending on the type rotating query. Below is the description of rotating type and value of <strong>K</strong> for which you have to rotate in circular way:<br>
<strong>Type-1. right_Rotate_Deq_ByK():</strong> this function should rotate deque by K places in <strong>a clockwise</strong> fashion.<br>
<strong>Type-2. left_Rotate_Deq_ByK():</strong> this function should rotate deque by K places in<strong> an anti-clockwise</strong> fashion.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
6
1 2 3 4 5 6
1 2

<strong>Output:</strong> 
5 6 1 2 3 4&nbsp;

<strong>Explanation:</strong> 
The dequeue is 1 2 3 4 5 6. 
The query type is 1 and k is 2. So, we 
need to right rotate dequeue by 2 times. 
In 1 right rotation we get 6 1 2 3 4 5. 
In another we get 5 6 1 2 3 4.</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong> 
6
1 2 3 4 5 6 
2 2 

<strong>Output:</strong> 
3 4 5 6 1 2&nbsp;

<strong>Explanation:</strong> 
The dequeue is 1 2 3 4 5 6. 
The query type is 2 and k is 2. So, we 
need to left rotate dequeue by 2 times. 
In 1 left rotation we get 2 3 4 5 6 1. 
In another we get 3 4 5 6 1 2.</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
Since this is a <strong>functional </strong>problem you don't have to worry about the input. You just have to <strong>complete </strong>the functions <strong>right_Rotate_Deq_ByK() </strong>and<strong>&nbsp;left_Rotate_Deq_ByK()&nbsp;</strong>takes dequeue, size of dequeue, and a value K as input parameters and perform the operations. The <strong>functions </strong>are of <strong>a void </strong>type so <strong>don't</strong> return anything. The updated deque will be printed by the driver code.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity</strong>: O(N)<br>
<strong>Expected Auxilliary Space</strong>: O(1)</span></p>

<p><strong><span style="font-size:18px">Constraints:</span></strong><br>
<span style="font-size:18px">1 ≤ N ≤ 10<sup>5</sup></span></p>
 <p></p>
            </div>