# Write your MySQL query statement below


update salary set sex = 
case sex
    WHEN 'm' THEN 'f'
    ELSE 'm'
end;