import numpy as np
class Solution(object):
    def kidsWithCandies(self, candies, extraCandies):
        max_c=max(candies)
        ans=np.empty(len(candies))
        for i in range(len(candies)):
            if candies[i]+extraCandies>=max_c:
                ans[i]=True
            else:
                ans[i]=False
        return(ans)
