# Write your MySQL query statement below
SELECT name as Customers
FROM customers 
WHERE id not in(SELECT customerId FROM ORDERS)