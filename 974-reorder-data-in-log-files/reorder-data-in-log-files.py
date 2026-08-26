class Solution:

    def GetComparaisontuple(self, x):
        pos = x.find(" ")
        prefix = x[:pos-1]
        suffix = x[pos+1:]
        return (suffix,prefix)


    def reorderLogFiles(self, logs: List[str]) -> List[str]:
        digits = [log for log in logs if all([e.isdigit() for e in log.strip().split(" ")[1:]])]
        letters = [log for log in logs if all([e.isalpha() for e in log.strip().split(" ")[1:]])]

        print(digits, letters)

        sorted_letters = sorted(letters,key = lambda x: self.GetComparaisontuple(x))  
        return sorted_letters+digits      