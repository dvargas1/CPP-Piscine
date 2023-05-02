#! bin/bash

cd ../

# test case 1 - valid input
echo "Testing with valid input File1, search string 'rio' and replace string 'sao paulo'..."
./SedIsForLosers tests/File1 Rio "Sao paulo"

# test case 1 - multiple changes
echo "\n\n Testing multiple changes in file, same rule as above..."
./SedIsForLosers tests/File2 Rio "Sao paulo"

# test case 2 - file not found
echo "\n\n Testing with invalid input file File100..."
./SedIsForLosers tests/File100 hello hi

# test case 3 - search string not found
echo "\n\n Testing with search string not found..."
./SedIsForLosers tests/File3 abc xyz

# test case 4 - search and replace strings are the same
echo "\n\n Testing with search and replace strings are the same..."
./SedIsForLosers tests/File3 beautiful beautiful

echo "\n\n Testing completed."