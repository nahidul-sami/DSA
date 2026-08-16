/* Write your PL/SQL query statement below */
select e.firstName ,e.lastName,d.city,d.state
from person e 
 left join address d
on e.personId=d.personId;