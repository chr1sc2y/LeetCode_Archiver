class Solution:
    def numUniqueEmails(self, emails):
        """
        :type emails: List[str]
        :rtype: int
        """
        email_set = set()
        for email in emails:
            local, domain = email.split(\u0027@\u0027)
            local = local.replace(\u0027.\u0027, \u0027\u0027)
            if \u0027+\u0027 in local:
                local = local[:local.index(\u0027+\u0027)]
            email_set.add(local + domain)
        return len(email_set)