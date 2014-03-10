import Data.Numbers.Primes

main :: Integer
main = sum $ [i | i <- take 2000000 primes, i < 2000000]