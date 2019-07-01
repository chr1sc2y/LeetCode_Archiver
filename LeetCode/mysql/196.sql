DELETE P1
FROM Person AS P1, Person AS P2
WHERE
    P1.Email = P2.Email AND
    P1.Id > P2.Id;