#!/bin/bash 
echo "Enter first number:" 
read a 
echo "Enter second number:" 
read b 
if [ $a -gt $b ] 
then 
  echo "Biggest number is $a" 
else 
  echo "Biggest number is $b" 
fi