class Solution:
    def subdomainVisits(self, cpdomains: List[str]) -> List[str]:
        d = defaultdict(int)

        for cpdomain in cpdomains:
            lcpdomain = cpdomain.split(" ")
            number, domain = int(lcpdomain[0]), lcpdomain[1]

            parts = domain.split(".")
            parts.reverse()

            suffix = ""
            for part in parts:
                if suffix:
                    subdomain = part + "." + suffix
                else:
                    subdomain = part
                d[subdomain] += number
                suffix = subdomain
                
        return [ str(d[key]) + " " + key for key in d.keys()]  







        