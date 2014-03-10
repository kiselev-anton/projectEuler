triangleNumber :: Integer -> Integer

triangleNumber number =  quot (number * (number - 1)) 2

-- divisors :: Integer -> Integer
dividing :: Integer -> Integer -> Bool
dividing divisor quotient = 
	quotient `rem` divisor == 0

sieve number (first:(second:list)) = 
	if last(list) == number
		then list
		else [first] ++ filter (not . dividing number) list

