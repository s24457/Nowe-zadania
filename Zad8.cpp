void Foo(string line, int n){
  for (int i = n-1; i < line.length(); i+=n)
  cout << line.substr(i,1);
}
