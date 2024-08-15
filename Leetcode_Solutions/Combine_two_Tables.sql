--This query solves the 175th problem on leetcode "Combine two Tables"--

select firstName,lastName,city,state from Person left join Address on Person.personId=Address.personId
