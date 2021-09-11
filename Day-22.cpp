/**
*    Name: printArray
*    Print each element of the generic vector on a new line. Do not return anything.
*    @param A generic vector
**/

// Write your code here
template <typename T>
void printArray(vector <T> input)
{
  for (int i=0;i!=input.size();i++)
  {
  cout << input[i] << endl;
  }
}

