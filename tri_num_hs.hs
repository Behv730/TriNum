{-# OPTIONS_GHC -Wall #-}
import GHC.Natural (Natural)
main :: IO()
-- main = putStrLn (show (isTri 3))

isTri :: Natural -> Bool 
isTri n = isTriHelper 0 n -- ljott finnst mer

isTriHelper :: Natural -> Natural -> Bool
isTriHelper x y  
  | sumNatNumsEuler x > y = False
  | sumNatNumsEuler x == y = True
  | otherwise = isTriHelper (sumNatNumsEuler (x+1)) y 

{-Recursive sum of the natural numbers til n-}
sumNatNumsRec :: Natural -> Natural
sumNatNumsRec n
  | n > 0 = n + sumNatNumsRec (n - 1)
  | otherwise = 0 -- basecase

-- Fa reverse order
sumNatNumsRecList :: Natural -> [Natural]
sumNatNumsRecList n
  | n > 0 = sumNatNumsEuler n : sumNatNumsRecList (n - 1)
  | otherwise = [] -- basecase

{-Euler sum of the natural numbers til n-}
sumNatNumsEuler :: Natural -> Natural
sumNatNumsEuler n = (n * (n + 1)) `div` 2

main = print (isTri 6)
