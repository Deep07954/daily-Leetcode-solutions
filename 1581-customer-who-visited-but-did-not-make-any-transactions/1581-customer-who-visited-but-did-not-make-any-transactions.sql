# Write your MySQL query statement below
SELECT 
COUNT(*) AS count_no_trans,v.customer_id
FROM Visits v
LEFT JOIN Transactions t
ON v.visit_id=t.visit_id
WHERE t.visit_id IS NULL
GROUP BY v.customer_id
