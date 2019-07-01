class Solution:
    def numUniqueEmails(self, emails):
        """
        :type emails: List[str]
        :rtype: int
        """
        email_set = set()
        for email in emails:
            local, domain = email.split('@')
            local = local.replace('.', '')
            if '+' in local:
                local = local[:local.index('+')]
            email_set.add(local + domain)
        return len(email_set)