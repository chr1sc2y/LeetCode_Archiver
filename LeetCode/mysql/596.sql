SELECT
    class
FROM
    courses
GROUP BY
    class
HAVING
    COUNT(DISTINCT STUDENT) >= 5