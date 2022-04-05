# Union of two arrays
## Easy
<div class="problem-statement">
                <p><a onclick="gtagHelperFunction('clickopen','salesevent_gsc_problemspage_promobanner')" href="https://practice.geeksforgeeks.org/summer-carnival-2022?utm_source=practiceproblems&amp;utm_medium=problemspromobanner&amp;utm_campaign=gsc22" target="_blank"></a></p><div style="margin: 14px 0px !important;" class="row"><a onclick="gtagHelperFunction('clickopen','salesevent_gsc_problemspage_promobanner')" href="https://practice.geeksforgeeks.org/summer-carnival-2022?utm_source=practiceproblems&amp;utm_medium=problemspromobanner&amp;utm_campaign=gsc22" target="_blank">             <div class="col-md-12" style="cursor:pointer;background: #EFF8F3 0% 0% no-repeat padding-box; display: flex; align-items: center; position:                 relative; padding: 1.5%; border-radius: 10px; display: inline-block; text-align: center; font-weight: 600; color: #333"> <img src="https://media.geeksforgeeks.org/img-practice/gcs2022thumbnail-1649059370.png" alt="Lamp" width="46" height="40" style="background: transparent 0% 0% no-repeat padding-box;opacity: 1; margin: 0 16px;" class="img-responsive"> Geeks Summer Carnival is LIVE NOW &nbsp; <i class="fa fa-external-link" aria-hidden="true"></i> </div></a></div><p><span style="font-size:18px">Given two arrays <strong>a[]</strong>&nbsp;and <strong>b[]</strong>&nbsp;of size <strong>n</strong>&nbsp;and <strong>m</strong> respectively. The task is to find union between these two arrays. </span></p>

<p><span style="font-size:18px">Union of the two arrays can be defined as the set containing distinct elements from both the arrays. If there are repetitions, then only one occurrence of element should be printed in the union.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>5 3
1 2 3 4 5
1 2 3
<strong>Output: 
</strong>5<strong>
Explanation: 
</strong>1, 2, 3, 4 and 5 are the
elements which comes in the union set
of both arrays. So count is 5.</span>
</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>6 2 
85 25 1 32 54 6
85 2 
<strong>Output: 
</strong>7<strong>
Explanation: 
</strong>85, 25, 1, 32, 54, 6, and
2 are the elements which comes in the
union set of both arrays. So count is 7.</span></pre>

<p><strong><span style="font-size:18px">Your Task:</span></strong><br>
<span style="font-size:18px">Complete <strong>doUnion </strong>funciton that takes<strong> a, n, b, m as parameters and returns</strong> the count of union elements of the&nbsp;two arrays. The <strong>printing </strong>is done by the <strong>driver </strong>code.</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong></span><br>
<span style="font-size:18px">1 ≤ n, m&nbsp;≤ 10<sup>5</sup><br>
0 ≤ a[i], b[i] &lt;&nbsp;10<sup>5</sup></span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity </strong>: O((n+m)log(n+m))<br>
<strong>Expected Auxilliary Space</strong> : O(n+m)</span></p>
 <p></p>
            </div>