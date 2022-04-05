# Intersection of two arrays
## Easy 
<div class="problem-statement">
                <p><a onclick="gtagHelperFunction('clickopen','salesevent_gsc_problemspage_promobanner')" href="https://practice.geeksforgeeks.org/summer-carnival-2022?utm_source=practiceproblems&amp;utm_medium=problemspromobanner&amp;utm_campaign=gsc22" target="_blank"></a></p><div style="margin: 14px 0px !important;" class="row"><a onclick="gtagHelperFunction('clickopen','salesevent_gsc_problemspage_promobanner')" href="https://practice.geeksforgeeks.org/summer-carnival-2022?utm_source=practiceproblems&amp;utm_medium=problemspromobanner&amp;utm_campaign=gsc22" target="_blank">             <div class="col-md-12" style="cursor:pointer;background: #EFF8F3 0% 0% no-repeat padding-box; display: flex; align-items: center; position:                 relative; padding: 1.5%; border-radius: 10px; display: inline-block; text-align: center; font-weight: 600; color: #333"> <img src="https://media.geeksforgeeks.org/img-practice/gcs2022thumbnail-1649059370.png" alt="Lamp" width="46" height="40" style="background: transparent 0% 0% no-repeat padding-box;opacity: 1; margin: 0 16px;" class="img-responsive"> Geeks Summer Carnival is LIVE NOW &nbsp; <i class="fa fa-external-link" aria-hidden="true"></i> </div></a></div><p><span style="font-size:18px">Given two arrays&nbsp;<strong>a[]</strong> and <strong>b[]</strong> respectively of size <strong>n</strong> and <strong>m, </strong>the task is to print the count of elements in the intersection (or common elements) of the two arrays.</span></p>

<p><span style="font-size:18px">For this question, the intersection of two arrays can be defined as the set containing distinct common elements between the two arrays.&nbsp;</span></p>

<p><strong><span style="font-size:18px">Example 1:</span></strong></p>

<pre><strong><span style="font-size:18px">Input:
</span></strong><span style="font-size:18px">n = 5, m = 3
a[] = {89, 24, 75, 11, 23}
b[] = {89, 2, 4}

<strong>Output: </strong>1
<strong>
Explanation: 
</strong>89 is the only element 
in the intersection of two arrays.</span></pre>

<p><strong><span style="font-size:18px">Example 2:</span></strong></p>

<pre><strong><span style="font-size:18px">Input:
</span></strong><span style="font-size:18px">n = 6, m = 5
a[] = {1, 2, 3, 4, 5, 6}
b[] = {3, 4, 5, 6, 7} 

<strong>Output: </strong>4
<strong>
Explanation: 
</strong>3 4 5 and 6 are the elements 
in the intersection of two arrays.</span>
</pre>

<p><strong><span style="font-size:18px">Your Task:</span></strong><br>
<span style="font-size:18px">You don't need to read input or print anything.&nbsp;Your task is to complete the function&nbsp;<strong>NumberofElementsInIntersection()</strong><strong>&nbsp;</strong>which takes two integers <strong>n</strong>&nbsp;and <strong>m</strong>&nbsp;and their respective arrays&nbsp;<strong>a[]&nbsp;</strong>and&nbsp;<strong>b[]</strong> &nbsp;as input. The function should return&nbsp;the count of the number of elements in the intersection.</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:&nbsp;</strong>O(n&nbsp;+ m).<br>
<strong>Expected Auxiliary Space:&nbsp;</strong>O(min(n,m)).</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong></span><br>
<span style="font-size:18px">1 ≤ n, m&nbsp;≤ 10<sup>5</sup><br>
1 ≤ a[i], b[i] ≤ 10<sup>5</sup></span></p>
 <p></p>
            </div>