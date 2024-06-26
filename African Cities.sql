SELECT CITY.name as Cities 
FROM city 
INNER JOIN  COUNTRY 
ON CITY.CountryCode=COUNTRY.Code
where COUNTRY.CONTINENT='Africa';