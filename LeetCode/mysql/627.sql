# Write your MySQL query statement below
UPDATE salary
SET sex = CHAR(ASCII(sex) ^ ASCII('m') ^ ASCII('f'));