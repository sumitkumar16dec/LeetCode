# 1. Separate chaining in Hashing
## Easy 
<div class="problem-statement">
                <p></p><p><em><span style="font-size:18px">Separate chaining technique in hashing allows to us to use a linked list at each hash slot to handle the problem of collisions. That is, every slot of the hash table is a linked list, so whenever a collision occurs, the element can be appened as a node to the linked list at the slot.</span></em></p>

<p><span style="font-size:18px">In this question, we'll learn how to fill up the hash table using </span><strong><em><span style="font-size:18px">Separate chaining </span></em></strong><span style="font-size:18px"><strong>technique</strong>. Given an array and a hashtable size, you have to fill the elements of the array into a hash table of&nbsp;given size.&nbsp;</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>hashSize = 10
sizeOfArray = 6
arr[] = {92,4,14,24,44,91}
<strong>Output:
</strong>1-&gt;91
2-&gt;92
4-&gt;4-&gt;14-&gt;24-&gt;44<strong>
Explanation: </strong>92%10=2 so 92 goes to slot 2.
4%10=4 so 4 goes to slot 4. 14%10=4. But 4
is already occupied so we make a linked
list at this position and add 14 after 4 
in slot 4 and so on.</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>hashSize = 10
sizeOfArray = 5
arr[] = {12,45,36,87,11}
<strong>Output:
</strong>1-&gt;11
2-&gt;12
5-&gt;45
6-&gt;36
7-&gt;87<strong>
Explanation: </strong>12%10=2 so 12 goes to slot 2.
45%10=5 goes to slot 5. 36%10=6 goes to
slot 6. 87%10=7 goes to slot 7 and finally
11%10=1 goes to slot 1.</span>
</pre>

<p><strong><span style="font-size:18px">Your Task:</span></strong><br>
<span style="font-size:18px">This is a function problem. You need to complete the function <strong>separateChaining </strong>that takes<strong>&nbsp;hashSize, arr, and sizeOfArr</strong> as parameters, inserts elements of arr in the hashTable at positions by using <strong>arr[i]%hashSize&nbsp;</strong>and then returns the has table. The <strong>printing </strong>is done <strong>automatically </strong>by the <strong>driver code</strong>.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:&nbsp;</strong>O(N).<br>
<strong>Expected Auxiliary Space:&nbsp;</strong>O(N).</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
2 &lt;= hashSize &lt;= 10<sup>3</sup><br>
1 &lt;= sizeOfArray &lt;= 10<sup>3</sup><br>
0 &lt;= arr<sub>i</sub> &lt;= 10<sup>7</sup></span></p>

<p>&nbsp;</p>
 <p></p>
            </div>