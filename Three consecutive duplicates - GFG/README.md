# Three consecutive duplicates
## Easy 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given a string S, in an operation you can remove 3 consecutive characters which are duplicates and concatenate the rest string. You can perform this operation any number of times. Find the reduced string.</span></p>

<p><span style="font-size:18px"><strong>Note:</strong> Return '-1' if the string is empty after removing the&nbsp;duplicates.</span></p>

<p><strong><span style="font-size:18px">Example 1:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:</strong> S = "</span><span style="font-size:20px">aabbbaccddddc</span><span style="font-size:18px">"
<strong>Output:</strong> ccdc
<strong>Explanation:</strong></span> <span style="font-size:18px">First remove 3 consecutive
b's and d's and then a's</span></pre>

<p><strong><span style="font-size:18px">Example 2:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:</strong> S = "</span><span style="font-size:20px">aabbaccddc</span><span style="font-size:18px">"
<strong>Output:</strong> </span><span style="font-size:20px">aabbaccddc</span><span style="font-size:18px">
<strong>Explanation:</strong></span> <span style="font-size:18px">No three consecutive 
duplicates exists</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the function <strong>remove3ConsecutiveDuplicates()&nbsp;</strong>which takes a string S as input and returns the string. </span><br>
<br>
<span style="font-size:18px"><strong>Expected Time Complexity:&nbsp;</strong>O(|S|).<br>
<strong>Expected Auxiliary Space:&nbsp;</strong>O(|S|).</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= |S| &lt;= 10<sup>5</sup><br>
S contains lower case English alphabets</span></p>
 <p></p>
            </div>