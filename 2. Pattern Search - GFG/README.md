# 2. Pattern Search
## Easy 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given a string <strong>S</strong> and a pattern <strong>P</strong> consisting of lowercase characters. The task is to check if pattern P exists in the given string S or not.</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>S = abceabcdabceabcd
P = abcd
<strong>Output: </strong>Yes<strong>
Explanation: </strong>Given pattern abcd is
present at index 4.</span>
</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>S = abceabcdabceabcd
P = gfhij
<strong>Output: </strong>No<strong>
Explanation: </strong>Given pattern gfhij is
not found in the string.</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
The task is to complete the function <strong>search</strong>() which finds for the pattern with distinct characters. The function takes string and pattern as parameters and returns either<strong> true or false</strong>. Return true if pattern is found else return false.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:&nbsp;</strong>O(N + M).<br>
<strong>Expected Auxiliary Space:&nbsp;</strong>O(1).<br>
Note: N = |S|, M = |P|.</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= |S|, |P| &lt;= 10<sup>3</sup></span></p>
 <p></p>
            </div>