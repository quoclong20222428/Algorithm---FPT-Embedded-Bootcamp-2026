class Solution:
    def isValid(self, s: str) -> bool:
        st = []
        hash = {')' : '(', ']' : '[', '}' : '{'}

        for c in s:
            if c in hash:
                if st and st[-1] == hash[c]:
                    st.pop()
                else:
                    return False
            else:
                st.append(c)
        return not st
        
        