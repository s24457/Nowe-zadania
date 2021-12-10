int count_chars(string line, char a){
  int f = 0;
  string b(1,a);
  for (int i = 0; i < line.length();i++){
    if (line.substr(i,1) == b) {f++;}
  }
  return f;
}
